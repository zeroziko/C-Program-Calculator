#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//this code created by:ZAKARIA OMORO

int main() {
    float value1,value2,Ans;
    char operator;
    printf("Please give the first value:");
    scanf("%f",&value1);
    printf("please select operator:\n\n '+'\t or\t '-'\t or\t '*'\t or\t '/'\n\nYour selection:\n");
    scanf("%s",&operator);

    while(operator!='/' && operator!='+' && operator!='*' && operator!='-' ) //this loop for require user to select valid operation
    {
        printf("\nPlease select a valid operator!!!:");
        scanf("%s",&operator);
    }
    printf("Please give the second value:");
    scanf("%f",&value2);
    while(operator=='/' && value2==0) //this loop for require user to select a number contrary to zero if he/she select division
    {
        printf("can't divide by ZERO. \n\nplease give the second value again:");
        scanf("%f",&value2);
    }
    switch(operator)
    {
        case '+':
        {
            Ans=value1+value2;
        }break;
        case '-':
        {
            Ans=value1-value2;
        }break;
        case '*':
        {
            Ans=value1*value2;
        }break;
        case '/':
        {
            Ans=value1/value2;
        }break;
    }
    printf("\n\nANSWER!\t\t%.2f\t%c\t%.2f\t=\t%.2f",value1,operator,value2,Ans); //ANSWER

    return 0;
}
