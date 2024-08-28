//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        unordered_map<int, int> mp;
        for(auto ele:arr) {
            mp[ele]++;
        }
        vector<pair<int, int>> v;
        for(auto it:mp) {
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end(), [&](auto &a, auto &b) {
            if(a.first!=b.first) {
                return a.first>b.first;
            }
            else {
                return a.second<b.second;
            }
        });
        
        vector<int> ans;
        for(auto x:v) {
            int freq = x.first;
            while(freq--)
                ans.push_back(x.second);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends
