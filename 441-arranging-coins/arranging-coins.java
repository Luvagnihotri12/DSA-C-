class Solution {
    public int sqrt(long x) {
        long lo = 1; long hi = x;
        if (x == 0) return 0;
        
        while (lo <= hi){
            long mid = lo + (hi - lo)/2;
            if(mid == x/mid) return (int) mid;
            else if ( mid > x/mid) hi = mid - 1;
            else lo = mid +1;
        }
        return (int)hi;
    }
    public int arrangeCoins(long x) {
        long m = (long) x;
        return (sqrt(8*m + 1) - 1)/2;
    }
}