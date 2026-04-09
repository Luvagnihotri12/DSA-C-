class Solution {
    public void rotate(int[][] arr) {
        for (int i =1; i < arr.length; i++ ){
            for (int j=0 ; j< i; j++){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
        
        for (int i =0; i< arr.length; i++){
            int lowCol = 0; int hiCol = arr.length -1;
            while (lowCol < hiCol){
                int temp = arr[i][lowCol];
                arr[i][lowCol] =  arr[i][hiCol];
                 arr[i][hiCol] = temp;
                 lowCol ++;
                 hiCol --;
            }
        }
        
    }
}