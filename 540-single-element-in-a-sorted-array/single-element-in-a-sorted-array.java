class Solution {
    public int singleNonDuplicate(int[] arr) {
        int n = arr.length;
        if(n==1) return arr[0];
        if (arr[0] != arr[1]) return arr[0];
        if (arr[n-1] != arr[n-2]) return arr[n-1];
        int lo = 0; int hi = n-1;
        while( lo<= hi){
            int mid = lo + (hi - lo)/2;
            if (arr[mid] > arr[mid -1] && arr[mid] < arr[mid+1])
            return arr[mid];
            int f = mid; int s = mid;
            if (arr[mid] == arr[mid+1]) f = mid +1;
            else s= mid - 1;
            int leftCount = s- lo;
            int rightCount = hi - f;
            if(leftCount % 2 ==0) lo = f+1;
            else hi = f-1;
        }
        return 1;
    }
}