#include <stdio.h>

int main() {

    int age;

    printf("Enter your age:  ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote!\n");
    }
    else if (age <= 3){
        printf("Uh, you're actually a baby. No, you can't vote.\n");
    }
    else {
        printf("You are not eligible to vote!\n");
    }

    return 0;

}