class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n=nums.size() ;
       unordered_map<int,int>frequency;
       for( int num:nums){
        frequency[num]++;
       }
       vector<int>result;
       for(auto item: frequency){
           int number= item.first;
           int count=item.second;
           if(count>n/3){
            result.push_back(number);
           }
       }
       return result;
    }
};