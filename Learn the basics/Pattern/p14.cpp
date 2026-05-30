/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



A

AB

ABC

ABCD

ABCDE*/
class Solution {
public:
    void pattern14(int n) 
    {
   int j=1;
  
   while(j<=n)
   {
    int i=1;
     char g='A';
    while(i<=j)
    {
        cout<<g;
        g++;
        i++;
    }
    
    j++;
    cout<<endl;
   }
    }
};
