public class selectionsort {
    public static void main(String[] args) {
        int[] arr={32,324,2,14,1,123,32421,11,54,2};
        SelectionSort(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
    }
    private static void SelectionSort(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            int min=i;
            for (int j = i; j < arr.length; j++) {
                if (arr[min]>arr[j]) {
                    min=j;
                }
            }
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
} 
