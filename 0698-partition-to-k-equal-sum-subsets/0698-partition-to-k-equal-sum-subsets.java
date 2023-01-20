class Solution {
    
        public boolean canPartitionKSubsets(int[] nums, int k) {
        if (k > nums.length) return false;
        int sum = 0;
        for (int num : nums) sum += num;
        if (sum % k != 0) return false;
        boolean[] visited = new boolean[nums.length];
        Arrays.sort(nums);
        return canPlaceInBuckets(nums, 0, nums.length - 1, visited, sum / k, k);
    }

    public boolean canPlaceInBuckets(int[] nums, int currentBucketSize, int st, boolean[] visited, int bucketSize, int bucketsToFill) {
        if (bucketsToFill == 0) return true;
        if (currentBucketSize == bucketSize) {
            boolean canFillRemainingBuckets = canPlaceInBuckets(nums, 0, nums.length - 1, visited, bucketSize, bucketsToFill - 1);
            return canFillRemainingBuckets;
        }
        int newBucketSize = 0;
        boolean canFillTheRest = false;
        for (int i = st; i >= 0; i--) {
            newBucketSize = currentBucketSize + nums[i];
            if (!visited[i] && newBucketSize <= bucketSize) {
                visited[i] = true;
                canFillTheRest = canPlaceInBuckets(nums, newBucketSize, i - 1, visited, bucketSize, bucketsToFill);
                if (canFillTheRest) {
                    return true;
                }
                visited[i] = false;
            }
        }
        return false;
    }
}