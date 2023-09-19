#include<stdio.h>
int main()
{   int n;
    int count=0;
    int i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                count++; 
               break;
            }
               
        }
    if(count==1)
    {
        printf("not a prime number");
    }
    else
    {
        printf("entered number is a prime number");
    }
    return 0;

}