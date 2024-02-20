//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int wordBreak(string A, vector<string> &B) {
        //code here
        set<string> st;
        vector<int> dp(A.size()+1, -1);
        for(string it:B)
            st.insert(it);
        
        return solve(0, A, st, dp);
    }
    int solve(int i, string A, set<string>& st, vector<int>& dp) {
        if(i==A.size()) return 1;
        if(dp[i]!=-1)   return dp[i];
        string temp = "";
        for(int j=i; j<A.size(); j++) {
            temp += A[j];
            if(st.find(temp)!=st.end()) {
                if(solve(j+1, A, st, dp))
                    return dp[i] = 1;
            }
        }
        return dp[i] = 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends
