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

    dee();                                      // nested function call, dee() is already defined :]

    std::cout << "End dum()\n";
}

std::string get_name()                          // This function has a non-void return type!
{
    std::string name{};                         // there must be some value to return

    std::cout << "What's your name?    ";
    std::cin >> name;

    return name;                                // this function returns something
}

int main()
{
    std::cout << "Start main()\n";

    dee();

    dum();

    get_name();

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