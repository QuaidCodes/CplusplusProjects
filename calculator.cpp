
#include <iostream>

int main()
{

    char operation;
    double num1;
    double num2;
    double result;

    std::cout << "********* Calculator **********\n";

    std::cout << "What operations would you like to perform? ";
    std::cin >> operation;

    std::cout << "What is the first number? ";
    std::cin >> num1;

    std::cout << "What is the second number? ";
    std::cin >> num2;

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        std::cout<< "Please enter valid parameters";
        break;
    }

    std::cout << "Ans: " << result << "\n";

    std::cout << "********* ********** **********";
    return 0;
}