
// File contains definitions

#include <iostream>

// Member Class
class member {
    public:
        //Getters
        std::string getName();
        short int getAge();
        std::string getAddress();
        std::string getEmail();
        int getZipcode();
        std::string getPhoneNumber();
        int getMoney();

        //Setters
        void setName();
        void setAge();
        void setAddress();
        void setEmail();
        void setZipcode();
        void setPhoneNumber();
        void setMoney();

    private:
        std::string name;
        short int age;
        std::string address;
        std::string email;
        int zipcode;
        std::string phoneNumber;
        int money;
        
        // Methods
        void clubAttractions();
};

// Member class getter functions
std::string member::getName() {
    return this->name;
}
short int member::getAge() {
    return this->age;
}
std::string member::getAddress() {
    return this->address;
}
std::string member::getEmail() {
    return this->email;
}
int member::getZipcode() {
    return this->zipcode;
}
std::string member::getPhoneNumber() {
    return this->phoneNumber;
}
int member::getMoney() {
    return this->money;
}

// Member class setter functions
void member::setName(){
    this->name = "Quaid";
}
void member::setAge() {
    this->age = 18;
}
void member::setAddress() {
    this->address = "123 Main st";
}
void member::setEmail() {
    this->email = "someone@somewhere.com";
}
void member::setZipcode() {
    this->zipcode = 12345;
}
void member::setPhoneNumber() {
    this->phoneNumber = "123-456-7890";
}
void member::setMoney() {
    this->money = 0;
}

void member::clubAttractions() {
    char choice;

    std::cout<< "1.Bar\n";
    std::cout<< "2.Lounge\n";
    std::cout<< "3.Dance Floor\n";
    std::cout<< "4.Bathroom\n";
    std::cout<< "5. Exit\n";
    std::cin >> choice;

    switch(choice) {
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        case '5':
            break;
        default:
            std::cout<< "There are only five attractions!\n";
    }   
}
