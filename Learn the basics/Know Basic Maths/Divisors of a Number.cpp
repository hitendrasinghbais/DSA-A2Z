/*
You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.



A number which completely divides another number is called it's divisor.
*/

class Solution {
public:
    vector<int> divisors(int n) 
    {  vector<int> arr;
    int e=1;
    while(e<n+1)
    {
        if(n%e==0)
        {
        arr.push_back(e);
        }
        e++;
    }
return arr;
}
};
