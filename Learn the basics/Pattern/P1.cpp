/* Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



*****

*****

*****

*****

******/class Solution {
public:
    void pattern1(int n) 
    {
    int j=0;
    while(j<n)
    { int i=0;
        while(i<n)
        {
         cout<<"*";
         i++;
        }
    cout<<endl;
    j++;
    }
    }
};
