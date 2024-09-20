//write  a program to check whether a triangle is valid or not.,when the three 
//angles ot the triangle are entered through the keyboard .A triangle is valid if 
//the sum of all the three angles is eqaual to 180 degrere 
#include<stdio.h>
int main(){
    int angle1,angle2,angle3;
    printf("enter the three angles of the triangle :");
    scanf("%d\n %d\n %d\n ",&angle1,&angle2,&angle3);
    int sum = angle1 + angle2 + angle3;
    if(sum == 180 && angle1>0 && angle2>0 && angle3>0 )   {
        printf("the triangle is valid.");
    }  
    else{
        printf("the triangel is not valid");
    } 
    return 0;                                                                                                                                                                                                                                                                                                              
}



