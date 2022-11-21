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

 ///this function checks if a number is an armstrong number recursively


int isArmstrong(int num){
    if (num==0)
    {

        return 0;
    }
    return calcPower_(num%10,countDigits_(num))+isArmstrong(num/10) ;
    

}

 ///  this function checks if a number is palindrom recursively
 int isPalindrome(int num){
    if(countDigits_(num)<2){
        return 1;
    }

    if(num%10 == num / (calcPower_(10,countDigits_(num)-1)))
        return isPalindrome((num % calcPower_(10,countDigits_(num)-1 ) )/10);
    else
        return 0;    


}





//  isPalindrome- recursion

