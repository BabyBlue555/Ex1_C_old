
// fact - helping function for isStrong - calculates the factorial of the digit
int fact(int);
//countDigits - is used in order to simplify the recursions in both isArmstrong and isPalindrom
int countDigits(int); 
//calcPower - calculates the digit's power in recursion
int calcPower(int,int); 


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


int fact(int digit ){
    if(digit==0){
        return 1;
    }
    return digit*fact(digit-1);
}

// is prime

 int isPrime(int num){
    int i=2;
    int bool =1;
    for(i=2; i<num && bool==1; i++)
        if(num%i ==0 ){
            bool=0;
        }

    return bool;

 }

//is strong

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