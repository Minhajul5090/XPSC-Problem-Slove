class Solution {
    public:
    void abc(vector<int>& candidates, int target, int idx, vector<int>&a, int total, vector<vector<int>>&ans) {
        if (total == target) {
            ans.push_back(a);
            return;
        }

        if (total > target || idx >= candidates.size()) {
            return;
        }

        a.push_back(candidates[idx]);
        abc(candidates, target, idx, a, total + candidates[idx], ans);
        a.pop_back();
       abc(candidates, target, idx + 1, a, total, ans);
    }    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>a;
        abc(candidates,target,0,a,0,ans);
        return ans;
        
    }
};