# CMake C++ Project Template with Unit Testing and Doxygen

#### Install dependencies

```bash
sudo apt update
sudo apt install build-essential git doxygen \
                 apt-transport-https ca-certificates gnupg \
                 software-properties-common wget
```

#### Install latest CMake version

```bash
wget -qO - https://apt.kitware.com/keys/kitware-archive-latest.asc | sudo apt-key add -
```

```bash
sudo apt-add-repository 'deb https://apt.kitware.com/ubuntu/ focal main'
sudo apt update
```

```bash
sudo apt install cmake
```

#### Building

```bash
make
make install
```

#### Running the tests

```bash
❯ bin/utest_divider
[==========] Running 5 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 5 tests from DividerTest
[ RUN      ] DividerTest.5_DivideBy_2
[       OK ] DividerTest.5_DivideBy_2 (1 ms)
[ RUN      ] DividerTest.9_DivideBy_3
[       OK ] DividerTest.9_DivideBy_3 (0 ms)
[ RUN      ] DividerTest.17_DivideBy_19
[       OK ] DividerTest.17_DivideBy_19 (0 ms)
[ RUN      ] DividerTest.Long_DivideBy_Long
[       OK ] DividerTest.Long_DivideBy_Long (0 ms)
[ RUN      ] DividerTest.DivisionByZero
[       OK ] DividerTest.DivisionByZero (0 ms)
[----------] 5 tests from DividerTest (1 ms total)

[----------] Global test environment tear-down
[==========] 5 tests from 1 test case ran. (1 ms total)
[  PASSED  ] 5 tests.
```

#### Running the CLI Executable

Without arguments, it prints out its usage:

```bash
❯ bin/divider

Usage:
	divider <numerator> <denominator>

Description:
	Computes the result of a fractional division,
	and reports both the result and the remainder.
```

But with arguments, it computes as expected the denominator:

```bash
❯ bin/divider 112443477 12309324

Division : 112443477 / 12309324 = 9
Remainder: 112443477 % 12309324 = 1659561
```
