//
// Created by michal on 13/11/22.
//

// fact - helping function for isStrong - calculates the factorial of the digit
int fact(int n);
//countDigits - is used in order to simplify the recursions in both isArmstrong and isPalindrom
int countDigits(int num); 
//calcPower - calculates the digit's power in recursion
int calcPower(int digit, int power); 
// for isArmstrong function in advancedClassificationRecursion.c
int armstrong(int num, int numDigits);

int calcPower(int digit, int power){
    if (power==1){
        return digit;
    }
    return digit*calcPower(digit,power-1);

}

int countDigits(int num){
    int count =0;
    while (num>0){
        count=count+1;
        num=num/10;
    }
    return count;
}

int armstrong(int num, int numDigits){
    if(num==0){ // if num==0
        return 0;
    }
    else
        return calcPower((num%10),numDigits)+ armstrong(num/10,numDigits);
}

//isPrime - checks if number is prime or not

 int isPrime(int num){
    int i=2;
    int bool =1;
    for(i=2; i<num && bool; i++)
        if(num%i ==0 ){
            bool=0;
        }

    return bool;


    // if(bool){
    //     return 1; // true
    // }
    
    // else{
    //     return 0; // false
    // }
}

int fact(int digit ){
    if(digit==0){
        return 1;
    }
    return digit*fact(digit-1);
}

// isStrong - checks if a number is strong or not

int isStrong(int num){
    int original=num;
    int sumFact=0;
    while (num>0){
        sumFact=sumFact+ fact(num%10);
        num=num/10;
    }
    if(sumFact == original )
        return 1;
    else 
        return 0;

}