//
//  main.cpp
//  workingWithStrings
//
//  Created by Marc Badyna on 4/10/25.
//

#include <iostream>
#include <string>

int main() {
    
    std::cout<<"Please enter your first name: ";
    std::string name;
    std::cin>>name;
    
    const std:: string greeting = "Hello, " + name + "!";
    
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";
    
    const std::string first(second.size(), '*');
    
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
    
    return 0;
}
