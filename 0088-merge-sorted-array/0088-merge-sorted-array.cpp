class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;
        vector<int> res(m+n);
        int k=n+m;
        int l=0;
        while(i<m and j<n){
            if(nums1[i]<=nums2[j]){
                res[l]=nums1[i];
                l++;
                i++;
            }else {
                res[l]=nums2[j];
                l++;
                j++;
            }
        }
        while(j<n){
            res[l]=nums2[j];
            l++;
            j++;
        }
        while(i<m){
            res[l]=nums1[i];
            l++;
            i++;
        }
    for(int i=0;i<m+n;i++){
        nums1[i]=res[i];
    }
    }
};