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
            std::cout << "Hello " << playerName << " to 21!" << std::endl;
        }

};