#include <iostream>
#include <random>
#include <chrono>

int main()
{


    std::mt19937 mt{static_cast<unsigned int>(std::chrono::steady_clock::now().time_since_epoch().count())};
    std::uniform_int_distribution die6{1 , 6};

    int userScore{};
    int computerScore{};
    int number{};
    
    std::cout << "Enter a number[1,6]\nEnter 0 to exit\n";

    while(true){
        std::cout << "Your score: " << userScore << "   computer score: " << computerScore << '\n';
        std::cout << "Enter your number: ";
        std::cin >> number;
        if(number == 0){
            std::cout << "You exit from game. Your final score is: " << userScore << '\n';
            break;
        }

        if(number < 1 || number > 6){
            std::cout << "The number is invalid!  please enter a number between 1 to 6\n";
            continue;
        }
        int computerNumber = die6(mt);
        std::cout << "compter choice: " << computerNumber << '\n';

        if(number == computerNumber){
            std::cout << "Equal , Both get one score\n";
            userScore++;
            computerScore++;
        }
        else if(number > computerNumber){
            std::cout << "You win , You get one score\n";
            userScore++;
        }
        else {
            std::cout << "You lose , computer get one score\n";
            computerScore++;
        }
        std::cout << "---------------------------------\n";   

}
    return 0;
}
