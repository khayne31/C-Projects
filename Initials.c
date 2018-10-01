#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
int count;
int length;
int initial_size;
int place;
int initialCount(string name);


int main(void){
    
    string name= get_string();
    if(isalpha(name[0])){
       printf("%c", name[0]); 
    }
    
    for(int j=1; j< strlen(name) ; j++){
       if(isblank(name[j-1]) && !isblank(name[j])){
        
           printf("%c", toupper(name[j]));
       }
    }
    printf("\n");
}
