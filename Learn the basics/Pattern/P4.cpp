class Solution {
public:
    void pattern4(int n) 
    {
     int j=1;
     while(j<=n)
     {
        int k=1;
      while(k<=j)
      {
        cout<<j;
        k++;
      }
      cout<<endl;
      j++;
     }
    }
};
