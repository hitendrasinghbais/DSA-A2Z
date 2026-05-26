class Solution {
public:
    void pattern10(int n) 
    {
     int j=0;
     int g=1;
     while(j<n)
     {
        int i=0;
        while(i<g)
        { cout<<"*";
            i++;
        }
        g++;
        cout<<endl;
        j++;
     }
     j=0;
     int k=n-1;
     while(j<n-1)
     {
         int i=0;
         while(i<k)
         {  cout<<"*";
            i++;
         }
         k--;
         cout<<endl;
         j++;
     }
    }
};
