//a five digit  number is entered through the keyboard.write a program to obtain
// the reversed number and to determine whether the original 
//and reversed numbers are eqaual or not. 
#include<stdio.h>
int main(){
 int num ,rev_num =0,remainder,original_num;
 //enter five digit
 printf("Enter a five digit numbers :");
 scanf("%d",&num);
 original_num =num;
 //the numbers should be five  digit only
 if(num>=10000 && num<=99999){
    while(num!=0){
        remainder = num%10;   //121121%10 =>1
        rev_num = rev_num * 10 + remainder;// 0+!=>1
        num=num/10;// now num is 12112
    }
    //display the reversed number 
    printf("Reversed nmber :%d\n ",rev_num);
    //check original num = rev num
    if(original_num==rev_num){
        printf("original num are equal to reversed numbers");
            }
    else{
        printf("original num is not equal to reversed num");
    }
 }
 else{
    printf("please enter a valid five digit number ");
 }

 return 0;
 }