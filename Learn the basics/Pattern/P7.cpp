class Solution {
public:
    void pattern7(int n)
     {
      int j=0;
      int k=1;
      int g=n;
      while(j<n)
      {
        int i=0;
      while(i<g-1)
      {
       cout<<" ";
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
    }
};
