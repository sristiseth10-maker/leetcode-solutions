class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0;
        int high=k-1;
        int sum=0;
    for(int i=low;i<=high;i++){
            sum=sum+nums[i]; }
            int res=sum;
    while(high<n-1){
            low++;
            high++;
            sum=sum-nums[low-1];
            sum=sum+nums[high];
            res=max(res,sum);
            }
        return (double)res/k;
    }
};
