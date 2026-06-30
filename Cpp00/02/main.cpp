#include <iostream>
#include <string>

int main(void)
{
    std::string     str= "HI THIS IS BRAIN";
    std::string*    stringPTR = &str;
    std::string&    stringREF = str;

    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "Value of the string: " << str << std::endl;
    std::cout << "The value pointed by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed by stringREF: " << stringREF << std::endl;

    return(0);
}