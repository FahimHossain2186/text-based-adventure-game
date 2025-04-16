#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void saveVault(int n);
void save(int sceneNo);
void menu(int sceneNo);
void map();
int  get_choice(int num_choices, int sceneNo);
void new_game();
void abandoned_mansion();
void sprawling_balcony();
void the_vanishing_portraits();
void the_whispering_bookshelf();
void whispering_book();
void blood_stained_clock();
void the_silent_room();
void the_echoing_hall();
void the_hidden_doorway();
void the_vanishing_passage();
void forsaken_chamber();
void cursed_staircase();
void shared_shattered_reflection();
void endless_corridor();
void the_forgotten_chamber();
void the_crimson_door();
void the_chamber_of_echos();
void the_final();
void the_forgotten_exit();
void game_over();
void credits();
void load();
int  main();

void saveVault(int n) {
    switch (n) {
        case 1: new_game(); break;
        case 2: abandoned_mansion(); break;
        case 3: sprawling_balcony(); break;
        case 4: the_vanishing_portraits(); break;
        case 5: the_whispering_bookshelf(); break;
        case 6: whispering_book(); break;
        case 7: blood_stained_clock(); break;
        case 8: the_silent_room(); break;
        case 9: the_echoing_hall(); break;
        case 10: the_hidden_doorway(); break;
        case 11: the_vanishing_passage(); break;
        case 12: forsaken_chamber(); break;
        case 13: cursed_staircase(); break;
        case 14: shared_shattered_reflection(); break;
        case 15: endless_corridor(); break;
        case 16: the_forgotten_chamber(); break;
        case 17: the_crimson_door(); break;
        case 18: the_chamber_of_echos(); break;
        case 19: the_final(); break;
        case 20: the_forgotten_exit(); break;
    }
}

void save(int sceneNo){

    FILE *file = fopen("load.txt", "w");

    if (file == NULL) {
        printf("Error saving file!\n");
        return;
    }

    fprintf(file, "%d", sceneNo);
    fclose(file);
    printf("Saved Successfully!!\n");
    menu(sceneNo);
}

void load(){

    FILE *file = fopen("load.txt", "r");

    if (file == NULL) {
        printf("Error loading file!\n");
        return;
    }

    int sceneNo;

    fscanf(file, "%d", &sceneNo);

    fclose(file);

    saveVault(sceneNo);
}

void menu(int sceneNo){

    int choice;

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:         save(sceneNo);          break;
    case 2:         main();                 break;
    default:        saveVault(sceneNo);     break;
    }
}

void map(){

    printf("---------------------------------------------------------------------------------------------\n");
    printf("|                       |                                          |                        |\n");
    printf("|                       |                                          |        CHAMBER OF      |\n");
    printf("|                       |                                          |          ECHOES        |\n");
    printf("|                       |           ENDLESS CORRIDOR               |                        |\n");
    printf("|      DAVIL ROOM       |                                          |------------------------|\n");
    printf("|                       |                                          |                        |\n");
    printf("|                       |                                          |                        |\n");
    printf("|                       |------------------------------------------|    FORGOTTEN CHAMBER   |\n");
    printf("|                       |                                          |                        |\n");
    printf("|                       |                                          |                        |\n");
    printf("|-----------------------|                                          |------------------------|\n");
    printf("|                       |                                          |                        |\n");
    printf("|                       |            SPRAWLING BALCONY             |                        |\n");
    printf("|                       |                                          |                        |\n");
    printf("|        CURSED         |                                          |                        |\n");
    printf("|        DRAWING        |                                          |        ECHOING         |\n");
    printf("|        ROOM           |                                          |         HALL           |\n");
    printf("|                       |------------------------------------------|                        |\n");
    printf("|                       |                 |______|                 |                        |\n");
    printf("|                       |                                          |                        |\n");
    printf("|                       |                                          |                        |\n");
    printf("|-----------------------------                            ----------------------------------|\n");
    printf("|          |                 |                            |                |                |\n");
    printf("|          |                 |                            |                |                |\n");
    printf("|  SILENT  |     WEEPING     |                            |    FORSAKEN    |    VANISHING   |\n");
    printf("|  ROOM    |     CHAMBER     |                            |    CHAMBER     |     PASSAGE    |\n");
    printf("|          |                 |                            |                |                |\n");
    printf("|          |                 |                            |                |                |\n");
    printf("------------------------------                            ----------------------------------|\n");
}

