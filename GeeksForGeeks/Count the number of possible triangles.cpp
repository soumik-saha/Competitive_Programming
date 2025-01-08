//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        int n = arr.size();
        int count = 0;
        sort(arr.begin(), arr.end());
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                int k = j+1;
                while(k<n) {
                    if(arr[i]+arr[j]>arr[k]) {
                        count++;
                    }
                    else {
                        break;
                    }
                    k++;
                }
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends
