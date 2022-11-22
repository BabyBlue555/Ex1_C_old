//
// Created by michal on 13/11/22.
//

#include <stdio.h>
#include "NumClass.h"



int main(){

    int num1,num2 =0;
    int min,max=0;
    int i=0;

   // printf("please enter two positive numbers");
    scanf("%d%d", &num1,&num2);

    
    if(num1<num2){
        min=num1;
        max=num2;
    }
    else{
        min=num2;
        max=num1;
    } 

  printf("The Armstrong numbers are: ");
   for(i=min;i<=max;i++){
        if(isArmstrong(i)){ // factorial
             printf("%d " , i );
          //   break;
     
        }
    }
     printf("\n");
    printf("The Palindromes are: ");   
    for(i=min;i<=max;i++){
        if(isPalindrome(i)){ 
             printf( "%d " , i );
           //  break;
       
        }
    }
    printf("\n");
    printf("The Prime numbers are: ");
    for(i=min;i<=max;i++){
        if(isPrime(i)){
          printf(" %d " , i );
          //break;
        
        }
    }
    printf("\n");
    printf("The Strong numbers are: ");
    for(i=min;i<=max;i++){
        if(isStrong(i)){ // power
             printf("%d " , i );
           //  break;
       
        }
    }
    printf("\n");
    return 0;

    

}
   



    
  