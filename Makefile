# Makefile

# Default target
all: build

# Create the "build" directory if it doesn't exist, then build the project
build: | build_dir
	cd build && cmake ..
	cd build && make

# Create the "build" directory if it doesn't exist
build_dir:
	mkdir -p build

# Clean the build
clean:
	rm -rf build lib bin include doc/html doc/latex

# Install the project (run make install in the "build" directory)
install: build
	cd build && make install

.PHONY: all build build_dir clean
