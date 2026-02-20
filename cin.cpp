#include <iostream>

int main()
{
std::cout << "Enter three numbers :) \n";
int x{}; //value-initialise an integer variable x 
int y{};
int z{};

std::cin >> x >> y >> z; // predefined variable 'cin' gets value from keyboard and store in variable x
std::cout << "You entered " << x << " and " << y << " and " << z << "\n";
return 0;
}

