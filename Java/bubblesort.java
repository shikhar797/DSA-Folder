public class bubblesort {
    public static void main(String[] args) {
        int[] arr={32,43,12,21,2431,1,3,43,3};

        BubbleSort(arr);

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
        
    }
    private static void BubbleSort(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            for (int j = 1; j < arr.length; j++) {
                if (arr[j]<arr[j-1]) {
                    int a=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=a;
                }
            }
        }
    }
}
