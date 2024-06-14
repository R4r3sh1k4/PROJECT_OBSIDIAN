#include "Main_Menu_Sounds.h"



void Main_menu_sound_correct() {
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("Correct_Sound.wav")) {
        std::cout << "**************************" << std::endl;
        std::cout << "Failed to load sound file!" << std::endl;
        std::cout << "The program will close    " << std::endl;
        std::cout << "in 10 seconds             " << std::endl;
        std::cout << "**************************" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(10));
        std::exit(0);
    }

    sf::Sound sound_correct;
    sound_correct.setBuffer(buffer);
    sound_correct.play();
    std::this_thread::sleep_for(std::chrono::milliseconds(300));

}


void Main_menu_sound_error() {
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("Error_Sound.wav")) {
        std::cout << "**************************" << std::endl;
        std::cout << "Failed to load sound file!" << std::endl;
        std::cout << "The program will close    " << std::endl;
        std::cout << "in 10 seconds             " << std::endl;
        std::cout << "**************************" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(10));
        std::exit(0);
    }

    sf::Sound sound_error;
    sound_error.setBuffer(buffer);
    sound_error.play();
    std::this_thread::sleep_for(std::chrono::milliseconds(300));

}
