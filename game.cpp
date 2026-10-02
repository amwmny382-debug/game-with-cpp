#include <iostream>
#include <random>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player , char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice is: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "The computer choice is: ";
    showChoice(computer);

    chooseWinner(player , computer);
    return 0;
}

char getUserChoice(){
    char player;
    do{

        std::cout << "choose one of them\n";
        std::cout << "'r' for Rock\n" << "'p' for Paper\n" << "'s' for scissors\n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice(){
    
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}
void showChoice(char choice){

    switch(choice){
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
    }

}
void chooseWinner(char player , char computer){

    switch(player){
        case 'r':   if(computer == 'r'){
                        std::cout << "Equal\n";
                    }else if(computer == 'p'){
                        std::cout << "You lose\n";
                    }else{
                        std::cout << "You win\n";
                    }
                    break;
        case 'p':   if(computer == 'r'){
                        std::cout << "You win\n";
                    }else if(computer == 'p'){
                        std::cout << "Equal\n";
                    }else{
                        std::cout << "You lose\n";
                    }
                    break;
        case 's':   if(computer == 'r'){
                        std::cout << "You lose\n";
                    }else if(computer == 'p'){
                        std::cout << "You win\n";
                    }else{
                        std::cout << "Equal\n";
                    }
                    break;
    }

}

