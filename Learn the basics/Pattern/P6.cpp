class Solution {
public:
    void pattern6(int n) 
    {
     int j=1;
     int k=n;
      while(j<=n)
      {
        int i=1;
        while(i<=k)
        {
            cout<<i;
            i++;
        }
        cout<<endl;
        k--;
        j++;
      }
    }
};
