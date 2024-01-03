#include <iostream>
#include "player.h"

int main() {
    std::string name;
    int age;

    // User is asked to enter their name and age.
    std::cout << "Please enter your first name: ";
    std::cin >> name;
    std::cout << "Please enter your age: ";
    std::cin >> age;

    // Player class is called.
    Player player(name, age);
    player.introducePlayer();
    player.showRules();
    return 0;
}