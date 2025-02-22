#include<stdio.h>
#include <stdlib.h>

int get_choice(int num_choices) {
    int choice;
    printf("\nEnter your choice (1 to %d): ", num_choices);
    scanf("%d", &choice);
    while (getchar() != '\n'); // Clear input buffer

    if (choice >= 1 && choice <= num_choices)
        return choice;
    else {
        printf("Invalid choice. Please try again.\n");
        return get_choice(num_choices);
    }
}

void game_over(){

    printf("Game Over.\n");
    printf("Press ENTER to return to the main menu...\n");

    // ENTER to be back to MAIN MENU
    getchar(); 
    while (getchar() != '\n');

    main();

}

int main(void){

    int choice, exit_choice;

    printf("Welcome to {Game Name}");
    printf("\n1. NEW GAME");
    printf("\n2. CREDITS");
    printf("\n3. EXIT\n");

    scanf("%d", &choice);

    if (choice == 1) {
        new_game();
        } 

    else if (choice == 2) {
        credits();
        }

    else if (choice == 3) {

        printf("\nAre you sure you want to exit?");
        printf("\n 1. Yes :(  2. No :D");

        scanf("%d", &exit_choice);

            if (exit_choice == 1){
                printf("Exiting the Game.....\n");
        
            }
            else if (exit_choice == 2){
                
                printf("\n");
                main();
            }
    }
    return 0;
}



