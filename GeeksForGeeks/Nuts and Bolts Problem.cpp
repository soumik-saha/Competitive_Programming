//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        char sorted[9] = {'!','#','$','%','&','*','?','@','^'};
        unordered_map<char, int> mp;
        
        for(int i=0; i<n; i++) {
            mp[nuts[i]]++;
        }
        
        int idx = 0;
        for(int i=0; i<9; i++) {
            if(mp.find(sorted[i])!=mp.end()) {
                bolts[idx++] = sorted[i];
            }
        }
        
        for(int i=0; i<n; i++) {
            nuts[i] = bolts[i];
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(n, nuts, bolts);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
