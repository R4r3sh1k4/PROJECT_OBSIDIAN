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
    std::string Intro_Text = " The Crimson Imperium stands as a towering colossus of oppression and conquest, casting its dark shadow across the lands it seeks to subjugate.\n From the blood-stained halls of its citadels to the scorched fields of its conquered territories, the Imperium's presence is felt like a relentless storm of death and despair.\n At the helm of this malevolent empire are the Sovereigns, also called The Crimson Hand, ruthless despots whose thirst for power knows no bounds.\n They rule with an iron fist, their decrees enforced by legions of merciless clone soldiers and elite special forces who strike fear into the hearts of even the most defiant rebels.\n In the wake of the Imperium's relentless march, cities lie in ruins and once-thriving civilizations are reduced to ashes. \n The cries of the oppressed echo through the streets, drowned out only by the deafening roar of war machines and the clash of steel on steel.\n At the forefront of the Imperium's relentless expansion are its legions of cloned warriors, bred in the depths of shadowy laboratories and raised for one purpose alone: to sow destruction and death upon the battlefield.\n These clones, stripped of individuality and autonomy, are nothing more than disposable tools of war, their lives measured not in years but in battles fought and enemies slain.\n Promised the illusion of advancement and power, these cloned soldiers march willingly to their doom, their minds clouded by false promises and twisted propaganda.\n They are told that glory and prestige await those who prove themselves on the field of battle and that they will rise through the ranks to positions of authority and influence within the empire. \n Yet, the reality is far more grim.The vast majority of clones never live to see their promised promotions, their lives cut short by the relentless grind of war as its their purpose.\n Even those who manage to claw their way to the upper echelons of the Imperium's hierarchy find themselves ensnared in a web of deceit and manipulation, their every move watched and scrutinized by those who would see them fall.\n Power is fleeting, and those who grasp for it too eagerly often find themselves consumed by the very darkness they sought to conquer. \n In the end, the Crimson Imperium is a realm where hope is but a distant memory, and the promise of advancement is nothing more than a cruel joke. \n For in a world built upon the foundations of suffering and death, true power comes not from titles or accolades, but from the willingness to embrace the darkness within oneself and to cast aside all semblance of humanity in the pursuit of absolute domination. \n";


    std::vector<std::string> Text_Intro;
    Text_Intro.push_back(Intro_Text);

    for (char C : Text_Intro[0]) {
        std::cout << C;
        std::this_thread::sleep_for(std::chrono::milliseconds(45));
    }
    std::cout << std::endl;
    system("pause");
}