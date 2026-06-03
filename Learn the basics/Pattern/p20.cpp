/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
class Solution {
public:
    void pattern20(int n) 
    {
int j=0;
int r=n;
int s;
int ss=(n*2)-2;
int e=0;
while(j<n)
{ int i=0;
while(i<=j)
{
    cout<<"*";
    i++;
}
s=0;
while(s<ss)
{
    cout<<" ";
    s++;
}
ss-=2;
e=0;
while(i>e)
{
cout<<"*";
e++;
}
    j++;
    cout<<endl;
}

j=0;
ss=2;
e=0;
while(j<n-1)
{  int i=0;
while(i<r-1)
{
    cout<<"*";
    i++;
}
r--;
s=0;
while(s<ss)
{
cout<<" ";
s++;
}
ss+=2;
while(i>e)
{
cout<<"*";
i--;
}
    j++;
    cout<<endl;
}



    }
};
