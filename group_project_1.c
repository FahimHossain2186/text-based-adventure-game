#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void new_game();
void abandoned_mansion();
void vanishing_portraits();
void whispering_bookshelf();
void credits();
void game_over();

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
                printf("\n");
                main();
            }
    }
    return 0;
}

// New game 

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

void abandoned_mansion(){
    
    printf("As you step inside, the heavy wooden door creaks shut behind you… by itself.\n");
    printf("The door slams shut. You walk through the corridor, stepping over broken furniture and scattered papers.\n");
    printf("\nSamia halts to take a closer look at the clutter. She discovers an ID card belonging to a reporter who once investigated this house. A shiver runs through you—someone had come here before, but they hadn't escaped. Suddenly, you hear a strange noise coming from upstairs.\n");
    printf("\nWhat will you do?\n");
    printf("1. Ignore the sound and look for an exit.\n");
    printf("2. Investigate the noise upstairs.\n");
    printf("3. Try breaking a window to escape.\n");
    printf("4. Split up and search the house for another way out\n");

    int choice = get_choice(4);

    if (choice == 1) {
        printf("The house traps you as shadows close in—one by one, you vanish into darkness.\n");
        game_over();
        } 
    else if (choice == 2) {
        vanishing_portraits();
        } 
    else if (choice == 3) {
        printf("As the glass shatters, a deafening shriek echoes, and the shards hurtle back at you, plunging you into darkness.\n");
        game_over();
        }
    else if (choice == 4) {
        printf("Splitting up sealed your fate, as the mansion's maze twists, trapping each of you in its shifting corridors, until you vanish, never to reunite.\n");
        game_over();
        }
}

void vanishing_portraits(){

    printf("The paintings on the walls seem to be watching you...\n");
    printf("As you move through the upstairs hallway, you notice old portraits lining the walls.\n");
    printf("\nSuddenly, one of the portraits is missing a person, and then one by one, they all disappear. You hear whispers urging you to leave, and the hallway ahead is blocked by a mysterious locked door, glowing faintly.\n");
    printf("\nWhat will you do?\n");
    printf("1. Take one of the paintings off the wall.\n");
    printf("2. Knock on the locked door and wait.\n");
    printf("3. Examine the paintings closely.\n");

    int choice = get_choice(3);

    if (choice == 1) {
        printf("As you lift the frame, a hidden mechanism triggers, causing the hallway to collapse, burying you and your friends in the mansion's dark, eternal grasp.\n");
        game_over();
        } 
    else if (choice == 2) {
        printf("As the door slams shut, you're yanked into a suffocating void, where countless hands drag you into darkness, and your screams vanish, leaving only silence.\n");
        game_over();
        } 
    else if (choice == 3) {
        whispering_bookshelf();
        }
    
}

void whispering_bookshelf(){
    
    printf("That whispering book glows with a riddle...\n");
    printf("\nI have hands but never touch\n");
    printf("I move around but stay in one place\n");
    printf("I have numbers but I don't count\n");
    printf("\n What am I?\n");
    printf("1. A compass\n");
    printf("2. A wall clock\n");
    printf("3. A combination lock\n");
    printf("4. A watch\n");

    int choice = get_choice(4);

    if (choice == 1) {
        printf("Since you gave the wrong answer, the book will burn you with an intense light.\n");
        game_over();
        } 
    else if (choice == 2) {
        
        } 
    else if (choice == 3) {
        printf("Since you gave the wrong answer, the book will burn you with an intense light.\n");
        game_over();
        }
    else if (choice == 4) {
        printf("Since you gave the wrong answer, the book will burn you with an intense light.\n");
        game_over();
        }
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

void game_over(){

    printf("Game Over.\n");
    printf("Press ENTER to return to the main menu...\n");

    // ENTER to be back to MAIN MENU
    getchar(); 
    while (getchar() != '\n');

    main();

}
