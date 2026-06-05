/*
You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
*/class Solution {
public:
    int reverseNumber(int n) 
    {int r;
    int e=n;
    int g=0;
while(e>0)
{
   r=e%10;
   g=g*10+r;
   e=e/10;
}
return g;
    }
};
