#include <stdio.h>

int main()
{
    char Name[] = "John Mayer"; //stores a character
    int Age = 35; //stores integer

    printf("There was a man named %s.", Name); //"%s" means that a string(Name) will be inserted here. The string(Name) will replace "%s"
    
    printf(" He was %d years old.", Age); //"%d" means that an integer(Age) will be inserted here. The integer(Age) will replace "%d".
}