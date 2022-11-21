//
// Created by michal on 13/11/22.
//

#include <stdio.h>
#include "NumClass.h"



void main(){

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


   for(i=min;i<=max;i++){
        if(isArmstrong(i)){ // factorial
             printf("The Armstrong numbers are: %d " , i );
          //   break;
     
        }
    }

       
    for(i=min;i<=max;i++){
        if(isPalindrome(i)){ 
             printf("The Palindromes are: %d " , i );
           //  break;
       
        }
    }

    for(i=min;i<=max;i++){
        if(isPrime(i)){
          printf("The Prime numbers are: %d " , i );
          //break;
        
        }
    }
    for(i=min;i<=max;i++){
        if(isStrong(i)){ // power
             printf("The Strong numbers are: %d " , i );
           //  break;
       
        }
    }


   }



    
  