//variables and Data Types

#include<stdio.h>
int main()
{
//declration and initialization of variables
    char a ; //%s
    char name[] = {}; //%s
    int age ; //%d
    float salary ; //%f
    double budget ; // %lf
    printf(" please enter a character: ");
    scanf("%c",&a);
    printf("This is a character %c \n", a);
    
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Your name is %s \n", name);
    
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("This is an integer (age) \n", age);
    
    printf("Enter float salary: ");
    scanf("%f",&salary);
    printf("The float salary %.3f \n", salary);
    
    printf("Enter double budget: ");
    scanf("%lf",&budget);
    printf("The double budget %.2lf \n",budget);
    
    
    
    





    return 0;
}