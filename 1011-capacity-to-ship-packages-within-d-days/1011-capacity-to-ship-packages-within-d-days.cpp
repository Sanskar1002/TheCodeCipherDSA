class Solution {

    private:
        bool isFeasible(int weight,int days,vector<int>& weights){
            int tempw = 0;
            int d = 0;
            int n = weights.size();
            for(int i = 0;i<n;i++){
                if(weights[i]>weight){
                    return false;
                }
                tempw+=weights[i];
                if(tempw>weight){
                    d++;
                    tempw = 0;
                    i--;
                }
            }

            if(tempw<=weight){
                d++;
            }

            return d<=days;
        }


public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lo =1 ;
        int hi = 0;
        
        int n = weights.size();
        for(int i = 0;i<n;i++){
            hi = hi+weights[i];
        }
        int ans = hi;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(isFeasible(mid,days,weights)){
                ans = mid;
                hi = mid-1;
            }else{
                lo = mid+1;
            }
        }

        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna