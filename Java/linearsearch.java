public class linearsearch {
    public static void main(String[] args) {
        int[] arr={1,2,3,44,32,3,32,34,32};
        Integer key=44;
        int index=LinearSearch(arr,key);
        if (index==-1){
            System.out.println("item not found");
        }
        else{
            System.out.println("element Found at index:"+index);
        }
    }
    private static int LinearSearch(int[] arr,int key){
        for (int i = 0; i < arr.length; i++) {
            if (arr[i]==key) {
                return i;
            }
        }
        return -1;
    }
}
