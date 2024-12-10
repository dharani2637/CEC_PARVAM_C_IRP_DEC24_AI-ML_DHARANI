#include<stdio.h>
int main(){
        int num, sum=0,rem=0;
        printf("Enter the number to get sum of digit:");
        scanf("%d",&num);

    do{
        rem=num%10; 
        sum=sum *10 +rem; 
        num =num/10;
        }while(num > 0);
        printf("Sum of Digit = %d",sum);
        return 0;
    }