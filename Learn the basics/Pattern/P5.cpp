class Solution {
public:
    void pattern5(int n)
    {
     int j=n;
     while(j<=n)
     {
        int i=1;
        while(i<=j)
        {
            cout<<"*";
            i++;
        }
        cout<<endl;
        j--;
        if(j==0) break;
     }
    }
};
