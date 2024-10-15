class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        long long n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(long long i=0; i<n; i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;

            for(long long j=i+1; j<n; j++) {
                if(j>i+1 && nums[j]==nums[j-1]) continue;

                long long left = j+1;
                long long right = n-1;

                while(left<right) {
                    long long sum = static_cast<long long>(nums[i])+nums[j]+nums[left]+nums[right];

                    if(sum==target) {
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});

                        while(left<right && nums[left]==nums[left+1]) left++;
                        while(left<right && nums[right]==nums[right-1]) right--;

                        left++; right--;
                    }
                    else if(sum<target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};
