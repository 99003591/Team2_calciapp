#include<stdio.h>
#include<addition.h>
#include<sub.h>
#include<mul.h>
#include<division.h>
#include<expo.h>
#include<factorial.h>
#include<bitoperations.h>
#include<hectaretoacre.h>
#include<inchtocentimeter.h>
#include<kmtometer.h>
#include<modulo.h>
#include<ncr.h>
#include<npr.h>
#include<percentage.h>
 
 int main()
 {
    int n,operation;
    printf("Welcome to Solid State Calculator");
    printf("Which operation you want to perform?");
    printf("1.Addition\n 2.Subtraction\n 3.Division\n 4.Multiplication\n 5.Exponential\n 6.Factorial\n 7.Modulo\n 8.Percentage\n 9.Permutation and Combination\n 10.Trigonometric functions\n 11.Conversions\n 12.Bitwise operations\n");
    scanf("%d",&n);
    if(n<13 && n>0)
    {
        scanf("%d",&operation);
        switch(n)
        {
            case 1: addition(a,b);
                    break;
            case 2: subtraction(a,b);
                    break;
            case 3: Division(n1,n2);
                    break;
            case 4: Multiplication(a,b);
                    break;
            case 5: Exponential(b,e);
                    break;
            case 6: Factorial(num);
                    break;
            case 7: Modulo(num1,num2);
                    break;
            case 8: Percentage(operand1,operand2);
                    break;
            case 9: npr(n,r);
                    break;
            case 10: ncr(n,r);
                     break;
            case 11: hectaretoacre(num);
                     break;
            case 12: inchtocentimeter(num);
                     break;
            case 13: kmtometer(num);
                     break;
            case 12: Bitwiseoperations(a,b);
                     break;

        }
    }
    test_main();
  
    return 0;
 }
