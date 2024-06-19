#include "Misc_Functions.h"




/////////////////////////////////////////////////////////
// P r o m p t   t o   p l a y e r   t o   s e l e c t 

int Choose_Class() {
    int Choise = 0;
    char Y_N = 0;
    while (true) {


        std::cout << "    Please choose a class: " << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;



        std::cout << "   1. Gravis " << std::endl;
        std::cout << "   2. Levis " << std::endl;
        std::cout << "   3. Burner " << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;

        std::cout << "Your option: ";

        std::cin >> Choise;
        Main_menu_sound_correct();
        system("cls");

        if (Choise == 1) {

            std::cout << " G R A V I S " << std::endl;
            std::cout << "intro gravis" << std::endl;
            std::cout << "intro gravis" << std::endl;
            std::cout << "intro gravis" << std::endl;
            std::cout << "intro gravis" << std::endl;
            std::cout << "intro gravis" << std::endl;

            std::cout << "Do you want to play as this class? (y/n)" << std::endl;
            std::cin >> Y_N;
            if (Y_N == 121){
                system("cls");
                Main_menu_sound_correct();
                std::cout << "You are now a Gravis class!" << std::endl;
                system("Pause");
                system("cls");
                return 1;
            }
            else {
                system("cls");
                Main_menu_sound_error();
                std::cout << "Invalid confirmation." << std::endl;
                system("Pause");
                system("cls");

            }


        }
        else if (Choise == 2) {



            std::cout << " L E V I S " << std::endl;
            std::cout << "intro levis" << std::endl;
            std::cout << "intro levis" << std::endl;
            std::cout << "intro levis" << std::endl;
            std::cout << "intro levis" << std::endl;
            std::cout << "intro levis" << std::endl;

            std::cout << "Do you want to play as this class? (y/n)" << std::endl;
            std::cin >> Y_N;

            if (Y_N == 121) {
                system("cls");
                Main_menu_sound_correct();
                std::cout << "You are now a Levis class!" << std::endl;
                system("Pause");
                system("cls");
                return 2;
            }
            else {
                system("cls");
                Main_menu_sound_error();
                std::cout << "Invalid confirmation." << std::endl;
                system("Pause");
                system("cls");


            }





        }
        else if (Choise == 3) {


            std::cout << " B U R N E R  " << std::endl;
            std::cout << "intro burner" << std::endl;
            std::cout << "intro burner" << std::endl;
            std::cout << "intro burner" << std::endl;
            std::cout << "intro burner" << std::endl;
            std::cout << "intro burner" << std::endl;

            std::cout << "Do you want to play as this class? (y/n)" << std::endl;
            std::cin >> Y_N;
            if (Y_N == 121) {
                system("cls");
                Main_menu_sound_correct();
                std::cout << "You are now a Burner class!" << std::endl;
                system("Pause");
                system("cls");
                return 3;
            }
            else {
                system("cls");
                Main_menu_sound_error();
                std::cout << "Invalid confirmation." << std::endl;
                system("Pause");
                system("cls");


            }



        }
        else {
            system("cls");
            Main_menu_sound_error();
            std::cout << "Invalid selection." << std::endl;
            std::cout << "Please chose a number betwen 1 and 3." << std::endl;



            system("pause");
            system("cls");


        }






    }// END OF SWITCH






}
