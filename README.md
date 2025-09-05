# WritingBetterCode
Code examples for Informatica Feminale course "Writing Better Code" 2025

When cloning this repository, use `git clone --recursive` to automatically
set up the googletest submodule.

Dependencies:

1. cppunit (instructions for mac + Xcode)

cppunit can be installed using Homebrew with the command `brew install cppunit`.
This will save the headers and libs at /opt/homebrew/include/cppunit and
/opt/homebrew/lib/libcppunit.dylib, respectively.

Troubleshooting issues: In Xcode, under Build Settings for your testing targets,
make sure /opt/homebrew/include is listed as a Header Search Path and that
LibrarySearchPaths includes /opt/homebrew/lib. Under Build Phases, libcppunit.dylib
should already be under Link Binary With Libraries. If not, add the path
/opt/homebrew/lib/libcppunit.dylib.

2. googletest

googletest is included as a submodule within this repository. If you initially
cloned the top-level repo without the `--recursive` option, you can set this up
by calling `git submodule update --init --recursive` from inside the repo.
