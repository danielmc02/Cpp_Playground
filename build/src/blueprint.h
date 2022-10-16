#ifndef BLUEPRINT_H
#define BLUEPRINT_H

#include <string>
#include <iostream>
class Human
{
    public:
    Human(): name("No Name"){};
    Human(std::string userName): name(userName){
        std::cout << "User has been created" << std::endl;
    };
    void printName();
    private:
    std::string name;
};

#endif