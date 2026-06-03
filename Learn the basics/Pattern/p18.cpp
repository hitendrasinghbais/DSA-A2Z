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
    char r;
    if(n==1){r='A';}
    if(n==2){r='B';}
    if(n==3){r='C';}
    if(n==4){r='D';}
    if(n==5){r='E';}
    int m=1;
    int s=1;
    while(j<n)
    {   int i=0;
         while(i<=j)
         {
          cout<<r;
          if(i<s-1)
          {
            cout<<" ";
          }
          i++;
          r++;
         }
         s++;
         r--;
         i=0;
         while(i<m)
         {
            r--;
            i++;
         }
        m++;
        j++;
        cout<<endl;
    }

    }
};