int get_choice(int num_choices, int sceneNo) {
    int choice;
    char input;

    while (1) {

        printf("\nEnter your choice (1 to %d): ", num_choices);

        input = getchar();

        // Consume the newline character left in buffer
        while (getchar() != '\n');

        if (input == 27) {  // ESC key
            menu(sceneNo);
            return -1; // Optional return to indicate ESC used
        } 
        else if (input == 'm' || input == 'M') {
            map();
            continue;
        } 
        else if (input >= '1' && input <= '9') {
            choice = input - '0';

            if (choice >= 1 && choice <= num_choices) {
                return choice;
            }
        }

        printf("\nInvalid choice. Please try again.\nEnter your choice (1 to %d): ", num_choices);
    }
}



void new_game() {
    printf("\n=== SHADOWS OF THE FORSAKEN ===\n");
    printf("\n\"Some places are meant to be forgotten... but they never forget you.\"\n");
    printf("\nDeep within an ancient forest stands a mansion that time has abandoned.\n");
    printf("Local legends say those who enter never return. Despite the warnings,\n");
    printf("you and your friends - Fahim, Samia, Audhira, and Lutful - venture inside.\n");

    printf("\nA strange forest, some friends, and an unsettling vibe...\n");
    printf("Audhira: \"I don't think this is a good idea. Should we really be doing this?\"\n");
    printf("Lutful: \"Oh, stop acting like a child! Rumors aren't always false. That's what makes this fun. Let's go!\"\n");
    printf("Fahim: \"I think we should at least explore a little. Whatever happens, we'll deal with it.\"\n");
    printf("Samia: \"I'm with Audhira on this one�it feels risky. But if we're going, let's stick together and be careful, okay?\"\n");

    printf("\nAfter hours of walking, you spot a massive, overgrown mansion hidden among the trees.\n");
    printf("\nWhat will you do?\n");
    printf("1. Enter the mansion\n");
    printf("2. Stay outside and look around\n");
    printf("3. Knock on the door and wait\n");

    int choice = get_choice(3, 1);
    if (choice == 1) {
        abandoned_mansion();
    }
    else if (choice == 2) {
        printf("\nStrange markings appear on the trees as the mist grows thicker.\n");
        printf("Suddenly, the ground cracks open beneath you. You fall into darkness...\n");
        game_over();
    }
    else if (choice == 3) {
        printf("\nYou knock, and the door bursts open. A shadowy figure pulls you inside!\n");
        game_over();
    }
}

void abandoned_mansion() {
    printf("\n=== THE ABANDONED MANSION ===\n");
    printf("\nThe heavy wooden door creaks shut behind you... by itself.\n");
    printf("You walk through the corridor, stepping over broken furniture and scattered papers.\n");
    printf("Samia finds an ID card belonging to a missing reporter. A shiver runs down your spine.\n");
    printf("Suddenly, you hear a strange noise coming from upstairs.\n");

    printf("\nWhat will you do?\n");
    printf("1. Ignore the sound and look for an exit\n");
    printf("2. Investigate the noise upstairs\n");
    printf("3. Try breaking a window to escape\n");
    printf("4. Split up and search the house\n");

    int choice = get_choice(4, 2);
    if (choice == 1) {
        printf("\nShadows close in from all sides. One by one, you and your friends vanish into darkness...\n");
        game_over();
    }
    else if (choice == 2) {
        sprawling_balcony();
    }
    else if (choice == 3) {
        printf("\nAs the glass shatters, a deafening shriek echoes. The shards fly back at you!\n");
        game_over();
    }
    else if (choice == 4) {
        printf("\nThe mansion's corridors shift and twist. You become separated, lost forever...\n");
        game_over();
    }
}

void sprawling_balcony() {
    printf("\n=== SPRAWLING BALCONY ===\n");
    printf("\nYou stand on a vast, eerie veranda with doors to either side.\n");
    printf("A cold wind whispers through the broken windows.\n");

    printf("\nWhere will you go?\n");
    printf("1. Cursed Drawing Room (Left)\n");
    printf("2. Echoing Hall (Right)\n");
    printf("3. Cursed Staircase (Straight)\n");
    printf("4. Forgotten Chamber (Beside stairs)\n");

    int choice = get_choice(4, 3);
    if (choice == 1) {
        the_vanishing_portraits();
    }
    else if (choice == 2) {
        the_echoing_hall();
    }
    else if (choice == 3) {
        cursed_staircase();
    }
    else if (choice == 4) {
        the_forgotten_chamber();
    }
}

