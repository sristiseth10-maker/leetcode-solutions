//leetcode 259-3sum smaller (premium)
//approach:sorting +2pointer
//TC=o(n^2) SC=o(1)
class Solution{
public:
  int threeSumSmaller(vector<int>& nums,int target){
    int n=nums.size();
    int count=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-2;i++){
    int left=i+1;
    int right=n-1;
    while(left<right){
    int sum=nums[i]+nums[left]+nums[right];
    if(sum<target){
        count+=(right-left);
        left++;
    }else{
       right--;
    }
   }
  }
   return count;
  }
};
