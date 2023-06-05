#pragma once
#include <iostream>
#include <list>
#include "user.h"

// Admin should be the derived class of user which will inherit its featues and additionally give invenotry
// management privileges.
class admin : private user {
    public:
        void print_name(std::string);

        bool adminAuthentication(/*user.login from the base cass */);
    private:
        void addItem(std::list<std::string> locker);
        void removeItem(std::list<std::string> locker);
};