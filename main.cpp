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

    // int x = 10, y = 3;
    // x =+ 3;
    // std::cout << x;

    // int32_t nums[3] = {2,4,3};
    // std::cout << (nums[0] << nums[1]<<nums[2] ); // not 243
    
    // int i = 0;
    // printf("%d", i++);
    // printf("%d", i--);
    // printf("%d", ++i);
    // printf("%d", --i);

    // int x = 10, y = 20;
    // std::cout << "x= " << x++ << "y= " << --y << std::endl;
    // std::cout << "x= " << x-- << "y= " << ++y << std::endl;

    // std::cout << ~true;
}