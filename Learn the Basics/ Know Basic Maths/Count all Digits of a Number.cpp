/*
You are given an integer n. You need to return the number of digits in the number.



The number will have no leading zeroes, except when the number is 0 itself.
*/
class Solution {
public:
    int countDigit(int n) 
    {
int countDigit=0;
while(n>0)
{
    countDigit++;
    n=n/10;
}
return countDigit;
    }
};
