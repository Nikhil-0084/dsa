class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n+1,0);
        for(int i=0;i<n;i++){
            ans[nums[i]]++;
        }
        int repeating=-1;
        for(int i=1;i<=n;i++){
            if(ans[i]>1) repeating=i;
        }
        return repeating;
    }
};