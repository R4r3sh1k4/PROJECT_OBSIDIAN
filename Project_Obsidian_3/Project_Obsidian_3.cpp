#include "Master_Header.h"






int main()
{

    ////////////////////////////////////////////
    Gravis gravis;
    Levis levis;
    Burner burner;

    std::cout << "Gravis crit chance: " << (gravis.Crit_Chance() ? "true" : "false") << std::endl;
    std::cout << "Levis crit chance: " << (levis.Crit_Chance() ? "true" : "false") << std::endl;
    std::cout << "Burner crit chance: " << (burner.Crit_Chance() ? "true" : "false") << std::endl;
    system("pause");
    system("cls");
    Choose_Class();

    system("pause");
    ////////////////////////////////////////////
    std::cout << "Hello World!\n";

    // Main menu :) 
    {
        Full_screen();

        // Start Main_menu_audio() and Main_menu() in separate threads
        std::thread audioThread(Main_menu_audio);
        Main_menu();

        // Wait for the audio thread to finish
        audioThread.join();
    } 
    system("cls");
    // Intro :))
    {
        std::thread IntroMusicThread(Intro_audio);

        std::thread TextIntroNarrationThread(Text_Intro_Narration);

        // Start the main menu thread
        std::thread TextIntroThread(Text_Intro);

        // Wait for both threads to finish
        IntroMusicThread.join();
        TextIntroNarrationThread.join();
        TextIntroThread.join();
        system("Cls");
    }
    





    return 0;
}