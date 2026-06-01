/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



E 

D E 

C D E 

B C D E 

A B C D E
*/
class Solution {
public:
    void pattern18(int n) 
    { int j=0;
    char r='E';
    while(j<n)
    {   int i=0;
         while(i<=j)
         {
          cout<<r;
          i++;
          r++;
         }
         r-=3;
        j++;
        cout<<endl;
    }

    }
};
