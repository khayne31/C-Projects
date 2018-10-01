#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int hold;
int encode(char c, int k);
int main(void){
    string original= get_string();
    int key= get_int();
    int length=strlen(original);
    for(int i=0; i<length; i++){
        if(i == length-1){
            printf("%c \n", encode(original[i], key));
        }
        else{
            printf("%c", encode(original[i], key));
        }
    }
}

int encode(char c, int key){
    if(isalpha(c)){
        hold=c+(key%26);
        if(isupper(c) && hold > 90){
            hold -= 26;
        }
        else if(islower(c) && hold > 122){
            hold -=26;
        }
        return hold;
    }
    return c;
}