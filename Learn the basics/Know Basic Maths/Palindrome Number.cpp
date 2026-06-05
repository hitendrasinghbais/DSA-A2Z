/*
You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.



A palindrome number is a number which reads the same both left to right and right to left.
*/
class Solution {
public:
    bool isPalindrome(int n)
    {
int check=n;
int s=0;
int last;
while(n!=0)
{
last=n%10;
s=s*10+last;
n=n/10;
}
if(check==s) return true;
else return false;
    }
};
