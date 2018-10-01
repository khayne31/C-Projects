#include <stdio.h>
#include <cs50.h>

int main(void){
    int rows= get_int();
    while(rows <0){
        rows= get_int();
    }
    int count=2;
    int space= rows-1;
    for(int i =0; i<rows; i++){
        for(int h=0; h<space; h++){
            printf(" ");
        }
        for(int j=0; j<count; j++){
            printf("#");
        }
    
        count++;
        space--;
        printf("\n");
    }
}