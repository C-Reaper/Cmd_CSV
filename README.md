# Project README

## Overview
- The project is a simple C application that reads data from a CSV file, processes the data, and outputs the results to another CSV file.

## Features
- Reading data from a CSV file.
- Processing the data (currently no processing is done, just copying data).
- Writing the processed data to another CSV file.

## Project Structure
- `src/Main.c`: The entry point of the application.
- `data/Data.csv`: Input CSV file with sample data.
- `Makefile.linux`: Build configuration for Linux.
- `Makefile.windows`: Build configuration for Windows.
- `Makefile.wine`: Build configuration for building a Windows executable on Linux using Wine.
- `Makefile.web`: Build configuration for building WebAssembly (Wasm) for the web environment.

### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools

## Build & Run
To build the project, navigate to the project directory and run:
```sh
make -f Makefile.(os) all
```
Replace `(os)` with `linux`, `windows`, `wine`, or `web` depending on your target platform.

For example, for Linux:
```sh
make -f Makefile.linux all
```

To execute the built application:
```sh
make -f Makefile.(os) exe
```
Replace `(os)` with one of the above values.