#include <stdio.h>

int main()
{
    char color[30];
    char noun[30];
    char celebrityF[30]; //first name
    char celebrityL[30]; //last name

    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a noun: ");
    scanf("%s", noun);

    printf("Enter a celebrity name: ");
    scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", noun);
    printf("I love %s %s\n", celebrityF, celebrityL);
    
    return 0;

}