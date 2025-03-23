#include<stdio.h>
#include<string.h>

int main(){

    int n; char c;

    scanf("%d", &n);

    char string[n+3];

    printf("Enter your string: ");

    getchar();
    gets(string);

    strncat(    );
    getchar();
    c = getchar(); 
    strncat(string[n+1],c);
    getchar();
    string[n+2]=getchar();
    

    puts(string);

    return 0;
}