//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    int isValid(string str) {
        // code here
        int x = 1;
        for(int i=0; i<str.size(); ) {
            string val = "";
            while(i<str.size() && str[i]!='.') {
                val.push_back(str[i++]);
            } 
            while(i<stra.size() && str[i]=='.') {
                i++;
            }
            int ipval = stoi(val);
            if(ipval>=0 && ipval<=255) {
                continue;
            }
            return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends
