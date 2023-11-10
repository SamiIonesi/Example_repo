#include<stdio.h>

int BitAdd(int a, int b){
    int carry = (a & b) << 1;
    int rezult = a ^ b;

    if(carry == 0){
        return rezult;
    }
    else{
        BitAdd(carry, rezult);
    }
}

int main(){

    int a =5, b= 6;

    printf("Dati doua numere pe care vreti sa le adunati:\n");
    scanf("%d%d", &a, &b);
    printf("Rezultatul adunarii este %d", BitAdd(a,b));

    return 0;
}