#include <stdio.h>
#include <cs50.h>

int main(void){
    double price= get_int();
    double remainder= price;
    int count=0;
    do{
        if(remainder-.25 > 0){
            count++;
            remainder -= 25;
            break;
        }
        else if(remainder-.1 > 0){
            count++;
            remainder -= .1;
            break;
        }
        else if(remainder - .05 > 0){
            remainder -= -.05;
            count++;
            break;
        }
        else if(remainder - .01 > 0){
            remainder -= .01;
            count++;
            break;
        }
    }while(remainder != 0);
    printf("Coins: %i \n", count);
}