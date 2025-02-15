class Solution {
    private:
    void parmutation(vector<int>&nums,vector<int>&a,vector<vector<int>>&ans,int fre[]){
        if(a.size()==nums.size()){
            ans.push_back(a);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(fre[i]==0){
                a.push_back(nums[i]);
                fre[i]=1;
                parmutation(nums,a,ans,fre);
                fre[i]=0;
                a.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>a; vector<vector<int>>ans;
        int fre[nums.size()];
        for(int i=0; i<nums.size(); i++)fre[i]=0;
        parmutation(nums,a,ans,fre);
        return ans;
    }
};