void the_vanishing_portraits() {
    printf("\n=== THE VANISHING PORTRAITS ===\n");
    printf("\nThe paintings on the walls seem to watch you...\n");
    printf("One by one, the portraits disappear. Whispers urge you to leave.\n");
    printf("A locked door blocks your path, glowing faintly.\n");

    printf("\nWhat will you do?\n");
    printf("1. Take a painting off the wall\n");
    printf("2. Knock on the locked door\n");
    printf("3. Examine the paintings closely\n");

    int choice = get_choice(3, 4);
    if (choice == 1) {
        printf("\nA hidden mechanism triggers! The hallway collapses, burying you...\n");
        game_over();
    }
    else if (choice == 2) {
        printf("\nA voice whispers a riddle:\n");
        printf("\"I have no eyes, yet once I did see,\n");
        printf("I once had thoughts, but now I'm empty.\n");
        printf("I whisper secrets of those long gone,\n");
        printf("In my hollow form, their voices live on.\"\n");
        printf("\nAnswer: A skull\n");
        printf("The door creaks open...\n");
        the_vanishing_portraits(); // Same scene but door is now open
    }
    else if (choice == 3) {
        the_whispering_bookshelf();
    }
}

void the_whispering_bookshelf() {
    printf("\n=== THE WHISPERING BOOKSHELF ===\n");
    printf("\nYou find a hidden room with an ancient bookshelf.\n");
    printf("The books hum softly, whispering unintelligible words.\n");

    printf("\nHow will you respond?\n");
    printf("1. Try to silence the whispers\n");
    printf("2. Burn the bookshelf\n");
    printf("3. Pull out the book that whispers your name\n");

    int choice = get_choice(3, 5);
    if (choice == 1) {
        printf("\nThe book slams shut, its pages wrapping around you!\n");
        game_over();
    }
    else if (choice == 2) {
        printf("\nThe flames consume the bookshelf. The mansion trembles...\n");
        game_over();
    }
    else if (choice == 3) {
        whispering_book();
    }
}

void whispering_book() {
    printf("\n=== WHISPERING BOOK ===\n");
    printf("\nThe book glows with a riddle:\n");
    printf("\"I have hands but never touch,\n");
    printf("I move around but stay in one place,\n");
    printf("I have numbers but I don't count,\n");
    printf("What am I?\"\n");

    printf("\nYour answer:\n");
    printf("1. A compass\n");
    printf("2. A wall clock\n");
    printf("3. A combination lock\n");

    int choice = get_choice(3, 6);
    if (choice == 1 || choice == 3) {
        printf("\nWrong answer! The book burns you with intense light...\n");
        game_over();
    }
    else if (choice == 2) {
        blood_stained_clock();
    }
}

void blood_stained_clock() {
    printf("\n=== BLOOD-STAINED CLOCK ===\n");
    printf("\nA blood-stained clock appears before you, frozen at 3:33 AM.\n");
    printf("A note says: \"Set me free at the witching hour.\"\n");

    printf("\nWhat will you do?\n");
    printf("1. Smash the clock\n");
    printf("2. Walk away\n");
    printf("3. Set it to midnight\n");

    int choice = get_choice(3, 7);
    if (choice == 1) {
        printf("\nThe clock shatters, but the blood remains. The room collapses!\n");
        game_over();
    }
    else if (choice == 2) {
        printf("\nLost in timeless limbo...\n");
        game_over();
    }
    else if (choice == 3) {
        the_silent_room();
    }
}

void the_silent_room() {
    printf("\n=== THE SILENT ROOM ===\n");
    printf("\nThe chamber is completely silent. A message warns:\n");
    printf("\"Make a sound, and you will be trapped forever.\"\n");
    printf("A wooden box sits in the center, slightly open.\n");

    printf("\nWhat will you do?\n");
    printf("1. Open the wooden box\n");
    printf("2. Stay silent and examine walls\n");
    printf("3. Whisper to test the warning\n");

    int choice = get_choice(3, 8);
    if (choice == 1) {
        printf("\nA piercing scream erupts! The door slams shut forever...\n");
        game_over();
    }
    else if (choice == 2) {
        printf("\nA shadow shoves you into a hidden tunnel!\n");
        sprawling_balcony();
    }
    else if (choice == 3) {
        printf("\nA shadowy figure emerges, mimicking your voice...\n");
        game_over();
    }
}

