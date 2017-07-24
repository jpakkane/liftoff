# The liftoff sample project

This repository contains a software project that has many independent
modules with interdependencies. The point is to demonstrate how you can
lay out such a project with Meson.

The project consists of the following subprojects:

 - `lo_test`, a simple unit testing framework
 - `lo_adder`, a helper module for adding integers, depends on `lt_test`
 - `lo_strings`, a helper module for manipulating strings, has no dependencies
 - `lo_shuttle`, an application to launch shuttles, depends on all other modules

# Compiling and running

On the command line:

    meson build
    ninja -C build test

Visual Studio users may use the VS project generator instead. Run the following from the VS
tools command prompt:

    python path/to/meson.py --backend=vs

Then open the generated solution and build it (note that it has not been tested yet).

# Working on a single subproject

The Meson option `module` defines which subproject you want to build. To build everything,
set is value to `all`. It can be changed by running the following command in the build dir:

    mesonconf -Dmodule=lo_test

When rebuild, Meson will regenerate its build definitions to match your setup.

Note that if you select e.g. `lo_adder`, Meson will automatically add `lo_test`
because it is a direct dependency. Non-dependency subprojects are not built.

# Toggling between shared and static libraries

The dependencies can be built either as shared or static libraries. To toggle
between the two run the following command in the build dir:

    mesonconf -Ddefault_library=shared [or static]

On next recompilation the build is reconfigured to your specified type.

# Header only dependency

The `lo_strings` subproject can be built in a pseudo "header only" mode. In practice
it just adds the source files to the target it is being built in. This is the command:

    mesonconf build -Dlo_strings:header_only=true

A rebuild will again reconfigure the project setup.
