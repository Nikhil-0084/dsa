class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>r;
        for(int x:nums1){
            int next=-1;
            bool found=false;
            for(int i=0;i<nums2.size();i++){
                if(nums2[i]==x){
                    found=true;
                }
                if(found&&nums2[i]>x){
                    next=nums2[i];
                    break;
                }
            }
            r.push_back(next);
        }
        return r;
    }
};