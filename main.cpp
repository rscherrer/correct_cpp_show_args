#include <iostream>
#include <vector>
#include <iterator>

/// Function to print the content of a vector
template <class T>
void coutVector(const std::vector<T>& v)
{
    std::copy(std::begin(v), std::end(v), std::ostream_iterator<T>(std::cout, " "));
}

/// Main function
int main(int argc, char * argv[]) {

    // Convert arguments into a vector of strings
    std::vector<std::string> arguments(argv, argv + argc);

    // Print arguments to the prompt
    coutVector(arguments);

    std::cout << "\n";

    return 0;

}