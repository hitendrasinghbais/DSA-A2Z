class Solution {
public:
    void pattern8(int n) 
    {
      int j=0;
      int k=n*2-1;
      int g=0;
      while(j<n)
      {
        int i=0;
        while(i<g)
        {
         cout<<" ";
         i++;
        }
        g++;
        i=0;
        while(i<k)
        {
          cout<<"*";
         i++;
        }
        k-=2;
        cout<<endl;
        j++;
      }
    }
};
