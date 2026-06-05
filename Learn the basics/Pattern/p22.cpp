/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
*/
class Solution {
public:
    void pattern22(int n) 
    {
    int j=0;
    while(j<2*n-1)
    {
        int i=0;
        while(i<2*n-1)
        {
            int top=j;
            int left=i;
            int right=(2*n-2)-i;
            int bottom=(2*n-2)-j;
            int distance= min(min(top,bottom),min(left,right));
            int value=n-distance;
            cout<<value;
            if(i<2*n-2)
            {
                cout<<" ";
            }
            i++;
        }
        j++;
        cout<<endl;
    }
    }
};
