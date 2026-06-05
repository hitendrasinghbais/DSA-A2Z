/*
You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.



The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.
*/
/*
class Solution {
public:
    int GCD(int n1,int n2) 
    {
int e=1;
int r,m1,m2;
int smallest=min(n1,n2);
while(e<smallest+1)
{
if(n1%e==0) m1=e; 
if(n2%e==0) m2=e;
if(m1==m2) r=min(m1,m2);
    e++;
}
return r;
    }
};
*/
class Solution {
public:
    int GCD(int n1,int n2) 
    {
int e=1;
int r=1;
int smallest=min(n1,n2);
while(e<smallest+1)
{
if(n1%e==0 && n2%e==0) r=e;
    e++;
}
return r;
    }
};
