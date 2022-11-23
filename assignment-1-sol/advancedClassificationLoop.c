

int countDigits(int ); 
int calcPower(int,int ); 


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