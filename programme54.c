//54.C program to print Square Number 1,2,3,4,5 Pattern
#include<stdio.h>
int main(){
    int n, i, j;
    printf("Enter the Number of Row and Column :");
    scanf("%d",&n);     
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("%d",j);
        }
        printf("\n");
    }

}