void the_echoing_hall() {
    printf("\n=== THE ECHOING HALL ===\n");
    printf("\nA vast hallway with flickering lanterns. Every step echoes endlessly.\n");
    printf("At the end stands a cracked mirror with an inscription:\n");
    printf("\"To pass through, you must face your reflection.\"\n");

    printf("\nThree objects rest on pedestals:\n");
    printf("1. An antique key\n");
    printf("2. A silver dagger\n");
    printf("3. A slow hourglass\n");

    int choice = get_choice(3, 9);
    if (choice == 1) {
        printf("\nThe mirror glows. Your reflection smiles... and pulls you in!\n");
        game_over();
    }
    else if (choice == 2) {
        the_hidden_doorway();
    }
    else if (choice == 3) {
        printf("\nTime slows. A door appears...\n");
        printf("1. Enter the door\n");
        printf("2. Ignore it\n");
        int subchoice = get_choice(2, 9);
        if (subchoice == 1) {
            the_hidden_doorway();
        }
        else {
            printf("\nThe hourglass shatters! Shadows consume you...\n");
            game_over();
        }
    }
}

void the_hidden_doorway() {
    printf("\n=== THE HIDDEN DOORWAY ===\n");
    printf("\nA faint outline of a door without a handle appears.\n");
    printf("Inscription: \"Reveal it with that which is lost.\"\n");

    printf("\nThree glowing objects:\n");
    printf("1. A silver locket\n");
    printf("2. A blood-stained key\n");
    printf("3. An empty glass bottle\n");

    int choice = get_choice(3, 10);
    if (choice == 1) {
        printf("\n1. Press locket against wall\n");
        printf("2. Open locket first\n");
        int subchoice = get_choice(2, 10);
        if (subchoice == 1) {
            printf("\nNothing happens. The whispers return...\n");
            game_over();
        }
        else {
            printf("\nYou whisper the name inside. The door takes shape!\n");
            the_vanishing_passage();
        }
    }
    else if (choice == 2) {
        printf("\nThe wall shifts, revealing a passage with no return...\n");
        the_vanishing_passage();
    }
    else if (choice == 3) {
        printf("\n1. Add your blood\n");
        printf("2. Shatter bottle\n");
        int subchoice = get_choice(2, 10);
        if (subchoice == 1) {
            printf("\n\"What is given is never returned.\" The door appears...\n");
            the_vanishing_passage();
        }
        else {
            printf("\nA violent gust extinguishes all light...\n");
            game_over();
        }
    }
}

void the_vanishing_passage() {
    printf("\n=== THE VANISHING PASSAGE ===\n");
    printf("\nThe path splits into three. A sign reads:\n");
    printf("\"Choose truth or be lost forever.\"\n");

    printf("\nWhich path?\n");
    printf("1. Path of Echoes (Left)\n");
    printf("2. Path of Silence (Middle)\n");
    printf("3. Path of Reflection (Right)\n");

    int choice = get_choice(3, 11);
    if (choice == 1) {
        printf("\nFamiliar voices whisper your name...\n");
        printf("1. Respond\n");
        printf("2. Ignore them\n");
        int subchoice = get_choice(2, 11);
        if (subchoice == 1) {
            printf("\nThe whispers surround you. Your body fades...\n");
            game_over();
        }
        else {
            forsaken_chamber();
        }
    }
    else if (choice == 2) {
        printf("\nEerie stillness. You can't hear your own breath...\n");
        printf("1. Press forward\n");
        printf("2. Hesitate\n");
        int subchoice = get_choice(2, 11);
        if (subchoice == 1) {
            forsaken_chamber();
        }
        else {
            printf("\nThe silence becomes eternal...\n");
            game_over();
        }
    }
    else if (choice == 3) {
        printf("\nMirrors show twisted versions of yourself...\n");
        printf("1. Shatter a mirror\n");
        printf("2. Stare too long\n");
        int subchoice = get_choice(2, 11);
        if (subchoice == 1) {
            forsaken_chamber();
        }
        else {
            printf("\nYour reflection reaches out and pulls you in!\n");
            game_over();
        }
    }
}

