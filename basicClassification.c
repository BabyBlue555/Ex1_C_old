//
// Created by michal on 13/11/22.
//


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

// fact - helping function for isStrong - calculates the factorial of th
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