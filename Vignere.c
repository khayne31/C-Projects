#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int hold;
int encode(char c, int key);
int main(void){
    string original=get_string();
    string key= get_string();
    int length=strlen(original);
    int key_length= strlen(key);
    int decrease=0;
    
    for(int i=0; i<length; i++){
        if(!isalpha(original[i])){
            decrease++;
        }
        printf("%c", encode(original[i], toupper(key[((i-(decrease%key_length)))%key_length])-65));
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


