#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void saveVault(int n);
void save(int sceneNo);
void menu(int sceneNo);
void map();
int get_choice(int num_choices, int sceneNo);
void new_game();
void abandoned_mansion();
void game_over();
void vanishing_portraits();
void credits();
void whispering_bookshelf();
void book_riddle();
void blood_stained_clock();
void silent_room();
void echoing_hall();
void hidden_doorway();
void vanishing_passage();

void saveVault(int n){

    switch (n)
    {
    case 1:/* function call for that scene */break;
    
    default:                                break;
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
        
        input = getch(); 

        if (input == 27) {  // ESC key
            menu(sceneNo);
        }
        else if (input == 'm' || input == 'M') {
            map();
            continue;
        }
        else if (input >= '1' && input <= '9') { 
            choice = input - '0';  // Convert char to int
            
            if (choice >= 1 && choice <= num_choices) {
                return choice;
            }
        }

        printf("\nInvalid choice. Please try again.\n");
    }
}

void new_game(){

    // Story Prologue
    printf("\"Some places are meant to be forgotten... but they never forget you.\"\n");
    printf("Deep within the heart of an ancient forest stands a mansion that time has abandoned. According to local legends, individuals who venture into this structure are destined never to emerge again. The few who have dared to step inside—reporters, thrill-seekers, lost wanderers—have all vanished without a trace. Despite the chilling tales, you and your friends, Fahim, Samia, Audhira, Jannat, and Lutful, set out on a journey, drawn by the mystery. What starts as an adventure soon turns into a nightmare.\n");
    
    // Game Starts
    printf("\n\nA strange forest, some friends, and an unsettling vibe...\n");
    printf("You and your five friends venture into the infamous forest. As you move forward, a strange sensation washes over you, as if an invisible force is pulling you inside. Audhira hesitates.\n");
    printf("Audhira: \"I don't think this is a good idea. Should we really be doing this?\"\n");
    printf("Jannat: \"Oh, stop acting like a child! Rumors aren't always false. That's what makes this fun. Let's go!\"\n");
    printf("Fahim: \"I think we should at least explore a little. Whatever happens, we'll deal with it.\"\n");
    printf("\nAfter hours of walking, you spot a massive, overgrown, and abandoned mansion hidden among the trees. At first, you consider heading back, but with Jannat’s persuasion, you decide to go inside.\n");
    printf("\nWhat will you do?\n");

    printf("1. Enter the mansion.\n");
    printf("2. Stay outside and look around.\n");
    printf("3. We knock on the door and wait for the response.\n");

    // Conditional Pathways
    int choice = get_choice(3);

    if (choice == 1) {
        abandoned_mansion();
        } 
    else if (choice == 2) {
        printf("Leads to a side event where strange markings appear on the trees, and the mist grows thicker. Suddenly, the ground cracks open beneath you. You fall into darkness\n");
        game_over();
        } 
    else if (choice == 3) {
        printf("You knock, the door bursts open, and a shadowy figure pulls you inside.\n");
        game_over();
        } 
}

int main(void){
    printf("Welcome to {Game Name}");
    printf("\n1. NEW GAME");
    printf("\n2. CREDITS");
    printf("\n3. EXIT");

    int choice = get_choice(3);

    // New game loop
    if (choice == 1) {
        new_game();
        } 
    // Credits Loop
    else if (choice == 2) {
        credits();
        }
    // Exit Loop
    else if (choice == 3) {

        printf("\nAre you sure you want to exit?");
        printf("\n 1. Yes :(  2. No :D");

        int exit_choice = get_choice(2);
        
            if (exit_choice == 1){
                printf("Exiting the Game.....");
                exit(0);
            }
            else if (exit_choice == 2){
                //Restart to Main Menu
                printf("\n");
                main();
            }
    }
    return 0;
}