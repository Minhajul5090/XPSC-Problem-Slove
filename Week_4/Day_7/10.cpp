//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
      map<char,int>mp;
      int ans=0,l=0;
      for(int i=0; i<s.size();i++){
          mp[s[i]]++;
          while(mp.size()>k){
              mp[s[l]]--;
              if(mp[s[l]]==0)mp.erase(s[l]);
              l++;
          }
         if(mp.size()==k) ans=max(ans,i-l+1);
      }
      if(ans==0)return -1;
      return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends