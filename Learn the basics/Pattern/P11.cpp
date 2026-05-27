/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



1 

0 1 

1 0 1 

0 1 0 1 

1 0 1 0 1*/
class Solution {
public:
    void pattern11(int n) 
    {int j=0;
    int r=2;
    while(j<n)
    {   int i=1;
        int g;
         while(i<r)
         {   if ((i+j)%2==0)
             {
                g=0;
             }
             else g=1;
            cout<<g;
            if (i<r-1)
            {
                cout<<" ";
            }
            i++;
         }
         r++;
        cout<<endl;
        j++;
    }

    }
};
