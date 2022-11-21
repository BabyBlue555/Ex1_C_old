//
// Created by michal on 13/11/22.
//

#include <stdio.h>
#include "advancedClassificationLoop.c"
#include "basicClassification.c"
#include "advancedClassificationRecursion.c"
#include "NumClass.h"



void main(){

    int num1,num2 =0;
    int min,max=0;
    int i=0;

    printf("please enter two positive numbers");
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
        if(isPrime(i)){
          printf("the number %d is prime\n" , i );
          //break;
        
        }
    }
    for(i=min;i<=max;i++){
        if(isStrong(i)){ // power
             printf("the number %d is strong\n" , i );
           //  break;
       
        }
    }
    for(i=min;i<=max;i++){
        if(isArmstrong(i)){ // factorial
             printf("the number %d is Armstrong\n" , i );
          //   break;
     
        }
    }
    for(i=min;i<=max;i++){
        if(isPalindrome(i)){ 
             printf("the number %d is palindrom\n" , i );
           //  break;
       
        }
    }

   }



    
  