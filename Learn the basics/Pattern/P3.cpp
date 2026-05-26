class Solution {
public:
    void pattern3(int n) 
    { int j=1;
    while(j<=n)
    {
        int i=1;
        while(i<=j)
        {
            cout<<i;
            i++;
        }
        cout<<endl;
        j++;
    }

    }
};
