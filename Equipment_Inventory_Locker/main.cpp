
// Equipment inventory locker
// Users can borrow equipment, and admins can manage inventory.

#include <iostream>
#include <list>

#include "user.h"
#include "admin.h"

int main() {
    std::list<std::string> locker;

    locker.push_front("laptop");

    std::cout<< locker.front() << std::endl;

    

    return 0;
}

// pass the list by reference to manipulate the locker
// admin would be a class with there own functions that lets them manipulate the inventory
// user would be a class with lower access level functions, that will be able to borrow, vend, return.