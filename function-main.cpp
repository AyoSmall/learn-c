#include <iostream>

void dee()
{
    std::cout << "Start dee()\n";

    // dum();                                   // attempt to use dum() before it is defined !!!

    std::cout << "End dee\n";
}

void dum();                                                    // forward declaration, compiler is aware of this function

int get_num()                                                  // this function has a non-void return type!
{
    int num{};                                                 // declare a local variable, there must be some value to return...

    std::cout << "What's your favourite number?    ";
    std::cin >> num;

    return num;                                                // this function returns something
}

int double_num(int param)                                      // this function takes a parameter (this is also a local variable)
{
    int value{param * 2};
    std::cout << value << "\n";
    return value;
}

void other_file();                                      // forward declaration for out-of-file function. also compile function-source.cpp

int main()
{
    std::cout << "Start main()\n";

    dee();
    dum();

    std::string input{};
    while (input != "yes" && input != "y")
    {
        input = "";
        std::cout << "\nContinue? yes/y    --->  ";
        std::cin >> input;
    }

    get_num();                                                 // returns a value, which is then discarded
    double_num(get_num());                                     // nested function calls. main() calls double_num() calls get_num()
    other_file();

    std::cout << "End main()\n";
    return 0;    
}


void dum()
{
    std::cout << "Start dum()\n";

    dee();                                                      // nested function call, dee() is already defined :]

    std::cout << "End dum()\n";
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
// Identifier scope?
// - local variables are in scope from the point of creation (function call at runtime) to the end of the respective function body 
// - local variables are destroyed (in order of creation) at the end of their respective definition scope (curly braces / end of function)
// - after destruction, memory is deallocated
//
// Why use functions?
// - modularity / reusability
// - organisation / manageability
// - testing / reliability (if function produces intended result, it is reliable unless changed)
// - extensibility (changes to a function definition take effect ehreever the function is called)
// - abstraction (code can be used with only knowledge of necessary input and expected output)
//
// What to avoid?
// - nesting functions (function definitions in the body of another function)
// - calling functions which are not defined (forward calls are the exceptions)
*/