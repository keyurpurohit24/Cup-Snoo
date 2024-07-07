# Cup-Snoo
"Cup-Snoo" is a Grahpical Animation made in C with the help of `graphics.h`.

This repository contains C program that use the `graphics.h` library to create graphical output. These program were originally created as part of a college assignment in 2019.

## Table of Contents
- [Introduction](#introduction)
- [Screenshots](#screenshots)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)

## Introduction

These program demonstrate the use of the `graphics.h` library to create simple graphical applications in C. The applications include:

1. A coffee cup with a text message.
2. A billiards game setup.

## Screenshots

Here are some screenshots of the program in action:
![1](https://github.com/keyurpurohit24/Cup-Snoo/assets/65395662/b07816c2-143e-42e5-a211-8cf7eee399c4)
![2](https://github.com/keyurpurohit24/Cup-Snoo/assets/65395662/14be6646-772c-42c1-b3f2-2dd1b2768cc8)
![3](https://github.com/keyurpurohit24/Cup-Snoo/assets/65395662/a55c99f9-535c-4ef3-b2a7-ea287249252e)

## Requirements

To run these program, you need the following:

- A DOS emulator like DOSBox.
- Turbo C++ compiler with `graphics.h` library.
- The `graphics.h` file should be placed in the `include` directory of your Turbo C++ installation.
- The corresponding library file (`graphics.lib`) should be in the `lib` directory.

## Installation

1. **Install DOSBox:**
   - Download and install DOSBox from [DOSBox official site](https://www.dosbox.com/).

2. **Set Up Turbo C++:**
   - Download the Turbo C++ setup.
   - Install Turbo C++ and set up the directories as required.

3. **Configure DOSBox to Run Turbo C++:**
   - Open the DOSBox configuration file (`dosbox.conf`).
   - Add the following lines at the end of the file to mount your Turbo C++ directory and start the Turbo C++ IDE automatically:

     ```
     [autoexec]
     mount c path\to\turboc
     c:
     cd TC\BIN
     TC.EXE
     ```

4. **Place `graphics.h` and `graphics.lib`:**
   - Ensure that `graphics.h` is in the `TC\INCLUDE` directory.
   - Ensure that `graphics.lib` is in the `TC\LIB` directory.

## Usage

1. **Open DOSBox.**
2. **Compile and Run the program:**
   - Open the Turbo C++ IDE.
   - Open the C program files in the IDE.
   - Compile and run the program to see the graphical output.

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request for any improvements or additional features.
