/*
You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.



A prime number is a number which has no divisors except 1 and itself.
*/


class Solution {
public:
    bool isPrime(int n) 
    {
        if(n<=1) return false;
        int j=2;
        int r=n;
        int count=0;
        while(j<=n)
        {
          if(r%j==0)
          {
            count++;
            } 
        j++;
        }
        if(count>2) return false;
          else return true;
    }
};
