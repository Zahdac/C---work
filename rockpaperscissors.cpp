#include <iostream>
#include <random>
int getcomchoice()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 3);
    int y = distr(gen);
    return y;
}

void game();

int main()
{
    char choice;
    do
    {
        game();
        std::cout << "Would you like to play again?(y/n); " << " ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    std::cout << "Thanks for playing!" << '\n';
    system("pause");
    return 0;
}
void game()
{
    int rounds = 1;
    int player_wins = 0;
    int computer_wins = 0;
    char playerchoice;

    std::cout << "WELCOME TO ROCK PAPER SCISSORS!" << '\n';
    std::cout << "The tournament will be best of three! Good luck!" << '\n';
    while (player_wins < 2 && computer_wins < 2)
    {
        std::cout << "ROUND " << rounds << '\n';
        std::cout << "Make a choice (r,p,s)" << " ";
        std::cin >> playerchoice;
        getcomchoice();
        int computerchoice = getcomchoice();
        switch (playerchoice)
        {
        case 'r':
            if (computerchoice == 1)
            {
                std::cout << "The computer picked rock! You draw!" << '\n';
                std::cout << "Player wins: " << player_wins << '\n';
                std::cout << "Computer wins: " << computer_wins << '\n';
                rounds++;
            }
            else if (computerchoice == 2)
            {
                std::cout << "The computer picked paper! You lose!" << '\n';
                computer_wins++;
                std::cout << "Computer wins: " << computer_wins << '\n';
                std::cout << "Player wins: " << player_wins << '\n';
                rounds++;
            }
            else
            {
                std::cout << "The computer picked scissors! You win!" << '\n';
                player_wins++;
                std::cout << "Player wins: " << player_wins << '\n';
                std::cout << "Computer wins: " << computer_wins << '\n';
                rounds++;
            }
            break;
        case 'p':
            if (computerchoice == 1)
            {
                std::cout << "The computer picked rock! You win!" << '\n';
                player_wins++;
                std::cout << "Player wins: " << player_wins << '\n';
                std::cout << "Computer wins: " << computer_wins << '\n';
                rounds++;
            }
            else if (computerchoice == 2)
            {
                std::cout << "The computer picked paper! You draw!" << '\n';
                std::cout << "Player wins: " << player_wins << '\n';
                std::cout << "Computer wins: " << computer_wins << '\n';
                rounds++;
            }
            else
            {
                std::cout << "The computer picked scissors! You lose!" << '\n';
                computer_wins++;
                std::cout << "Computer wins: " << computer_wins << '\n';
                std::cout << "Player wins: " << player_wins << '\n';
                rounds++;
            }
            break;
        case 's':
            if (computerchoice == 1)
            {
                std::cout << "The computer picked rock! You lose!" << '\n';
                computer_wins++;
                std::cout << "Computer wins: " << computer_wins << '\n';
                std::cout << "Player wins: " << player_wins << '\n';
                rounds++;
            }
            else if (computerchoice == 2)
            {
                std::cout << "The computer picked paper! You win!" << '\n';
                player_wins++;
                std::cout << "Player wins: " << player_wins << '\n';
                std::cout << "Computer wins: " << computer_wins << '\n';
                rounds++;
            }
            else
            {
                std::cout << "The computer picked scissors! You draw!" << '\n';
                std::cout << "Player wins: " << player_wins << '\n';
                std::cout << "Computer wins: " << computer_wins << '\n';
                rounds++;
            }
            break;
        default:
            std::cout << "That is not a valid input!" << '\n';
        }
    }
}
