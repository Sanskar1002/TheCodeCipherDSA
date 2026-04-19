class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        int n = arr.size();
        threshold = threshold*k;
        //1. Build
        int sum = 0;
        for(int i=0;i<k;i++){
            sum = sum+arr[i];
        }
        if(sum>=threshold) count++;
        for(int i =k;i<n;i++){
            sum = sum+arr[i]-arr[i-k];
            if(sum>=threshold) count++;
        }
        return count;
    }
};