#include <stdio.h>

int main(){

    int age;

    printf("What is your age?   ");
    scanf("%d", &age);
    
    (age >= 18) ? printf("You can vote\n\n") : printf("You cannot vote\n\n");

}