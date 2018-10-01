#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int hold;
int decode(char c, int key);
int main(void){
    string code=get_string();
    int key= get_int();
    for(int i=0; i<strlen(code); i++){
        printf("%c", decode(code[i], key));
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