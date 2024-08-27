 vector<int>preStart(vector<int> &arr){
        stack<int>st;
        int n = arr.size();
        vector<int>ans(n,0);
        for(int i = 0;i<arr.size();i++){
            while(!st.empty() &&st.top()>=arr[i]){
                st.pop();
            }
            if(!st.empty() && st.top()<arr[i]){
                ans[i]=st.top();
               
            }
            st.push(arr[i]);
        }
        return ans;
    }
    
    vector<int>preEnd(vector<int> &arr){
        stack<int>st;
        int n = arr.size();
        vector<int>ans(n,0);
        for(int i = n-1;i>=0;i--){
           while(!st.empty() &&st.top()>=arr[i]){
                st.pop();
            }
            if(!st.empty() && st.top()<arr[i]){
                ans[i]=st.top();
               
            }
            st.push(arr[i]);
        
        }
        return ans;
    }
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix= preStart(arr);
        suffix = preEnd(arr);
        int diff = INT_MIN;
        for(int i = 0;i<n;i++){
            diff = max(diff,abs(prefix[i]-suffix[i]));
        }
        return diff;
    }
