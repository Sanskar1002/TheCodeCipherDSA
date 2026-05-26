class Solution {
private:
    bool isOnTime(vector<int>&dist,double hour,int speed){
        double totalTime = 0;
        int n = dist.size();
        for(int i = 0;i<n-1;i++){
            totalTime+= ceil((double)dist[i]/speed);
        }
        totalTime+= (double)dist[n-1]/speed;
        return totalTime <=hour;
    }
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n = dist.size();
        if(hour<=n-1){
            return -1;
        }
        int lo = 1;
        int hi = 1e7;
        int ans = -1;;

        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(isOnTime(dist,hour,mid)){
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