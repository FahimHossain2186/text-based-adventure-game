#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

    printf("You step closer, inspecting the faded portraits\n");
    printf("\nAs your eyes scan the details, you notice something strange—one of the names engraved below a painting is glowing faintly\n");
    printf("When you whisper the name aloud, the wall shudders, revealing a hidden passage behind the paintings.\n");
    printf("A narrow staircase spirals downward, leading to a dimly lit room. Inside, an ancient bookshelf lined with dusty tomes hums softly, whispering unintelligible words.\n");
    printf("\n What step will you take?\n");
    printf("1.Try to silence the whispers by closing the books.\n");
    printf("2.Burn the bookshelf to destroy whatever is inside.\n");
    printf("3.Carefully pull out the book that whispers your name.\n");

    int choice = get_choice(3);

    if (choice == 1) {
        printf("As you slam the book shut, the pages wrap around you, pulling you into a cursed story, trapping you forever.\n");
        game_over();
        } 
    else if (choice == 2) {
        printf("As the flames consume the bookshelf, the room trembles, the laughter mocks, and the mansion swallows you whole, erasing all trace of your existence.\n");
        game_over();
        }
        else if (choice == 3) {
        book_riddle();
        } 
}

void book_riddle(){

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
        blood_stained_clock();
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

void blood_stained_clock(){

    printf("The books glow dims, and the air around you shifts.\n");
    printf("\nA faint ticking sound echoes as a blood-stained clock appears before you.Time does not move normally in this house\n");
    printf("The clock is frozen at 3:33 AM\n");
    printf(" A note says: \"Set me free at the witching hour.\"\n");
    printf("\n What choice will you make?\n");
    printf("1. Smash the clock\n");
    printf("2. Walk away\n");
    printf("3. Set it to midnight \n");

    int choice = get_choice(3);

    if (choice == 1) {
        printf("The clock shatters into pieces, but the blood remains, seeping into the floor. Suddenly, the room begins to collapse.Crushed by the weight of time.\n");
        game_over();
        } 
    else if (choice == 2) {
        printf("Lost in timeless limbo.\n");
        game_over();
        }
        else if (choice == 3) {
        silent_room();
        } 
}

void silent_room(){

    printf("Something reacts to sound\n");
    printf("\nThe passage leads to a dimly lit chamber with walls covered in ancient symbols. The air is heavy, and an eerie silence fills the space. A message is carved into the stone:\n");
    printf("\"Make a sound, and you will be trapped forever.\"\n");
    printf("A single wooden box sits in the center of the room, slightly open. The only exit is a rusted iron door with no visible handle.\n");
    printf("\n Which path will you take?\n");
    printf("1. Open the wooden box\n");
    printf("2. Stay completely silent and examine the walls \n");
    printf("3. Whisper a word to test the warning \n");
    printf("4. Knock on the iron door \n");
   
    int choice = get_choice(4);

    if (choice == 1) {
        printf("A piercing scream erupts from within! The room shakes violently, and the door slams shut. You are now trapped forever.\n");
        game_over();
        } 
    else if (choice == 2) {
        echoing_hall();
        }
    else if (choice == 3) {
        printf("A shadowy figure emerges from the darkness, mimicking your voice. It steps closer, and suddenly, everything goes black.\n");
        game_over();
        } 
    else if (choice == 4) {
        printf("A deep groaning sound echoes through the room. The walls begin closing in, and the ceiling lowers. You must act quickly!\n");
        printf("1. Try to push the door open\n");
        printf("2. Remain silent and wait\n");

        int choice = get_choice(2);
        
        if (choice == 1){
            printf("It will not budge, and the room crushes you.\n");
            game_over();
        }
        else if (choice == 2){
            echoing_hall();
        }
        
    }
}

void echoing_hall(){

    printf("The walls stop moving, and the door slowly unlocks on its own. You notice a sequence of symbols glowing faintly. Tracing them with your fingers, a hidden mechanism clicks, and the iron door creaks open.As you step through the iron door, you find yourself in a vast hallway lined with flickering lanterns. The air feels heavier here, as if something unseen is watching. The floor is covered in a strange mist, and every step sends a faint echo that never quite fades away.\n");
    printf("\nAt the far end of the hall stands a grand mirror, cracked down the center. Below it, an inscription reads:\n");
    printf("\"To pass through, you must face your reflection. But beware—some reflections do not belong to you.\"\n");
    printf("1.An antique key : tarnished but still intact.\n 2.A silver dagger : engraved with symbols similar to those on the walls.\n3.A small hourglass : sand trickling impossibly slow.\n");
    printf("\n How will you wish to act?\n");
    printf("1. Pick up the antique key and use it on the mirror\n");
    printf("2. Take the silver dagger and strike the mirror \n");
    printf("3. Flip the hourglass upside down \n");
    printf("4. Walk past the mirror without touching anything \n");
   
    int choice = get_choice(4);

    if (choice == 1) {
        printf("The key vanishes, and the mirror starts to glow. You see yourself… but your reflection smiles when you do not. It reaches through the glass and pulls you inside.\n");
        game_over();
        } 
    else if (choice == 2) {
        hidden_doorway();
        }
    else if (choice == 3) {
        printf("The mist swirls violently, and time around you slows. The mirror no longer shows your reflection, but a door appears behind you, slightly a jar\n");
        printf("Will you enter it?\n");
        printf("1. Step through the door\n");
        printf("2. Ignore the door and wait\n");

        int choice = get_choice(2);
        
        if (choice == 1){
            hidden_doorway();
        }
        else if (choice == 2){
            printf("The hour glass shatters, and shadows consume the hall.\n");
            game_over();
        }
    }
    else if (choice == 4) {
        printf("A force yanks you backward, and the mist rises, suffocating you.\n");
        game_over();
    }
}

void hidden_doorway(){

    printf("The mirror shatters, revealing a hidden doorway. You vanish into the unknown.\n");
    printf("\nAs you step forward, the air grows colder, and the flickering candlelight reveals a faint outline on the stone wall a door, but one without a handle or keyhole. A soft hum resonates from the ground, as if the very foundation of the house is alive, waiting.\n");
    printf("A rusted plaque is mounted beside the doorway, its inscription barely legible under the dust:\n");
    printf("\"The door remains unseen, but not untouched. Reveal it with that which is lost.\"\n");
    printf("At your feet, you notice three objects, each pulsing with a faint glow. Choosing the correct one may reveal the door, but choosing wrongly... may awaken something else\n");    
    printf("\n How will you reveal the hidden doorway?\n");
    printf("1. The Silver Locket \n");
    printf("2. The Blood-Stained Key\n");
    printf("3. The Empty Glass Bottle\n");
   
    int choice = get_choice(3);

    if (choice == 1) {
        printf("Engraved with a name you do not recognize\n");
        printf("what to do?\n");
        printf("1. Press the locket against the wall\n");
        printf("2. Open the locket first\n");

        int choice = get_choice(2);
        
        if (choice == 1){
            printf("The locket vibrates, but nothing happens. The room darkens as the whispers return");
            game_over();
        }
        else if (choice == 2){
            printf("The hour glass shatters, and shadows consume the hall.\n");
            vanishing_passage();
        }
        } 
    else if (choice == 2) {
        printf("Old and rusted, yet strangely warm to the touch\n");
        printf("What to do?\n");
        printf("1. Insert the key into the walls cracks.\n");
        printf("2. Drop the key and walk away.\n");

        int choice = get_choice(2);
        
        if (choice == 1){
            printf("The wall shifts, revealing a passage but as you step through, the door vanishes behind you. ");
            vanishing_passage();
        }
        else if (choice == 2){
            printf(" A deep, guttural growl echoes through the room. Something has awakened.\n");
            game_over();
        }
        }
    else if (choice == 3) {
        printf("Its inside coated with a faint red residue.\n");
        printf("what to do?\n");
        printf("1. Pour a drop of your own blood into the bottle.\n");
        printf("2. Shatter the bottle against the door.\n");

        int choice = get_choice(2);
        
        if (choice == 1){
            printf("The liquid glows, forming words: What is given is never returned. The door slowly materializes.\n");
            vanishing_passage();
        }
        else if (choice == 2){
            printf("A violent gust of wind extinguishes all light. When the darkness fades, you are no longer in the same room.\n");
            game_over();
        }
    }
}


void credits() {
    printf("\n================== CREDITS ==================\n");
    printf("\n               TEAM {team_name}               \n");
    printf("\n2512847642\tMd. Fahim Hossain\n");
    printf("2511026642\tSamia Zaman\n");
    printf("2512244042\tRiazul Jannat\n");
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
