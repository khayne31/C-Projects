#include <stdio.h>
#include <cs50.h>

int main(void){
    printf("Give me water mins bish: ");
   int minutes= get_int();
   printf("Minutes: %i \n Water: %i \n", minutes, minutes*12);
}