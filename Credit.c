#include <stdio.h>
#include <cs50.h>
long long credit;
long long hold;
int temp;
int summation1 = 0;
long long test;
int summation(int size);
int divide(int size);
int main(void){
  credit= get_long_long();
  hold=credit;
  temp=credit;
  test=hold;
  int check;
  
  //~~~~~~~~~~~~~~~~AMEX~~~~~~~~~~~~~~~~~~~
  
  divide(13);
  
  if(test == 34 || test == 37){
        check=summation(15);
        if(check % 10 == 0){
           printf("AMEX \n"); 
           return 0;
        }
        printf("INVALID");
         
         return 0;
      
  }
  //~~~~~~~~~~~~~MASTERCARD~~~~~~~~~~~~~~~
  divide(14);
  if(test == 51 || test ==  52 || test == 53 || test == 54 || test == 55){
         check=summation(16);
        if(check % 10 == 0){
           printf("MASTERCARD \n"); 
           return 0;
        }
        printf("INVALID");
        return 0;
      
  }
  //~~~~~~~~~~~~~~~~VISA~~~~~~~~~~~~~~~~~~~
  divide(12);
  
  if(test == 4){
        check=summation(13);
        if(check % 10 == 0){
           printf("VISA \n");  
           return 0;
        }
  }
  
  divide(15);
  
  if(test == 4){
        check=summation(16);
        if(check % 10 == 0){
           printf("VISA \n");  
           return 0;
        }
        printf("INVALID");
         return 0;
  }
  else{
      printf("INVALID \n");
  }
}

int summation(int size){
    summation1=0;
    temp=hold;
      for(int i=0; i < size; i++){
        if(i%2 != 0){
            temp = credit % 10;
            temp *= 2;
        if(temp < 10){
            summation1 += temp % 10;
            }
        else if(temp < 20){
            summation1 += temp %10;
            temp /= 10;
            summation1 += temp%10;
            }
        }
     else{
         summation1 += credit % 10;
        }
        credit /= 10;
    }
    //printf("test: %i", summation1);
    return summation1;
  }
  
  int divide(int size){
    test=hold;
    for(int i=0; i<size; i++){
      test /= 10;
    }
    return test;
  }