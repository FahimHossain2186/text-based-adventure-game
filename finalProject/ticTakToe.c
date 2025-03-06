#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char input[3][3];

void printBoard(){

    printf("\n %c | %c | %c ", input[0][0], input[0][1], input[0][2]);
    printf("\n---|---|---");
    printf("\n %c | %c | %c ", input[1][0], input[1][1], input[1][2]);
    printf("\n---|---|---");
    printf("\n %c | %c | %c ", input[2][0], input[2][1], input[2][2]);
    printf("\n");

}

void resetBoard(){

    for(int x = 0; x < 3; x++)
        for(int y = 0; y < 3; y++)
            input[x][y] = ' ';
}

int emptyspace(){
    
    int count = 9;

    for(int x = 0; x < 3; x++)
        for(int y = 0; y < 3; y++)
            if(input[x][y] != ' ')
                count--;

    return count;
}

void player(){

    int row, column;

    while(1){

        printf("Enter row #(1-3): ");
        scanf("%d", &row);
        row--;
        printf("Enter column #(1-3): ");
        scanf("%d", &column);
        column--;

        if(input[row][column] != ' ')   printf("Invalid Move!!\n");
        else{
            input[row][column] = 'X';
            break;
        }
    }
    

}

void computer(){

    //random input

    int row, column;

    do{
        row = rand() % 3; //To ensure the random number is always between 0 to 2
        column = rand() % 3;

    }while(input[row][column] != ' ');

    input[row][column] = 'O';

}

char winnerCheck(){

    for (int i = 0; i < 3; i++) {
        
        if (input[i][0] == input[i][1] && input[i][0] == input[i][2] && input[i][0] != ' ')     return input[i][0];  // Row check

        if (input[0][i] == input[1][i] && input[0][i] == input[2][i] && input[0][i] != ' ')     return input[0][i];  // Column check
    }

    // Diagonal checks
    if (input[0][0] == input[1][1] && input[0][0] == input[2][2] && input[0][0] != ' ')         return input[0][0];
    if (input[0][2] == input[1][1] && input[0][2] == input[2][0] && input[0][2] != ' ')         return input[0][2];

    return ' ';     
}

void printWinner(char winner){

    if(winner == 'X')       printf("You win!!!");
    else if(winner == 'O')  printf("You Lose!!!");
    else                    printf("Its a Draw!!!");
}

int main(){

    char winner = ' ';
   
    srand(time(0));

    resetBoard();
    
    while(winner == ' ' &&  emptyspace() != 0){
        
        printBoard();

        player();
        winner = winnerCheck();
        if(winner != ' ' || emptyspace() == 0) break;

        computer();
        winner = winnerCheck();
        if(winner != ' ' || emptyspace() == 0) break;
        
    }

    printBoard();
    printWinner(winner);

    return 0;
}
