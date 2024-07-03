class Solution {
    public int minDifference(int[] nums) {
        int n = nums.length;
        if (n <= 4)
            return 0;
        Arrays.sort(nums);

        int minDiff = Integer.MAX_VALUE;
        for (int left=0, right=n-4; right<n; left++, right++) {
            minDiff = Math.min(minDiff, nums[right] - nums[left]);
        }
        return minDiff;
    }
}
