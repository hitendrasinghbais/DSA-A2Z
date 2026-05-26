*/ Given two integers low and high, return the sum of all integers from low to high inclusive.*/

class Solution {
public:
    int forLoop(int low, int high) {
        // Your code goes here
        int total=0;
        for(int i=low;i<=high;i++)
        {
            total=total+i;
        }
        return total;
    }
};
