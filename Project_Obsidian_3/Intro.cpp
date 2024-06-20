#include "Intro.h"

void Intro_audio() {
    sf::SoundBuffer buffer2;
    if (!buffer2.loadFromFile("Intro_Music.wav")) {
        std::cout << "**************************" << std::endl;
        std::cout << "Failed to load sound file!" << std::endl;
        std::cout << "The program will close    " << std::endl;
        std::cout << "in 10 seconds             " << std::endl;
        std::cout << "**************************" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(10));
        std::exit(0);
    }

    sf::Sound sound_music;
    sound_music.setBuffer(buffer2);
    sound_music.setVolume(45);
    sound_music.play();

    // Wait until the sound has finished playing
    while (sound_music.getStatus() == sf::Sound::Playing) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void Text_Intro_Narration() {
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("IntroNarration.wav")) {
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

    // Wait until the sound has finished playing
    while (sound_HDD.getStatus() == sf::Sound::Playing) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void Text_Intro() {
    std::string Intro_Text_l1= " The Crimson Imperium stands as a towering colossus of oppression and conquest, casting its dark shadow across the lands it seeks to subjugate.\n";

    std::string Intro_Text_l2 = "From the blood-stained halls of its citadels to the scorched fields of its conquered territories, the Imperium's presence is felt like a relentless \n";
        std::string Intro_Text_l2_2 = " storm of death and despair.\n ";

    std::string Intro_Text_l3 = "At the helm of this malevolent empire are the Sovereigns, also called The Crimson Hand, ruthless despots whose thirst for power knows no bounds.\n ";

    std::string Intro_Text_l4 = "They rule with an iron fist, their decrees enforced by legions of merciless clone soldiers and elite special forces who strike fear into the hearts\n";
        std::string Intro_Text_l4_2 = "of even the most defiant rebels.\n ";

    std::string Intro_Text_l5 = "In the wake of the Imperium's relentless march, cities lie in ruins and once-thriving civilizations are reduced to ashes. \n ";

    std::string Intro_Text_l6 = "The cries of the oppressed echo through the streets, drowned out only by the deafening roar of war machines and the clash of steel on steel.\n ";

    std::string Intro_Text_l7 = "At the forefront of the Imperium's relentless expansion are its legions of cloned warriors, bred in the depths of shadowy laboratories and raised\n";
        std::string Intro_Text_l7_2 ="for one purpose alone : to sow destruction and death upon the battlefield.\n ";

    std::string Intro_Text_l8 = "These clones, stripped of individuality and autonomy, are nothing more than disposable tools of war, their lives measured not in years but in \n";
        std::string Intro_Text_l8_2 = "battles fought and enemies slain.\n ";

    std::string Intro_Text_l9 = "Promised the illusion of advancement and power, these cloned soldiers march willingly to their doom, their minds clouded by false promises and twisted propaganda.\n ";

    std::string Intro_Text_l10 = "They are told that glory and prestige await those who prove themselves on the field of battle and that they will rise through the ranks\n";
        std::string Intro_Text_l10_2 = " to positions of authority and influence within the empire. \n ";

    std::string Intro_Text_l11 = "Yet, the reality is far more grim.The vast majority of clones never live to see their promised promotions, their lives cut short\n";
        std::string Intro_Text_l11_2= " by the relentless grind of war as its their purpose.\n ";

    std::string Intro_Text_l12 = "Even those who manage to claw their way to the upper echelons of the Imperium's hierarchy find themselves ensnared in a web of deceit \n";
        std::string Intro_Text_l12_2 = " and manipulation, their every move watched and scrutinized by those who would see them fall.\n ";

    std::string Intro_Text_l13 = "Power is fleeting, and those who grasp for it too eagerly often find themselves consumed by the very darkness they sought to conquer. \n ";

    std::string Intro_Text_l14 = "In the end, the Crimson Imperium is a realm where hope is but a distant memory, and the promise of advancement is nothing more than a cruel joke. \n ";

    std::string Intro_Text_l15 = "For in a world built upon the foundations of suffering and death, true power comes not from titles or accolades, but from the willingness to\n";
        std::string Intro_Text_l15_2 = " embrace the darkness within oneself and to cast aside all semblance of humanity in the pursuit of absolute domination. \n";




    std::vector<std::string> Text_Intro;
    ///////////////////////////////////////////////////////////// Places Line 1
    Text_Intro.push_back(Intro_Text_l1);

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }
    
    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 2
    Text_Intro.push_back(Intro_Text_l2);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 2-2
    Text_Intro.push_back(Intro_Text_l2_2);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 3
    Text_Intro.push_back(Intro_Text_l3);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 4
    Text_Intro.push_back(Intro_Text_l4);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 4-2
    Text_Intro.push_back(Intro_Text_l4_2);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 5
    Text_Intro.push_back(Intro_Text_l5);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 6
    Text_Intro.push_back(Intro_Text_l6);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 7
    Text_Intro.push_back(Intro_Text_l7);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 7-2
    Text_Intro.push_back(Intro_Text_l7_2);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 8
    Text_Intro.push_back(Intro_Text_l8);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 8-2
    Text_Intro.push_back(Intro_Text_l8_2);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 9
    Text_Intro.push_back(Intro_Text_l9);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 10
    Text_Intro.push_back(Intro_Text_l10);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 10-2
    Text_Intro.push_back(Intro_Text_l10_2);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 11
    Text_Intro.push_back(Intro_Text_l11);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 11-2
    Text_Intro.push_back(Intro_Text_l11_2);
    std::this_thread::sleep_for(std::chrono::seconds(1)); 
    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 12
    Text_Intro.push_back(Intro_Text_l12);
    std::this_thread::sleep_for(std::chrono::seconds(2)); 
    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 12-2
    Text_Intro.push_back(Intro_Text_l12_2);
    std::this_thread::sleep_for(std::chrono::seconds(1)); 
    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 13
    Text_Intro.push_back(Intro_Text_l13);
    std::this_thread::sleep_for(std::chrono::seconds(2)); 
    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 14
    Text_Intro.push_back(Intro_Text_l14);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 15
    Text_Intro.push_back(Intro_Text_l15);
    std::this_thread::sleep_for(std::chrono::seconds(2)); for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector
    // 
    ///////////////////////////////////////////////////////////// Places Line 15-2
    Text_Intro.push_back(Intro_Text_l15_2);
    std::this_thread::sleep_for(std::chrono::seconds(1));

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }

    Text_Intro.clear();
    //////////////////////////////////////////////////////////// Clears the vector for the last time :3










    std::cout << std::endl;
    system("pause");
}