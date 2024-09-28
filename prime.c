//write a program to print all prime number 1 to n.value of n ask from the user .
//function to check if number is prime
//the numbers which are divisible by 1 and itself.235711
//1=>1 only one factor
//2 =>1,2 two factoers so it is prime 
//=>3 1,3prime
//4=> 1,2,4 not prime so on

#include<stdio.h>
int main(){
    int min ,max,count;
    printf("Enter min and max values:");
    scanf("%d %d",&min,&max);
    for(int i=min;i<=max;i++){
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count ==2){
            printf("\n%d",i);
        }
    }
}