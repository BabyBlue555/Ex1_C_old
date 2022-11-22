//
// Created by michal on 13/11/22.
//

extern int countDigits(int n); 
extern int calcPower(int digit, int power); 


// isArmstrong, if the the num is equal to the sum of the nth powers of its digit.

 /// this function checks if a number is an armstrog number with while loop
 

 int isArmstrong(int num ){
    int original = num;
    int power=countDigits(num);
    int sumPower=0;
    while (num>0){
       sumPower= sumPower+ calcPower(num%10, power);
       num=num/10;
    }
    if(sumPower== original){
        return 1;
    }
    else{
        return 0;
    }



}





//isPalindrome

 /// this function checks if a number is palindrom with while loop


 int isPalindrome(int num){
    int count=countDigits(num);
    int bool=1;
    while((count/2) && bool){ // count/2>0
        if(num%10 != num/(calcPower(10,count-1)))
            bool=0;
        num= (num % calcPower(10,count-1) ) /10;  // remove the last and first digit of num
        count=count-2;
    }
    return bool;


}