void forsaken_chamber() {
    printf("\n=== THE FORSAKEN CHAMBER ===\n");
    printf("\nA dark chamber with a glowing stone door.\n");
    printf("An ancient book rests on a pedestal. Four hooded statues watch.\n");
    printf("A voice echoes: \"Knowledge has a price. Choose wisely.\"\n");
    printf("\nThe book reveals a riddle:\n");
    printf("\"I am not alive, yet I grow.\n");
    printf("I do not breathe, yet I consume.\n");
    printf("I do not have a mouth, yet I speak.\n");
    printf("What am I?\"\n");

    printf("\nYour answer:\n");
    printf("1. A Shadow\n");
    printf("2. A Fire\n");
    printf("3. A Breath\n");
    printf("4. Refuse to answer\n");

    int choice = get_choice(4, 12);
    if (choice == 1 || choice == 3 || choice == 4) {
        printf("\nThe statues come to life! They reach for you...\n");
        game_over();
    }
    else if (choice == 2) {
        printf("\nThe book turns to ash. The door opens!\n");
        printf("A shadow shoves you back to the balcony...\n");
        sprawling_balcony();
    }
}

void cursed_staircase() {
    printf("\n=== THE CURSED STAIRCASE ===\n");
    printf("\nA spiraling staircase descends into cold darkness.\n");
    printf("At the base, statues resemble familiar people...\n");

    printf("\nHow will you proceed?\n");
    printf("1. Examine the statues\n");
    printf("2. Ignore them and move forward\n");
    printf("3. Touch a statue\n");

    int choice = get_choice(3, 13);
    if (choice == 1 || choice == 3) {
        printf("\nThe statues come to life! Everything goes black...\n");
        game_over();
    }
    else if (choice == 2) {
        shared_shattered_reflection();
    }
}

void shared_shattered_reflection() {
    printf("\n=== THE SHATTERED REFLECTION ===\n");
    printf("\nA massive cracked mirror stands before you.\n");
    printf("Your reflection distorts into something inhuman.\n");
    printf("A voice echoes: \"Face yourself, or be lost forever.\"\n");

    printf("\nWhat will you do?\n");
    printf("1. Touch the mirror\n");
    printf("2. Speak to your reflection\n");
    printf("3. Close your eyes and step forward\n");

    int choice = get_choice(3, 14);
    if (choice == 1 || choice == 3) {
        printf("\nYou're pulled into the mirror's world...\n");
        game_over();
    }
    else if (choice == 2) {
        endless_corridor();
    }
}

void endless_corridor() {
    printf("\n=== THE ENDLESS CORRIDOR ===\n");
    printf("\nNo matter how far you walk, you end up in the same spot.\n");
    printf("An inscription reads: \"The way forward is not walked, but remembered.\"\n");

    printf("\nHow will you escape?\n");
    printf("1. Walk backward thinking of the entrance\n");
    printf("2. Close your eyes and run\n");
    printf("3. Touch the walls\n");

    int choice = get_choice(3, 15);
    if (choice == 1) {
        sprawling_balcony();
    }
    else if (choice == 2 || choice == 3) {
        printf("\nYou're consumed by the corridor...\n");
        game_over();
    }
}

void the_forgotten_chamber() {
    printf("\n=== THE FORGOTTEN CHAMBER ===\n");
    printf("\nA candlelit room with a large book on an altar.\n");
    printf("It opens to reveal names - yours and your friends'.\n");
    printf("A whisper: \"One must be left behind.\"\n");

    printf("\nWhat will you do?\n");
    printf("1. Tear out your name\n");
    printf("2. Tear out someone else's name\n");
    printf("3. Refuse to act\n");

    int choice = get_choice(3, 16);
    if (choice == 1) {
        the_crimson_door();
    }
    else if (choice == 2 || choice == 3) {
        printf("\nThe candles flicker out. You're never seen again...\n");
        game_over();
    }
}

void the_crimson_door() {
    printf("\n=== THE CRIMSON DOOR ===\n");
    printf("\nA door soaked in crimson light. A heartbeat echoes within.\n");

    printf("\nWill you descend?\n");
    printf("1. Step forward\n");
    printf("2. Try to turn back\n");
    printf("3. Knock on the door\n");

    int choice = get_choice(3, 17);
    if (choice == 1) {
        the_chamber_of_echos();
    }
    else if (choice == 2 || choice == 3) {
        printf("\nThe ground crumbles beneath you...\n");
        game_over();
    }
}

