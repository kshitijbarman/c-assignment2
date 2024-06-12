 // 8.9*1.67-(6.21-5.6)+7.8-34 +157
#include<stdio.h>
int main(){
    float a;
    float b;
    float c;
    float d;
    float e;
    int f;
    int g;

    printf("Please Enter the Value for a: "); // input 8.9 
    scanf("%f",&a);

    printf("Please Enter the Value for b: ");  // input 1.67
    scanf("%f",&b);

    printf("Please Enter the Value for c: ");  // input 6.21
    scanf("%f",&c);

    printf("Please Enter the Value for d: ");  // input 5.6
    scanf("%f",&d);

    printf("Please Enter the Value for e: ");  // input 7.8
    scanf("%f",&e);

    printf("Please Enter the Value for f: ");  // input 8.34
    scanf("%i",&f); 

    printf("Please Enter the Value for g: ");  // input 157
    scanf("%i",&g);


    float result = a*b-(c-d)+e-f+g;
    printf("The Result is : %f", result);  

    return 0;
}
