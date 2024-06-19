#include "Random_Chance.h"
#include "Player_Class_Derivates.h"

bool Random_Encounter_Chance () {
    static std::random_device rd;  // Random device
    static std::mt19937 gen(rd()); // Mersenne Twister generator seeded with rd()
    static std::uniform_int_distribution<> dis(1, 100); // Uniform distribution between 1 and 100

    // Generate a random number between 1 and 100
    int random_number = dis(gen);

    // Return true if the number is between 1 and 30 (inclusive), false otherwise
    return random_number <= 50;
}
