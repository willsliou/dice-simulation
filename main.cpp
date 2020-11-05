#include <iostream>
#include "Dice.h"

int main() {
    const int DIE1_SIDES = 6;
    const int DIE2_SIDES = 6;
    const int MAX_ROLLS = 10;

    // Create 2 instances
    Die die1(DIE1_SIDES);
    Die die2(DIE2_SIDES);

    // Display
    std::cout << "Die 1 has " << die1.getSides() << " sides with a value of " << die1.getValue() << ".\n";
    std::cout << "Die 2 has " << die2.getSides()  << " sides with a value of " << die2.getValue() << ".\n";
    std::cout << "Beginning rolls...\n";

    for (int i = 0; i < MAX_ROLLS; i++)
    {
        std::cout << "** Roll " << i + 1 << " **\n";
        // Roll dice
        die1.roll();
        die2.roll();

        // Display dice values
        std::cout << die1.getValue() << " " << die2.getValue() << std::endl;
    }


}