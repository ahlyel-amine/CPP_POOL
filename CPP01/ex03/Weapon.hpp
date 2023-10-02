#pragma once
#include <iostream>

class Weapon
{
    private :
        std::string type;
    public :
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        std::string getType();
        void setType(std::string type);
};