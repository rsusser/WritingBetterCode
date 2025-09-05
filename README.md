# WritingBetterCode
Code examples for Informatica Feminale course "Writing Better Code" 2025

Dependencies:

1. cppunit (instructions for mac + Xcode)
cppunit can be installed using Homebrew with the command `brew install cppunit`.
This will save the headers and libs at /opt/homebrew/include/cppunit and
/opt/homebrew/lib/libcppunit.dylib, respectively. In Xcode, under Build Settings
for your testing targets, make sure /opt/homebrew/include is listed as a Header
Search Path and that LibrarySearchPaths includes /opt/homebrew/lib. Under Build
Phases, libcppunit.dylib should already be under Link Binary With Libraries. If
not, add the path /opt/homebrew/lib/libcppunit.dylib.


