#ifndef DIE_H
#define DIE_H

class Die {
    private:
        // Number of sides and value
        int sides;
        int value;

    public:
        // Constructor
        Die(int = 6);
        // Roll function
        void roll();
        // Returns num of sides
        int getSides();
        // Returns the die value
        int getValue();
};

#endif
