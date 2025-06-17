public class binarysearch {
    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6,7,8,9};
        int key=9;
        int index=BinarySearch(arr,key);
        if (index==-1) {
            System.out.println("element not found");
        }
        else{
            System.out.println("element found at index:"+index);
        }
    }
    private static int BinarySearch(int[] arr,int key) {
        int low=0;
        int high=arr.length-1;

        while (low<=high) {
            int mid=low+(high-low)/2;
            if (arr[mid]==key) {
                return mid;
            }
            else if (key>arr[mid]) {
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return -1;
    }
}
