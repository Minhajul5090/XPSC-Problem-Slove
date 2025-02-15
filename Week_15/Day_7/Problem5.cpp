class Solution {
    public:
     void abc(vector<int>& candidates, int target, int in, vector<int>& a, vector<vector<int>>&ans) {
        if (target < 0) {
            return;
        }
    
        if (target == 0) {
            ans.push_back(a);
            return;
        }
    
        for (int i = in; i < candidates.size(); i++) {
            if (i > in && candidates[i] == candidates[i-1]) {
                continue;
            }
            
            if (candidates[i] > target) {
                break;
            }
            
            a.push_back(candidates[i]);
            abc(candidates, target - candidates[i], i + 1, a,ans);
            a.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>a;
        sort(candidates.begin(),candidates.end());
        abc(candidates,target,0,a,ans);
        return ans;
    }
};