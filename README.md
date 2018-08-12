### About
2ACoin is an innovative crypto-currency that is designed/developed to protect American's Second Amendment Rights. 2ACoin provides the benefits of a crypto-currency utilizing the CryptoNote algorithm and also supports the NRA with annual crypto payments. 

### How To Compile

On Linux or Mac on a non standard architecture, and can't get GNU Readline installed?

Disable it with `cmake .. -DFORCE_READLINE=FALSE`

#### Ubuntu 16.04+ and MacOS 10.10+

There is a bash installation script for Ubuntu 16.04+ and MacOS 10.10+ which can be used to checkout and build the project from source:

`$ curl -sL "https://raw.githubusercontent.com/2acoin/2acoin/master/scripts/multi_installer.sh" | bash `

On Ubuntu you will be asked for sudo rights to install software. The binaries will be in `./src` after compilation is complete.

This script can be used from inside the git repository to build the project from the checked out source, `./multi_installer.sh`

See the script for more installation details and please consider extending it for your operating system and distribution!

If the script doesn't work for you:

#### Linux

##### Prerequisites

- You will need the following packages: boost (1.55 or higher), rocksdb, cmake, git, gcc (4.9 or higher), g++ (4.9 or higher), make, GNU readline, and python. Most of these should already be installed on your system.
- For example on Ubuntu: `sudo apt-get install -y build-essential python-dev gcc g++ git cmake libboost-all-dev libreadline-dev`

##### Building

- `git clone https://github.com/2acoin/2acoin`
- `cd 2acoin`
- `mkdir build && cd $_`
- `cmake ..`
- `make`

#### Apple

##### Prerequisites

- Install [cmake](https://cmake.org/). See [here](https://stackoverflow.com/questions/23849962/cmake-installer-for-mac-fails-to-create-usr-bin-symlinks) if you are unable call `cmake` from the terminal after installing.
- Install the [boost](http://www.boost.org/) libraries. Either compile boost manually or run `brew install boost`.
- Install [GNU Readline](https://tiswww.case.edu/php/chet/readline/rltop.html) by running `brew install readline; brew link --force readline`. - Make sure you run this full command, or it will link the wrong version of readline
- Install XCode and Developer Tools.

##### Building

- `git clone https://github.com/2acoin/2acoin`
- `cd 2acoin`
- `mkdir build && cd $_`
- `cmake ..` or `cmake -DBOOST_ROOT=<path_to_boost_install> ..` when building
  from a specific boost install. If you used brew to install boost, your path is most likely `/usr/local/include/boost.`
- `make`

The binaries will be in `./src` after compilation is complete.

Run `./src/2ACoind` to connect to the network and let it sync (it may take a while).

#### Windows 10

##### Prerequisites
- Install [Visual Studio 2017 Community Edition](https://www.visualstudio.com/thank-you-downloading-visual-studio/?sku=Community&rel=15&page=inlineinstall)
- When installing Visual Studio, it is **required** that you install **Desktop development with C++** and the **VC++ v140 toolchain** when selecting features. The option to install the v140 toolchain can be found by expanding the "Desktop development with C++" node on the right. You will need this for the project to build correctly.
- Install [Boost 1.59.0](https://sourceforge.net/projects/boost/files/boost-binaries/1.59.0/), ensuring you download the installer for MSVC 14.

##### Building

- From the start menu, open 'x64 Native Tools Command Prompt for vs2017'.
- `cd <your_2acoin_directory>`
- `mkdir build`
- `cd build`
- Set the PATH variable for cmake: ie. `set PATH="C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin";%PATH%`
- `cmake -G "Visual Studio 14 Win64" .. -DBOOST_ROOT=C:/local/boost_1_59_0` (Or your boost installed dir.)
- `MSBuild 2ACoin.sln /p:Configuration=Release /m`
- If all went well, it will complete successfully, and you will find all your binaries in the '..\build\src\Release' directory.
- Additionally, a `.sln` file will have been created in the `build` directory. If you wish to open the project in Visual Studio with this, you can.

#### Thanks
Cryptonote Developers, Bytecoin Developers, Monero Developers, Forknote Project, 2ACoin Community

### Copypasta for license when editing files

Hi 2ACoin contributor, thanks for forking and sending back Pull Requests. Extensive docs about contributing are in the works or elsewhere. For now this is the bit we need to get into all the files we touch. Please add it to the top of the files, see [src/CryptoNoteConfig.h](https://github.com/2acoin/2acoin/blob/master/src/CryptoNoteConfig.h) for an example.

```
// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The 2ACoin Developers
// 
// Please see the included LICENSE file for more information.
```
