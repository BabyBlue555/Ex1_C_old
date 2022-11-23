
int countDigits(int ); 
int calcPower(int,int ); 
int armstrong(int , int );



// a helping recursion function for isArmstrong
int armstrong(int num, int numDigits){
    if(num==0){ // if num==0
        return 0;
    }
    else
        return calcPower((num%10),numDigits)+ armstrong(num/10,numDigits);
}

int isArmstrong(int num ){
    int ans = armstrong(num, countDigits(num));
    if(ans){
        return 1;
    }
    else{
        return 0;
    }
}




 ///  this function checks if a number is palindrom recursively
 int isPalindrome(int num){
    if(countDigits(num)<2){
        return 1;
    }

    if(num%10 == (num / (calcPower(10,countDigits(num)-1))))
        return isPalindrome((num % calcPower(10,countDigits(num)-1 ) )/10); // taking down the first and last digits
    else
        return 0;    


}




