#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int hold;
int decrease=0;
int decode(char c, int key);
int main(void){
    string code= get_string();
    string key= get_string();
    int key_length= strlen(key);
    for(int i=0; i<strlen(code); i++){
        if(!isalpha(code[i])){
            decrease++;
        }
        printf("%c", decode(code[i], toupper(key[((i-(decrease%key_length)))%key_length])-65));
        
        
    }
    printf("\n");
}

int decode(char c, int key){
    if(isalpha(c)){
        hold= c-(key%26);
        if(isupper(c) && hold < 65){
            hold += 26;
        }
        else if(islower(c) && hold < 97){
            hold += 26;
        }
        return hold;
    }
    return c;
}