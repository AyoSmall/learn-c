#include <iostream>

void dee()
{
    std::cout << "Start dee()\n";

    // dum();                                   // attempt to use dum() before it is defined !!!

    std::cout << "End dee\n";
}

void dum()
{
    std::cout << "Start dum()\n";

    dee();                                                      // nested function call, dee() is already defined :]

    std::cout << "End dum()\n";
}

int get_num()                                                  // this function has a non-void return type!
{
    int num{};                                                 // declare int num{}, there must be some value to return...

    std::cout << "What's your favourite number?    ";
    std::cin >> num;

    return num;                                                // this function returns something
}

int double_num(int param)                                      // this function takes a parameter
{
    int value{param * 2};
    std::cout << value << "\n";
    return value;
}

int main()
{
    std::cout << "Start main()\n";

    dee();
    dum();

    get_num();                                                 // returns a value, which is then discarded
    double_num(get_num());                                     // nested function calls. main() calls double_num() calls get_num()

    std::cout << "End main()\n";
    return 0;    
}

/*
// Function definition: 
// Function call: 
// 
// Where can function be defined?
// - internal (before the main function)
// - internal (forward call) 
// - external (function is defined in separate file, included to the compilation with a preprocessor directive)
// 
// Function argument scope?
// - 
//
// Why use functions?
// - modularity / reusability
//
// What to avoid?
// - nesting functions (function definitions in the body of another function)
// - calling functions which are not defined (forward calls are the exceptions)
*/