#include<stdio.h>
int main(){
    int num, sum=0,rem=0;
    printf("Enter the number to get sum of digit:");
    scanf("%d",&num);

    while(num > 0){
        rem=num%10; //456%5 = 6
        sum=sum +rem; // sum =0+ 6 = 6
        num =num/10;
    }
    printf("Sum of Digit = %d",sum);
    return 0;
}