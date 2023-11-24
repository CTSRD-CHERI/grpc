# Background

This software is an experimental Morello port of upb bef53686ec702607971bd3ea4d4fefd80c6cc6e8

## Build instructions

UPB is built with CMake or bazel. Due to bazel availability on morello, upb can only be built
as part of the gRPC library.
This repository only keeps track of changes applied for the CHERI-fied gRPC source tree.

## Notes and Limitations

Due to limitations in the build system, this can only be built as part of the gRPC library.

## Acknowledgement

This work has been undertaken within DSTL contract
ACC6036483: CHERI-based compartmentalisation for web services on Morello.
