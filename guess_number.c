#include <stdio.h>
#include <stdlib.h>


double add(double a, double b){
    return a + b;
}

int main(){

    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("result= %lf\n", add(num1, num2));

    return 0;
}