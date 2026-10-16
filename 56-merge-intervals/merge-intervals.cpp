class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>results;
        results.push_back(intervals[0]);
        
        for(int i=1;i<n;i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            if (start <= results.back()[1]) {
            results.back()[1] = max(results.back()[1], end);
        } else {
            results.push_back(intervals[i]);
        }
        }
        return results;
    }
};