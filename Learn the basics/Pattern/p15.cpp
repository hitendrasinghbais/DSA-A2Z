/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



ABCDE

ABCD

ABC

AB

A
*/
class Solution {
public:
    void pattern15(int n) 
    {
int j=1;
int r=n;
while(j<=n)
{
    int i=1;
    char g='A';
    while(i<=r)
    {
        cout<<g;
        g++;
        i++;
    }
    r--;
    j++;
    cout<<endl;
}
    }
};
