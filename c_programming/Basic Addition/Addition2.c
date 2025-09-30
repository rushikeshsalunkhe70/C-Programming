#include<stdio.h>

int main()
{
    
    
    int No1 = 0;
    int No2 = 0;
    int No3 = 0;
    int Ans = 0 ; 


    printf("Enter first number : \n");
    scanf("%d",&No1);

    printf("Enter second number : \n");
    scanf("%d",&No2);

    printf("Enter third number : \n");
    scanf("%d",&No3);

    Ans = No1 + No2 + No3;

    printf("Addition is : %d\n",Ans);
    
    return 0;
}