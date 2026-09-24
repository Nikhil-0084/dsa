class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n+1,0);
        for(int i=0;i<n;i++){
            ans[nums[i]]++;
        }
        int repeating=-1;
        int missing=-1;
        for(int i=1;i<=n;i++){
            if(ans[i]==2) repeating=i;
            if(ans[i]==0) missing=i;
        }
        return {repeating,missing};
    }
};