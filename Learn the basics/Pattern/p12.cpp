/*
1        1
12      21
123    321
1234  4321
1234554321
*/
class Solution {
public:
    void pattern12(int n) 
    {
     int j=1;
     int k;
     int r=n;
     while(j<=n)
     {  int i=1;
     int p=(r*2)-2;
     while(i<=j) 
     {
      cout<<i;
      i++;
     }
     while(p>0)
     {
        cout<<" ";
        p--;
     }
     k=i-1;
     while(k<=j)
     { 
        if(k==0) break;
        cout<<k;
        k--;
     }
        r-=1;
        j++;
        cout<<endl;
     }

    }
};
