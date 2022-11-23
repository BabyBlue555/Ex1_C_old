//
// Created by michal on 13/11/22.
//
//
// isArmstrong, isPalindrome



extern int calcPower(int , int ); 
extern int countDigits(int); 
//extern int armstrong(int num, int numDigits);



// isArmstrong -  recursion

 ///this function calls another function, armstrong(int), which checks if a number is an armstrong number recursively

int isArmstrong(int num){
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
    // int ans=armstrong(num,countDigits(num));
    // if(ans==num){
    //     return 1;
    // }
    // else{
    //     return 0;
    // }


// int isArmstrong(int num){
//     if (num==0)
//     {

//         return 0;
//     }
//     return calcPower(num%10,countDigits(num))+isArmstrong(num/10) ;
    

// }


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







