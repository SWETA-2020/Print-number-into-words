//Print Number into word

#include<stdio.h>
int main()
{
    int rem,sum=0,number,num;
    printf("Enter the number you want to convert into words /n");
    scanf("%d",&number);
    num=number;
    // reverse the number
    while(num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    number=sum;
    while(n>0)
    {
        rem =number%10;
        switch(rem)
        {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }                        // close of switch case
         number=number/10;
    }                             // close of while loop
     
 return 0;
}
