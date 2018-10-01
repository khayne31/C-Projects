#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char new_word;
int crack(int digits);


string hash;
char key[2];


int main(void){
    hash= get_string();
    key[0]=hash[0];
    key[1]=hash[1];
    int count= 0;
    printf("%s \n", key);
    for(int i=0; i<4; i++){
       if(crack(i+1)){
           count++;
           break;
       }
    }
    if(count == 0){
        printf("Password Not Found! \n");
    }
}


int crack(int digits){
    
     if(digits == 1){
        char s[1];
        strcpy(s, "A");
        for(int i=0; i< 52; i++){
              if(s[0]==91){
                  strcpy(s, "a");
              }
              
              if(s[0] == 65){
                  printf("Testing: %s \n", crypt("a", "pi"));
              }
              string result=crypt(s,key);
              //printf("Results of %c one: %s \n", s[0], result);
                if(result == NULL){
                    return false;
                }
                if(strcmp(result, hash)==0){
                  printf("The Password is: %s \n", s);
                  return true;
              }
              s[0]++;
         }
    }
    else if(digits == 2){
        char s[2];
        strcpy(s, "AA");
       for(int i=0; i<52; i++){
           if(s[0]==91){
                  s[0]=97;
              }
           for(int j=0; j< 52; j++){
              if(s[1]==91){
                  s[1]=97;
              }
              string result=crypt(s,key);
              //printf("Results of %c, %c one: %s \n", s[0], s[1], result);
              if(result == NULL){
                    return false;
                }
                if(strcmp(result, hash)==0){
                  printf("The Password is: %s \n", s);
                  return true;
              }
              s[1]++;
           }
           s[0]++;
           s[1]=65;
       }
    }
    else if(digits == 3){
        char s[3];
        strcpy(s, "AAA");
        for(int i=0; i<52; i++){
            if(s[0] == 91){
                       s[0]=97;
            }
           for(int j=0; j< 52; j++){
               if(s[1] == 91){
                       s[1]=97;
                }
               for(int k=0; k<52; k++){
                   if(s[2] == 91){
                       s[2]=97;
                   }
                   string result=crypt(s,key);
                   if(result == NULL){
                    return false;
                    }
                    if(strcmp(result, hash)==0){
                        printf("The Password is: %s \n",s);
                        return true;
                    }
                    s[2]++;
               }
               s[1]++;
               s[2]=65;
           }
           s[0]++;
           s[1]=65;
       }
    }
    else if(digits == 4){
        char s[4];
        strcpy(s, "AAAA");
        for(int i=0; i<52; i++){
            if(s[0] == 91){
                s[0]=97;
            }
           for(int j=0; j< 52; j++){
               if(s[1] == 91){
                    s[1]=97;
                }
               for(int k=0; k<52; k++){
                   if(s[2] == 91){
                        s[2]=97;
                    }
                   for(int l= 0; l<52; l++){
                       if(s[3] == 91){
                           s[3]=97;
                       }
                       string result=crypt(s,key);
                       if(result == NULL){
                            return false;
                         }
                       if(strcmp(result, hash)==0) {
                        printf("The password is: %s \n", s);
                        return true;
                        }
                        s[3]++;
                   }
                   s[2]++;
                   s[3]=65;
               }
               s[1]++;
               s[2]=65;
           }
           s[0]++;
           s[1]=65;
       }
    }
    
    return false;
    
}
