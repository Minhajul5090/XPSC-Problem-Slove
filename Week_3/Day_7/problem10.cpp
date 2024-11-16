//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	   int sz=pat.size();
       int count=0;
       vector<int>v(26,0),v2(26,0);
       for(int i=0; i<sz; i++){
        v2[(txt[i]-'a')]++;
        v[(pat[i]-'a')]++;
       }
       if(v==v2)count++;
       for(int i=sz; i<txt.size(); i++){
            v2[(txt[i-sz]-'a')]--;
            v2[(txt[i]-'a')]++;
            if(v==v2)count++;
       }
       return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends