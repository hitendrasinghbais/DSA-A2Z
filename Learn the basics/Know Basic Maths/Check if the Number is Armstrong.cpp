/*
You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.



An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.
*/

class Solution {
public:
    bool isArmstrong(int n) 
    { int e;
    int s=n;
    int r=0;
    int count=0;
        while(s!=0)
        {
            count++;
            e=s%10;
            s=s/10;
        }
        s=n;
       while(s!=0)
{
    e=s%10;
    r=pow(e,count)+r;
    s=s/10;
}
return n==r;
    }
};
