/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



A

BB

CCC

DDDD

EEEEE
*/
class Solution {
public:
    void pattern16(int n)
    { int j=1;
    char g='A';
    while(j<=n)
    { 
        int i=1;
        while(i<=j)
        {
            cout<<g;
            i++;
        }
        g++;
        j++;
        cout<<endl;
    }

    }
};
