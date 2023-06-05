// Rock, Paper, Scissors

#include <iostream>

char userChoice();
char computerChoice();
void showChoices();
void showWinner(char userChoice, char computerChoice);
void rock();
void paper();
void scissors();

int main() {

    std::cout<< "Welcome to ROCK, PAPER, SCISSORS\n";
    showWinner(userChoice(), computerChoice());

    return 0;
}

char userChoice() {
    char userChoice;
    
    std::cout<< "***********************************************\n";
    showChoices();
    std::cout<< "'r' for rock, 'p' for paper, 's' for scissors\n";
    std::cout<< "***********************************************\n";
    std::cin>> userChoice;

    while(userChoice != 'r' && userChoice != 's' && userChoice != 'p') {
        std::cout<< "Invalid choice!\n";

        std::cout<< "'r' for rock, 'p' for paper, 's' for scissors\n";
        std::cin>> userChoice;
    }

    return userChoice;
}  
char computerChoice() {

    srand(time(NULL));

    short int random = (rand() % 3);

    std::string choices = "rps";

    return choices[random];
}
void showChoices() {
    rock();
    paper();
    scissors();
}

void showWinner(char userChoice, char computerChoice) {

    std::cout<< "You chose: ";
    switch(userChoice) {
        case 'r':
            rock();
            break;
        case 'p':
            paper();
            break;
        case 's':
            scissors();
            break;
    }


    std::cout<< "Computer chose:";
    switch(computerChoice) {
        case 'r':
            rock();
            break;
        case 'p':
            paper();
            break;
        case 's':
            scissors();
            break;
    }

    if(computerChoice == userChoice) {
        std::cout<< "It is a draw!";
    } else if(computerChoice == 'r' && userChoice == 'p') {
        std::cout<< "Rock loses to paper, you lose!";
    } else if(computerChoice == 'r' && userChoice == 's') {
        std::cout<< "Scissors loses to Rock, you lose!";
    } else if(computerChoice == 'p' && userChoice =='r') {
        std::cout<< "Paper beats rock, you win!";
    } else if(computerChoice == 'p' && userChoice == 's') {
        std::cout<< "Scissors beats paper, you win!";
    } else if(computerChoice == 's' && userChoice == 'p') {
        std::cout<< "Paper loses to scissors, you lose!";
    } else if(computerChoice == 's' && userChoice == 'r') {
        std::cout<< "Rock beats scissors, you win!";
    }
}

void rock() {
   std::cout<< 
R"(
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
)" << std::endl;
}

void paper() {
    std::cout<< 
R"(
     _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)    
)" << std::endl;
}

void scissors() {
    std::cout<<
R"(
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
)" << std::endl;
}