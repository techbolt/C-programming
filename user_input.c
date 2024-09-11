#include <stdio.h>

int main()
{
//INPUTTING INTEGER VALUE
    // int age;
    
    // printf("Enter your age:");
    // scanf("%d", &age);

    // printf("You are %d years old.", age);
    // return 0;

//INPUTTING DOUBLE VALUE
    // double gpa;

    // printf("Enter your gpa:");
    // scanf("%lf", &gpa);

    // printf("Your gpa is %lf", gpa);
    // return 0;

//INPUTTING STRING VALUE
    // char name[30];

    // printf("Enter your name:");
    // scanf("%s", name); //when you take string input, you dont need to put "&" symbol.

    // printf("Your name is %s", name);
    // return 0;

//BETTER WAY OF INPUTTING STRING 
    char name[30];

    printf("Enter your name:");
    fgets(name, 30, stdin); //fgets(var name, no. of chars, stdin). "stdin" stands for standard input.

    printf("Your name is %s", name);
    return 0;
}