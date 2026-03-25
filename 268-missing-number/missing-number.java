class Solution {
    public int missingNumber(int[] nums) {
        long n = nums.length;
        long sum = n*(n+1)/2;
        long arraySum = 0;
        for (int ele: nums){
            arraySum += ele;
        }
        return (int)(sum - arraySum);
    }
}