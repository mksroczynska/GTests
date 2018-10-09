### GTests
First tries with unit testing of the methods in the C++ class using Google Test.


#### Files:

- *CMakeLists.txt*:

   Build the whole project into two targets:
   - runTests - only tests
   - main - without tests

- *main.cpp*

   Just Hello World.

- *tests.cpp*

   Definitions of all the tests and the *main* function which runs all the tests.

- *whattotest.h*

   Definition of a simple class which is then tested. Contains on private method
   tested by
   *FRIEND_TEST* and several public methods.
