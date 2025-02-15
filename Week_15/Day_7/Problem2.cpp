class Solution {
    public:
    bool isPalindrom(string s,int l, int r){
        string a,b;
        for(int i=l; i<=r; i++)a.push_back(s[i]);
        b=a;
        reverse(b.begin(),b.end());
        return a==b;
    }
    void check(int in,vector<vector<string>>&ans,vector<string>&a,string &s,int n){
        if(in==n){
            ans.push_back(a);
            return;
        }
        for(int i=in; i<n; i++){
            if(isPalindrom(s,in,i)){
                a.push_back(s.substr(in,i-in+1));
                check(i+1,ans,a,s,n);
                a.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>a;
        int n=s.size();
        check(0,ans,a,s,n);
        return ans;
    }
};