#include<stdio.h>
#include <math.h>

 int add(int a, int b){
     return a+b;
 }
 int sub(int a, int b){
    return a-b;
 }
 int mult(int a,int b){
  return a*b;
 }

 int div(){

 }
 int power(){

 }


int main(){

    int a,b;
    printf("Welcome to the Team Calculator!\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);



    printf("Addition of two numbers is: %d\n" ,add(a,b));
    printf("Subtraction of two numbers is: %d" ,sub(a,b));
    printf("Mulitpilcation of two numbers is: %d" ,mult(a,b));
     
}