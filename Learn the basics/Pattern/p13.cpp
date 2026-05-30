/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



1 

2 3 

4 5 6 

7 8 9 10 

11 12 13 14 15*/
class Solution {
public:
    void pattern13(int n)
    {
 int j=1;
 int k=1;
 while(j<=n)
 {
    int i=1;
    while(i<=j)
    {
        cout<<k;
        
        
         if(i!=j) {cout<<" ";}
        k++;
        i++;
        }
    j++;
    cout<<endl;
 }
    }
};
