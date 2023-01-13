//26. C program to print Armstrong numbers from 1 to n AND Check a given number is Armstrong numbers or not.
#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,j,count,rem,num,sum = 0;

    printf("Enter the nth term  : ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++){
        count = 0;
        num = i;
        sum = 0;
        
        while(num > 0){
            num /= 10;
            count++;
        }
        num = i;

        while(num > 0){
            rem = num % 10;
            sum += pow(rem,count);

            num /= 10;
        }
        
        if(sum == i) printf("%d ",i);
 }
}