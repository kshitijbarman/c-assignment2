 // 8*1+(4-2)/1+6
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;

    printf("Please Enter the Value for a: ");  // input 8 
    scanf("%i",&a);

    printf("Please Enter the Value for b: ");  // input 1 
    scanf("%i",&b);

    printf("Please Enter the Value for c: ");  // input 4 
    scanf("%i",&c);

    printf("Please Enter the Value for d: ");  // input 2
    scanf("%i",&d); 

    printf("Please Enter the Value for e: ");  // input 1
    scanf("%i",&e);

      printf("Please Enter the Value for f: ");  // input 6
    scanf("%i",&f);


    int result = a*b+(c-d)/e+f;
    printf("The Result is : %i", result);  

    return 0;
}
