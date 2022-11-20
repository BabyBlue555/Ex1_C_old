//
// Created by michal on 13/11/22.
//
//
// isArmstrong, isPalindrome


//power - calculates the digit's power in recursion
int calcPower_(int digit, int power){
    if (power==1)
        return digit;
    return digit*(calcPower_(digit,power-1));

}

 int countDigits_(int num){
    int count =0;
    while (num>0){
        count=count+1;
        num=num/10;
    }
    return count;
}



// isArmstrong -  recursion

int isArmstrong_(int num){
    if (num==0)
    {

        return 0;
    }
    return calcPower_(num%10,countDigits_(num))+isArmstrong_(num/10) ;
    

}

 int isPalindrome_ (int num){
    if(countDigits_(num)<2){
        return 1;
    }

    if(num%10 == num / (calcPower_(10,countDigits_(num)-1)))
        return isPalindrome_((num % calcPower_(10,countDigits_(num)-1 ) )/10);
    else
        return 0;    


}





//  isPalindrome- recursion

