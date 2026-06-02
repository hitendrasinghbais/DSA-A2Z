/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
class Solution {
public:
    void pattern17(int n)
    {
     int j=0;
     int k=1;
     int g=n;
     int s=0;
     int a;
     while(j<n)
     {
        int i=0;
        int p=1;
        while(i<g-1)
        {
            cout<<" ";
            i++;
            p++;
        }
        g--;
         i=0;
        char r='A';
        while(i<k)
        {
            cout<<r;
            i++;
            r++;
            p++;
            if(p==n){break;}
        }
        k+=2;
        a=0;
        while(a<s)
        { r--;
            cout<<r;
            a++;
        }
        s++;
        j++;
        cout<<endl;
     }
    }
};
