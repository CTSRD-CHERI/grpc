# Background

This software is an experimental Morello port of gRPC 1.48.1

## Build instructions

gRPC is build with CMake and Bazel. The bazel build is unsupported,
this has limitations for the test infrastructure.

First, install the build and test dependencies:

`$ sudo pkg64 install cmake ninja python`

gRPC has a number of dependencies which must be installed before building.
This must be done using the ports collection.
The [CheriBSD ports collection](https://github.com/CTSRD-CHERI/cheribsd-ports) must be cloned
to the system. Refer to the full FreeBSD [documentation](https://docs.freebsd.org/en/books/handbook/ports/)
to install packages from the ports collection.

Briefly, for each dependency that can not be sourced from pkg64c, the corresponding port must be built.
Here is an example for the c-ares package.

```
# cd /usr/ports/
# make
# make install
```

The following packages are required from the ports collection:
    - devel/benchmark
    - devel/gflags
    - devel/re2
    - dns/c-ares

The abseil and protobuf packages must be installed as well. These are part of this experimental
release in a [separate ports collection](https://github.com/CTSRD-CHERI/cheribsd-ports-dasa).
Once the maturity of the ports is satisfactory, they should be available from the main CheriBSD ports collection.


The build is configure to mimic the setup found in the CheriBSD ports collections as follows:

```
$ cmake -B out -G Ninja
    -DCMAKE_CXX_STANDARD=17
    -DgRPC_ABSL_PROVIDER=package
    -DgRPC_BENCHMARK_PROVIDER=package
    -DgRPC_CARES_PROVIDER=package
    -DgRPC_GFLAGS_PROVIDER=package
    -DgRPC_PROTOBUF_PROVIDER=package
    -DgRPC_RE2_PROVIDER=package
    -DgRPC_SSL_PROVIDER=package
    -DgRPC_ZLIB_PROVIDER=package
    -DBUILD_SHARED_LIBS=ON
    -DgRPC_BUILD_CODEGEN=ON
    -DgRPC_BUILD_GRPC_CPP_PLUGIN=ON
    -DCMAKE_PREFIX_PATH=/usr/local
    -DgRPC_BUILD_TESTS=ON

$ ninja -C out
```

## Library compartmentalization

When using Library compartmentalisation gRPC and its dependencies must be build with the
following flags: `-Xclang -morello-bounded-memargs=caller-only`.
This can be done by adding the following line to your `/etc/make.conf`

```
CFLAGS+=        -Xclang -morello-bounded-memargs=caller-only
```

The target program which will link to gRPC must use the c18n runtime linker, this can
be done by adding the following linker flag:

`-Wl,--dynamic-linker=/libexec/ld-elf-c18n.so.1`

or can be changed after the binary has been created using patchelf:

```
$ patchelf --set-interpreter /libexec/ld-elf-c18n.so.1  path/to/binary
```

The change of runtime linker can be verified with `readelf -l`.

## Testing

### Unit testing

Unit testing is designed to be driven by Bazel, with minimal cmake support.
The CMakeLists.txt has been patched to permit the use of `ctest`,
this has some limitations for integration tests that require setup but will cover most unit tests.
It is possible to run tests from the build directory as follows:

```
$ python tools/run_tests/start_port_server.py
$ ctest
        Start   1: alloc_test
  1/361 Test   #1: alloc_test ...........................................................   Passed    0.18 sec
        Start   2: alpn_test
  2/361 Test   #2: alpn_test ............................................................   Passed    0.05 sec
        Start   3: alts_counter_test
  3/361 Test   #3: alts_counter_test ....................................................   Passed    0.05 sec
        Start   4: alts_crypt_test
  4/361 Test   #4: alts_crypt_test ......................................................   Passed    0.18 sec
        Start   5: alts_crypter_test
  5/361 Test   #5: alts_crypter_test ....................................................   Passed    0.05 sec
        Start   6: alts_frame_protector_test
  6/361 Test   #6: alts_frame_protector_test ............................................   Passed    0.65 sec
  ...
```

When running in this way, about 75% of the tests should pass, the following tests are expected to fail:

```
78 - resolve_address_using_ares_resolver_posix_test (Subprocess aborted)
79 - resolve_address_using_native_resolver_posix_test (Subprocess aborted)
91 - ssl_transport_security_test (Subprocess aborted)
97 - tcp_posix_test (SIGPIPE)
177 - examine_stack_test (Failed)
197 - grpc_cli (Failed)
203 - grpc_tool_test (Timeout)
212 - http2_client (Subprocess aborted)
214 - httpcli_test (Subprocess aborted)
215 - httpscli_test (Subprocess aborted)
222 - interop_client (Subprocess aborted)
223 - interop_server (Subprocess aborted)
261 - qps_json_driver (Subprocess aborted)
262 - qps_worker (Timeout)
297 - stack_tracer_test (Failed)
322 - thread_stress_test (Subprocess aborted)
328 - tls_key_export_test (Failed)
347 - xds_cluster_end2end_test (Timeout)
355 - xds_interop_client (Timeout)
356 - xds_interop_server (Failed)
359 - xds_ring_hash_end2end_test (Timeout)
```

Alternatively, it is possible to run unit tests using the python infrastructure as follows:

```
$ python tools/run_tests/run_tests.py -l c++
```


## Notes and Limitations

There are two sets of limitations concerning the CHERI compatibility of this software:

1. Test coverage is not optimal due to the testing infrastructure being tuned for bazel.
   Some tests are known to fail because of missing test infrastructure handling, a small portion
   of the tests fail because the underlying functionality is not fully ported to CHERI yet.
2. The morello Clang compiler will generate warnings of the form `DON'T know how to handle ...`.
   These are due to a known issue in the morello compiler but are not affecting core gRPC
   functionality.

Adaptations to gRPC to the memory-safe CheriABI have been driven by:
compiler warnings and errors, and dynamic testing. Where the compiler
emits a warning or error we are able to rigorously review this and
correct. However, some issues only manifest dynamically (at runtime),
such as invalidation of capabilities by pointer arithmetic,
non-blessed memory copies, or insufficient pointer alignment.
Enhancements such as CHERI UBsan have modestly improved the ability to
identify problems previously only found during dynamic testing. However,
 we are still greatly reliant on dynamic testing. This testing is
constrained by both the completeness of the test suites (which in some
cases provide poor coverage) and the time available within the project
to perform testing. Whilst it is know that errors remain outside the
core gRPC library functionality we are not able to estimate what problems might
remain beyond those resolved in the scope of the project.

## Acknowledgement

This work has been undertaken within DSTL contract
ACC6036483: CHERI-based compartmentalisation for web services on Morello.
