class Solution {
public:
    void pattern9(int n)
    { int j=0;
     int k=1;
     int g=n-1;
    while(j<n)
    {
        int i=0;
        while(i<g)
        { cout<<" ";
            i++;
        }
        g--;
        i=0;
        while(i<k)
        {
         cout<<"*";
         i++;
        }
        k=k+2;
        cout<<endl;
        j++;
    }
      j=0;
      k=n*2-1;
      g=0;
    while(j<n)
    {  
      int i=0;
      while(i<g)
      { cout<<" ";
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
