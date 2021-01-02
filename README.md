This is a codebase based on [CryptoNote](https://cryptonote.org) cryptocurrency protocol.

* CryptoNote reference implementation: [CryptoNoteCoin](https://cryptonote-coin.org)
* Discussion board and support: [CryptoNote Forum](https://forum.cryptonote.org)

## Cipherium Binaries

* Linux 64 bit: [Cipherium_linux_x64_v1_0_0.tar.gz](http://cipherium.org/downloads.html)
* Windows 64 bit: [Cipherium_win_x64_v1_0_0.zip](http://cipherium.org/downloads.html)

## Building Cipherium

### On *nix

Dependencies: GCC 7.1.0 or later, CMake 2.8.6 or later, and Boost 1.55.

You may download them from:

* http://gcc.gnu.org/
* http://www.cmake.org/
* http://www.boost.org/
* Alternatively, it may be possible to install them using a package manager.

To build, change to a directory where this file is located, and run `make`. The resulting executables can be found in `build/release/src`.

**Advanced options:**

* Parallel build: run `make -j<number of threads>` instead of `make`.
* Debug build: run `make build-debug`.
* Test suite: run `make test-release` to run tests in addition to building. Running `make test-debug` will do the same to the debug version.
* Building with Clang: it may be possible to use Clang instead of GCC, but this may not work everywhere. To build, run `export CC=clang CXX=clang++` before running `make`.

### On Windows
Dependencies: MSVC 2013 or later, CMake 2.8.6 or later, and Boost 1.55. You may download them from:

* https://visualstudio.com/vs/community/
* http://www.cmake.org/
* http://www.boost.org/

To build, change to a directory where this file is located, and run these commands: 
```
mkdir build
cd build
cmake -G "Visual Studio 15 Win64" ..
msbuild Cryptonote.sln /p:Configuration=Release
```

