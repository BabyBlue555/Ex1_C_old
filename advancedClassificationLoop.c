//
// Created by michal on 13/11/22.
//

//power - calculates the digit's power in recursion
int calcPower(int digit, int power){
    if (power==1)
        return digit;
    return digit*calcPower(digit,power-1);

}

// countDigits - not neccesary

int countDigits(int num){
    int count =0;
    while (num>0){
        count=count+1;
        num=num/10;
    }
    return count;
}

// isArmstrong, if the the num is equal to the sum of the nth powers of its digit.
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


 int isPalindrome (int num){
    int count=countDigits(num);
    int bool=1;
    while((count/2)>0 && bool){
        if(num%10 != num/(calcPower(10,count-1)))
            bool=0;
        num= (num % calcPower(10,count-1) ) /10;  // remove the last and first digit of num
        count=count-2;
    }
    return bool;


}