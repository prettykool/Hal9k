#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main (){
    int answer;
    bool Y;
    bool N;

    Y = true;
    N = false;

    printf ("Are you sure about this, %s? Y/N. | ", getenv("USER"));
    scanf (" %c", &answer);

    while (answer == 'Y'){
        printf("You know I can't do that, %s.\n", getenv("USER"));
        break;
        }

    while (answer == 'N'){
        printf("Good choice. You always know best.\n");
        break;
    }

    return 0;
}
