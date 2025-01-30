#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void new_game();
void ground_floor();
void first_floor();
void credits();
int get_choice(int num_choices);

int get_choice(int num_choices) {
    int choice;
    printf("\nEnter your choice (1 to %d): ", num_choices);
    scanf("%d", &choice);
    while (getchar() != '\n'); // Clear input buffer

    if (choice >= 1 && choice <= num_choices) {
        return choice;
    } 
    else {
        printf("Invalid choice. Please try again.\n");
        return get_choice(num_choices);
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
                main();
            }
    }
    return 0;
}

// New game 

void new_game(){

    // Story Prologue
    printf("{An example} Some friends will go through an abandoned house which is known to be cursed.");
    printf("So they are curious to know is it baseless or true. Somehow they will end up being there and they will be trapped.");
    
    // Game Starts
    printf("You are standing at a Hallway. The main gate got shut. What will you do?\n");
    printf("1. Will go upwards\n");
    printf("2. Explore Ground floor.\n");

    // Conditional Pathways
    int choice = get_choice(2);

    if (choice == 1) {
        first_floor();
        } 
    else if (choice == 2) {
        ground_floor();
        } 
}

void ground_floor(){
    // ground floor
}

void first_floor(){
    // first floor
}

void credits() {
    printf("\n================== CREDITS ==================\n");
    printf("\n               TEAM {team_name}               \n");
    printf("\n2512847642\tMd. Fahim Hossain\n");
    printf("2511026642\tSamia Zaman\n");
    printf("2512244042\tRiazul Jannat\n");
    printf("2513009642\tSidratul Muntahara Audhira\n");
    printf("\n=============================================\n");
    printf("\nPress ENTER to return to the main menu...\n");

    // ENTER to be back to MAIN MENU
    getchar(); 
    while (getchar() != '\n');

    main();
}
