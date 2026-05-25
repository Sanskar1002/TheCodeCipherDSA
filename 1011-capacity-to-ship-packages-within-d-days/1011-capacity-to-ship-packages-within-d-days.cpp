class Solution {

    private:
        bool isFeasible(int capacity,int days,vector<int>& weights){
            int currentLoad = 0;
            int requiredDays = 1;
            int n = weights.size();
            for(int i = 0;i<n;i++){
                // if(weights[i]>weight){
                //     return false;
                // }
                currentLoad+=weights[i];
                if(currentLoad>capacity){
                    requiredDays++;
                    currentLoad = weights[i];
                }
            }


            return requiredDays<=days;
        }


public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(), weights.end()); ;
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