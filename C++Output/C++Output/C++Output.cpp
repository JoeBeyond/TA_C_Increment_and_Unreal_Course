#include <iostream>

using namespace std;

// Using this namespace can create ambiguity when an additional #include points to another library without specifiying which namespace the identifier belonged. The compiler may call the wrong function. There are different solutions to this including "HelloWorld.cpp".

int main()
{
    cout << 3;

    // xyz::cout << "ABC"; is an example of using an identifier (xyz) pointing towards a specific library to access.

    cout << " Ducks";

    // Try to import code into a limited scope such as myFunction(). An example is "using namespace std;"
}
