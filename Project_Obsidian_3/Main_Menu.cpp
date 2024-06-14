#include "Main_Menu.h"









void Full_screen() {
    std::cout << "************************************************" << std::endl;
    std::cout << "* Please go full screen, then type any button. *" << std::endl;
    std::cout << "************************************************" << std::endl;
    system("pause");
    system("cls");
}

void Main_menu() {
    int Option = 0;

    while (true) {
        for (int i = 0; i < 10; i++) {
            std::cout << std::endl;
        }

        std::cout << "   .______   .______        ______          __   _______   ______ .___________.     ______   .______        _______. __   _______   __       ___      .__   __. " << std::endl;
        std::cout << "   |   _  \\  |   _  \\      /  __  \\        |  | |   ____| /      ||           |    /  __  \\  |   _  \\      /       ||  | |       \\ |  |     /   \\     |  \\ |  | " << std::endl;
        std::cout << "   |  |_)  | |  |_)  |    |  |  |  |       |  | |  |__   |  ,----'`---|  |----`   |  |  |  | |  |_)  |    |   (----`|  | |  .--.  ||  |    /  ^  \\    |   \\|  | " << std::endl;
        std::cout << "   |   ___/  |      /     |  |  |  | .--.  |  | |   __|  |  |         |  |        |  |  |  | |   _  <      \\   \\    |  | |  |  |  ||  |   /  /_\\  \\   |  . `  | " << std::endl;
        std::cout << "   |  |      |  |\\  \\----.|  `--'  | |  `--'  | |  |____ |  `----.    |  |        |  `--'  | |  |_)  | .----)   |   |  | |  '--'  ||  |  /  _____  \\  |  |\\   | " << std::endl;
        std::cout << "   | _|      | _| `._____| \\______/   \\______/  |_______| \\______|    |__|         \\______/  |______/  |_______/    |__| |_______/ |__| /__/     \\__\\ |__| \\__| " << std::endl;
        std::cout << "                                                                                                                                                                " << std::endl;


        for (int i = 0; i < 20; i++) {
            std::cout << std::endl;
        }

        


        std::cout << "   |Menu|  " << std::endl;
        std::cout << std::endl;
        std::cout << "   |1. Start game.                     |  " << std::endl;
        std::cout << "   |2. What's new, all latests updates!|  " << std::endl;
        std::cout << "   |3. Credits.                        |  " << std::endl;

        std::cout << "   |Please choose an option: ";
        std::cin >> Option;
        Main_menu_sound_correct();


        switch (Option)
        {
        case 1:

            // Signal the audio thread to stop
            stopAudioFlag = true;
            return;
        case 2:
            system("cls");
            for (int i = 0; i < 20; i++) {
                std::cout << std::endl;
            }
            std::cout << "You are on the version: 0.1" << std::endl;
            std::cout << std::endl;
            std::cout << "So basically nothing new :) except for the game itself :))" << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            system("pause");
            Main_menu_sound_correct();
            break;


        case 3:
            system("cls");
            std::cout << "This game was created by RARES STANCIU !" << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "  ______                      _____ _                   _       " << std::endl;
            std::cout << "  | ___ \\                    /  ___| |                 (_)      " << std::endl;
            std::cout << "  | |_/ /__ _ _ __ ___  ___  \\ `--.| |_ __ _ _ __   ___ _ _   _ " << std::endl;
            std::cout << "  |    // _` | '__/ _ \\/ __|  `--. \\ __/ _` | '_ \\ / __| | | | |" << std::endl;
            std::cout << "  | |\\ \\ (_| | | |  __/\\__ \\ /\\__/ / || (_| | | | | (__| | |_| |" << std::endl;
            std::cout << "  \\_| \\_\\__,_|_|  \\___||___/ \\____/ \\__\\__,_|_| |_|\\___|_|\\__,_|" << std::endl;
            std::cout << "                                                                " << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            system("pause");
            Main_menu_sound_correct();
            break;


        default:
            std::cout << "Please chose a valid answer." << std::endl;
            Main_menu_sound_error();
            system("Pause");
            break;
        }

        system("cls");
    }
}

void Main_menu_audio() {
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("Main_menu_sound.wav")) {
        std::cout << "**************************" << std::endl;
        std::cout << "Failed to load sound file!" << std::endl;
        std::cout << "The program will close    " << std::endl;
        std::cout << "in 10 seconds             " << std::endl;
        std::cout << "**************************" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(10));
        std::exit(0);
    }

    sf::Sound sound_HDD;
    sound_HDD.setBuffer(buffer);
    sound_HDD.play();

    // Continue playing until the flag is set
    while (!stopAudioFlag) {
        if (sound_HDD.getStatus() != sf::Sound::Playing) {
            sound_HDD.play();
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Stop the sound if the flag is set
    sound_HDD.stop();
}