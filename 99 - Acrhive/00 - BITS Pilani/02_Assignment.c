// Write a C program to find simple interest: si = (p*r*n)/100 using Functions concept
// Implement a user-defined function to compute the power of a number. The function should
// take two arguments: the base and the exponent, and return the result.
#include <stdio.h>

int SI(int, int, int);
int SI(int p, int r, int t){
    return ((p*r*t)/100);
}

int power(int, int);
int power(int a, int b){
    int c = a;
    for (int i = 1; i < b; i++)
    {
        a = a*c;
    }

    return a;
    
}


int main(){
    int p = 1000;
    int r = 10;
    int t = 1;

    int interest = SI(p,r,t);
    printf("%d \n", interest);
    
    int base = 2;
    int exponent = 8;
    int ans = power(base,exponent);

    printf("%d \n", ans);
    


     
    return 0;
}