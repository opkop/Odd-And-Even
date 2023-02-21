// Write a program to calculate sum of first N even natural numbersSolution
// Write a program to calculate sum of first N odd natural numbersSolution
#include <stdio.h>

int main() 
{
    int n,i=1;
    int sum=0;
    scanf("%d",&n);
   // printf("The N Even number are\n");
    printf("The N Odd number are\n");
    while(i<=n)
    {
        // sum+=i;
        if(i%2==0)
        {
        //   printf("%d\n",i);
        }
        else
        {
           sum+=i;
           printf("%d\n",i); 
        }
        i++;
    }
    printf("i=%d\n",i);
    printf("Sum=%d\n",sum);
    return 0;
}