void the_chamber_of_echos() {
    printf("\n=== CHAMBER OF ECHOES ===\n");
    printf("\nA massive chamber with carvings of past explorers' fates.\n");
    printf("A shadowy figure looms: \"One of you may leave. The rest must stay.\"\n");

    printf("\nHow will you respond?\n");
    printf("1. Offer yourself\n");
    printf("2. Try to fight\n");
    printf("3. Trick the figure\n");
    printf("4. Trick the figure's face\n");

    int choice = get_choice(4, 18);
    if (choice == 1 || choice == 2) {
        printf("\nThe shadow engulfs you. Darkness swallows you...\n");
        game_over();
    }
    else if (choice == 3) {
        printf("\nYou're shoved back to the balcony!\n");
        sprawling_balcony();
    }
    else if (choice == 4) {
        the_final();
    }
}

void the_final() {
    printf("\n=== THE FINAL THRESHOLD ===\n");
    printf("\nA door inscribed: \"A price must be paid.\"\n");
    printf("A dagger rests on a pedestal.\n");

    printf("\nWhat will you do?\n");
    printf("1. Offer your blood\n");
    printf("2. Refuse to pay\n");
    printf("3. Use someone else's blood\n");

    int choice = get_choice(3, 19);
    if (choice == 1) {
        the_forgotten_exit();
    }
    else if (choice == 2 || choice == 3) {
        printf("\nThe shadows claim you...\n");
        game_over();
    }
}

void the_forgotten_exit() {
    printf("\n=== THE FORGOTTEN EXIT ===\n");
    printf("\n\"Not all who escape are truly free.\"\n");
    printf("The cycle demands a sacrifice: \"Choose. One stays. One leaves.\"\n");

    printf("\nFinal choice:\n");
    printf("1. Sacrifice yourself\n");
    printf("2. Sacrifice your friend\n");
    printf("3. Refuse to choose\n");

    int choice = get_choice(3, 20);
    if (choice == 1) {
        printf("\n=== TRUE ENDING ===\n");
        printf("You vanish. Your friend escapes.\n");
        printf("But they find a note: \"The cycle continues...\"\n");
    }
    else if (choice == 2) {
        printf("\n=== FALSE ESCAPE ===\n");
        printf("You step forward. They disappear.\n");
        printf("The mansion crumbles... but something is wrong.\n");
    }
    else if (choice == 3) {
        printf("\n=== ENDLESS NIGHTMARE ===\n");
        printf("\"Then neither shall leave.\" Darkness swallows you both.\n");
    }

    printf("\nThe final words whisper: \"Another will come soon. The story never ends.\"\n");
    printf("\nTHE END... FOR NOW.\n");
    exit(0);
}

int main(void){
    while (1) {  // Keeps the program running until the user chooses to exit
        printf("Welcome to SHADOWS OF THE FORSAKEN");
        printf("\n1. NEW GAME");
        printf("\n2. LOAD GAME");
        printf("\n3. CREDITS");
        printf("\n4. EXIT");

        int choice = get_choice(4, 0);

        if (choice == 1) {
            new_game();
        }
        else if (choice == 2) {
            load();
        }
        else if (choice == 3) {
            credits();
        }
        else if (choice == 4) {
            printf("\nAre you sure you want to exit?");
            printf("\n 1. Yes :(  2. No :D");

            int exit_choice = get_choice(2, 0);

            if (exit_choice == 1){
                printf("Exiting the Game.....");
                exit(0);
            }
            else if (exit_choice == 2){
                continue;  // Go back to the main menu
            }
        }
    }
    return 0;
}

void credits() {
    printf("\n================== CREDITS ==================\n");
    printf("\n              TEAM CRYPTIC CODEX             \n");
    printf("\n2512847642\tMd. Fahim Hossain\n");
    printf("2511026642\tSamia Zaman\n");
    printf("2513009642\tSidratul Muntahara Audhira\n");
    printf("2412032042\tMd. Lutful Alam\n");
    printf("\n=============================================\n");
    printf("\nPress ENTER to return to the main menu...\n");

    // ENTER to be back to MAIN MENU
    getchar();
    while (getchar() != '\n');

    main();
}

void game_over(){

    printf("Game Over.\n");
    printf("Press ENTER to return to the main menu...\n");

    // ENTER to be back to MAIN MENU
    getchar();
    while (getchar() != '\n');

    main();

}