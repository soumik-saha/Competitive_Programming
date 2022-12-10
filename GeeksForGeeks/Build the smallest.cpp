

string buildLowestNumber(string num, int k)
{
    //code here.
    int i = 0;
    stack<char> st;
    int n = num.length();
    while(i<n){
        if(st.empty()){
            if(num[i]!='0') st.push(num[i]);
        }else{
            if(k){
                if(num[i]<st.top()){
                   while(!st.empty() && st.top()>num[i] && k){
                       st.pop();
                       k--;
                   } 
                   if(num[i] != '0' || (k==0 && !st.empty())){
                       st.push(num[i]);
                   }
                }else{
                    st.push(num[i]);
                }
            }else{
                st.push(num[i]);
            }
        }
        i++;
    }
    string ans = "";
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    while(k--){
        if(ans.length()==0) break;
        ans.pop_back();
    }
    if(ans.length()==0) ans = "0";
    return ans;
}
