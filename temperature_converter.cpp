// Name : Temperature Converter

#include <iostream>

void farenheit_celsius();
void celsius_farenheit();
int main() {
    char degree;

    std::cout<< "***** Temperature Converter *****\n";

    std::cout<< "What is your unit of temperature? (c/f): ";
    std::cin >> degree;
    
    degree = tolower(degree);

    if(degree == 'c'){ 
        celsius_farenheit();
    } else if(degree == 'f') {
        farenheit_celsius();
    } else {
        std::cout<< "Invalid degree.\n";
    }

    std::cout<< "***** ***** *****\n";

    return 0;
}
void farenheit_celsius() {
    int farenheit; 

    std::cout<< "Enter temperature(F): ";
    std:: cin>> farenheit;

    double celsius = (farenheit - 32) * 5/9;
    std::cout<< farenheit << " deg farenheit is equal to " << celsius << " deg celsius\n";
}
void celsius_farenheit() {
    int celsius;

    std::cout<< "Enter temperature(C): ";
    std::cin >> celsius;

    double farenheit = (celsius* 9/5) + 32;
    std::cout<< celsius << "deg celsius is equal to " << farenheit << " deg farenheit\n";
}
