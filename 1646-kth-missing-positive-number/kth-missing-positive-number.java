class Solution {
    public int findKthPositive(int[] arr, int k) {
        int lo = 0 ; int hi = arr.length -1;
        while (lo <= hi){
            int mid = lo + (hi - lo)/2;
            int correctNum = mid +1;
            int missing = arr[mid] - correctNum;
            if (missing >= k) hi = mid -1;
            else lo = mid + 1;
        }
        return lo +k;
    }
}