public class checksorted {
    public static void main(String[] args) {
        int[] arr=new int[]{1,2,3,4,5,6};
        int n=arr.length;
        System.out.println(CheckSorted(arr,n));
    }
    private static boolean CheckSorted(int[] arr,int n){
        if (n==1 || n==0) {
            return true;
        }
        return arr[n-1]>=arr[n-2] &&CheckSorted(arr, n-1);
    }
}
