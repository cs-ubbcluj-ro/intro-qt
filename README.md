# Intro in Qt

Qt project for OOP seminar 2026

## Requirements

To build and run this application you need to install the followings:

- [GCC](https://gcc.gnu.org)
- [CMake](https://cmake.org/)
- [Qt](https://www.qt.io/development/download)

On macOS, you can use these commands (assuming that [Homebrew](https://brew.sh/) is already installed):

```bash
brew install gcc
brew install cmake
brew install qt
```

## Usage

### Build the project

```bash
cmake -S . -B target
cmake --build target
```

### Run the project

```bash
./target/intro_qt
```