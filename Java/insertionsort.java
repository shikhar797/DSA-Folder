public class insertionsort {
    public static void main(String[] args) {
        int[] arr={1213,432,21,213,1,1,1,1,1,2,3423,45,344,53,44,56,5};
        InsertionSort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
    }
    public static void InsertionSort(int[] arr){
        for (int i = 1; i < arr.length; i++) {
            for (int j = i; j >0; j--) {
                if (arr[j]<arr[j-1]) {
                    int a=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=a;
                }
                else break;
            }
        }
    }
}
