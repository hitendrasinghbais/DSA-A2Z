*/Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.*/
  class Solution {
    public:
    int whileLoop(int d) {
        // Your code goes here 
        int total=0,n=1; 
        while(n<=50)
        {
            total=total+d;
            d+=10;
            n++;
        }
        return total;
    }
};
