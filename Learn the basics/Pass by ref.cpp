/*Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.*/class Solution{
public:
    void reverse(vector<int>& arr){
        int i,j,g,n;
        n=arr.size();
        i=0;
        j=n-1;
        
         while (j>i)
         {
            g=arr[i];
            arr[i]=arr[j];
            arr[j]=g;
            j--;
            i++;
         }
         
        
   
    }
};
