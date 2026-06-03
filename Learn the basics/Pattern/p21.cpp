/*

Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



*****
*   *
*   *
*   *
*****
*/

class Solution {
public:
    void pattern21(int n) 
    { int j=0;
    int r=n;
    int g=0;
    int y=1;
    int e=0;
    int i=0;
        if(g<y){
        while(i<r)
        {
         cout<<"*";
         i++;
        }
        g++;
        cout<<endl;
        }
    while(j<n-2)
    { 
         int z=0;
         while(z<y)
         {
            cout<<"*";
            z++;
         } 
         int v=0;
         while(v<r-2)
         {
            cout<<" ";
            v++;
         }
         while(z>e)
         {
            cout<<"*";
            z--;
         }
         j++;
         cout<<endl;
    }
     i=0;
        while(i<r)
         {
            cout<<"*";
            i++;
         }

    }
};
