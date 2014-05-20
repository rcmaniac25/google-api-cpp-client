This is an early preview release (says Google). It is complete enough to interoperate with most 
if not all Google APIs using a REST style of interaction. Being an early preview, some details 
are likely to change in future releases as the libraries evolve and mature. Only Unix-like 
platforms (including Linux, OS/X, and BlackBerry) are supported in this preview release.

For more information regarding installation, consult the following document:
  http://google.github.io/google-api-cpp-client/latest/start/installation.html

To get started using the Google APIs Client Library for C++ see:
  http://google.github.io/google-api-cpp-client/latest/start/get_started.html

The Doxygen-generated API reference is available online at:
  http://google.github.io/google-api-cpp-client/latest/doxygen/index.html

For the current Google APIs Client Library for C++ see:
  http://github.com/google/google-api-cpp-client/

The current installation has only been tested on Unix/Linux systems, OS/X, and BlackBerry.
This release does not support Windows yet. The following sequence of actions should result 
in a turnkey build of the client libraries from the source code given only:
  Prerequisites:
    * python   (Available from http://www.python.org/getit/)
        - verified with versions 2.6.4 and 2.7.3
            - Note: BlackBerry comes with a version of Python installed
              but this version does not work (missing _socket), so you
              need to make sure a full version of Python is installed
              and will be used even after env. variables are setup.
    * C++ compiler and Make
        - Mac OSX       https://developer.apple.com/xcode/
        - Linux         http://gcc.gnu.org/
        - BlackBerry 10 http://developer.blackberry.com/native/downloads/
    * CMake
        - Either http://www.cmake.org/cmake/resources/software.html
        - or run ./prepare_dependencies.py cmake
          and restart your shell to get the updated path.

  Bootstrap Steps:
    Unix/Linux and OS/X (`v0.1` branch):
      ./prepare_dependencies.py
      ./external_dependencies/install/bin/cmake .
      make all
      make test
      make install
    BlackBerry (`blackberry/v0.1.2` branch):
      GNU specific:
        ./prepare_dependencies.py
        ./external_dependencies/install/bin/cmake . -DCMAKE_TOOLCHAIN_FILE="./blackberry.toolchain.cmake" -DCMAKE_PREFIX_PATH="./external_dependencies/install" -DBLACKBERRY_ARCHITECTURE=arm -G "Eclipse CDT4 - Unix Makefiles"
      Dinkum (and Cascades) specific:
        ./prepare_dependencies.py -k
        ./external_dependencies/install/bin/cmake . -DCMAKE_TOOLCHAIN_FILE="./blackberry.toolchain.cmake" -DCMAKE_PREFIX_PATH="./external_dependencies/install" -DBLACKBERRY_DINKUM=On -DBLACKBERRY_ARCHITECTURE=arm -G "Eclipse CDT4 - Unix Makefiles"
      make all
      make test
      make install

To download additional APIs specialized for individual Google Services see:
http://google.github.io/google-api-cpp-client/latest/available_service_apis.html

It should be possible to build this from existing installed libraries.
However, the build scripts are not yet written to find them. For initial
support simplicity we download and build all the dependencies in the
prepare_dependencies.py script for the time being as a one-time brute
force preparation.

If you have problems, questions, suggestions, or accoldtes, contact:
  The Google group at https://groups.google.com/group/google-api-cpp-client

Or you may also ask questions on StackOverflow at:
   http://stackoverflow.com with the tag google-api-cpp-client
