#include <iostream>
#include <string>

class Player {
    private:
        std::string playerName;
        int playerAge;
    public:
        Player(std::string name, int age) : playerName{name}, playerAge{age} 
        {}

        void introducePlayer() {
            std::cout << "Hello " << playerName << " to the game of 21!" << std::endl;
        }

        void showRules() {

            std::cout << " _______________________________________________________________ " << std::endl;

            std::cout << "|\t\t\t How To Play" << "\t\t\t\t|" << std::endl;

            std::cout << "|_______________________________________________________________|" << std::endl;
            
            std::cout << "|\t" << "1) The dealer and each player start with two" << "\t\t|" << std::endl
                        << "|\t" << "   cards. The dealer's first card faces up, the" << "\t\t|" << std::endl
                        << "|\t" << "   second faces down. Face cards each count as" << "\t\t|" << std::endl
                        << "|\t" << "   10, Aces count as 1 or 11, all others count at" << "\t|" << std::endl
                        << "|\t" << "   face value. An Ace with any 10, Jack, Queen, or" << "\t|" <<std::endl
                        << "|\t" << "   King is a \"Blackjack.\"" << "\t\t\t\t|" << std::endl;
            
            std::cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << std::endl;

            std::cout << "|\t" << "2) If you have a Blackjack, the dealer pays you" << "\t\t|" << std::endl
                        << "|\t" << "   one-and-a-half times your bet --- unless the" << "\t\t|" << std::endl
                        << "|\t" << "   dealer also has a Blackjack, in which case it's a" << "\t|" << std::endl
                        << "|\t" << "   \"push\" and neither wins." << "\t\t\t\t|" << std::endl;

            std::cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << std::endl;
            
            std::cout << "|\t" << "3) If you don't have Blackjack, you can ask the" << "\t\t|" << std::endl
                        << "|\t" << "   dealer to \"hit\" you by pressing 0 (No) or 1 (Yes)." << "\t|" << std::endl;

            std::cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << std::endl;

            std::cout << "|\t" << "4) You can only draw five cards (one at a time)," << "\t|" << std::endl
                        << "|\t" << "   but if you go over 21, you \"bust\" and lose." << "\t\t|" << std::endl
                        << "|\t" << "   If you do not want to \"hit\", you may \"stand\"" << "\t\t|" << std::endl
                        << "|\t" << "   by just pressing 0 (No)." << "\t\t\t\t|" << std::endl;

            std::cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << std::endl;

            std::cout << "|\t" << "5) After all players are satisfied with their hands" << "\t|" << std::endl
                        << "|\t" << "   the dealer will turn his or her down card face" << "\t|" << std::endl
                        << "|\t" << "   up and stand or draw as necessary." << "\t\t\t|" << std::endl;
            
            std::cout << "|_______________________________________________________________|" << std::endl;
        }

};