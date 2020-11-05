#include <cstdlib> // rand/srand
#include <ctime> // time function
#include "Dice.h" 
// using namespace std;

// Constructor
// Input: Number of sides for die
// Output: N/A
// Description: Does one roll
Die::Die(int numSides) {
    // Get the system time
    unsigned seed = std::time(0);

    // Seed the random number generator
    std::srand(seed);

    // Set the num of sides
    sides = numSides; // sides is private

    // Does one roll
    roll();
}

// Roll member function
// Input: N/A
// Output: N/A
// Description: Picks random value of die within a range. Simulates one roll
void Die::roll() {
    const int MIN_VALUE = 1;

    // Random value within a range of num of sides
    value = (rand() % (sides - MIN_VALUE + 1) ) + MIN_VALUE; // value is private
}

// getSides member function
// Input: N/A
// Output: Returns number of sides for die as an integer datatype
// Description: Picks random value of die within a range. Simulates one roll
int Die::getSides() {
    return sides;
}

// getValue member function
// Input: N/A
// Output: Returns die's value as an integer
// Description: Returns value of die
int Die::getValue() {
    return value;
}

int Die::oneRoll() {
    roll();
    getValue();
}