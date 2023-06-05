#pragma once
#include <iostream>

// Base class or parent class for admin class
class user {
    public: 
        std::string login;
        std::string borrowedItem = "";

        bool authenticate(std::string login);
        std::string borrowItem();
};