//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        queue<int>q;
        vector<int>v;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<0)q.push(i);
        }
       int x=k-1;
       for(int i=0; i<=arr.size()-k; i++ ){
       if(!q.empty()&& q.front()>=i && q.front()<=(i+x)){
        v.push_back(arr[q.front()]);
        if(q.front()==i)q.pop();
       }
       else v.push_back(0);
       }
       return v;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends