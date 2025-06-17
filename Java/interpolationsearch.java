public class interpolationsearch {
    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6,7,8};
        int key=4;
        int index=InterPolationSearch(arr,key);
        if (index==-1) {
            System.out.println("element not found");
        }
        else{
            System.out.println("element found at index:"+index);
        }
    }
    private static int InterPolationSearch(int[] arr,int key){
        int low=0;
        int high=arr.length-1;
        while (key>=arr[low]&&key<=arr[high]&&low<=high) {
            int probe=low+(high-low)*(key-arr[low])/(arr[high]-arr[low]);  //formula for probe

            if (arr[probe]==key) {
                return probe;
            }
            else if(arr[probe]>key){
                high=probe-1;
            }
            else{
                low=probe+1;
            }
        }
        return -1;
    }
}
