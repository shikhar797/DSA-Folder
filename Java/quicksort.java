public class quicksort {
    public static void main(String[] args) {
        int[] arr=new int[]{8,4,7,9,3,10,5};
        int low=0,high=arr.length-1;
        QuickSort(arr,low,high);
        for (int i : arr) {
            System.out.print(i+" ");
        }
    }
    private static void QuickSort(int[] arr,int low,int high){
        if (low<high) {
            int p=LumotoPartion(arr, low, high);
            QuickSort(arr, low, p-1);
            QuickSort(arr, p+1, high);
        }                                                                                    
    }
    private static int LumotoPartion(int[] arr,int low,int high){
        int piviot=high;
        int i=low;
        for (int j = low; j < high; j++) {
            if (arr[j]<arr[piviot]) {
                int a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
                i++;
            }
        }
        int a=arr[i];
        arr[i]=arr[piviot];
        arr[piviot]=a;
        return i;
    }
}