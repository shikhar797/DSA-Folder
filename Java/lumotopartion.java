public class lumotopartion {
    public static void main(String[] args) {
        int [] arr=new int[]{1,2,3,32421,3,7,27};
        int low=0,high=arr.length -1;
        //int l=LumotoPartion(arr,low,high);
        LumotoPartion(arr,low,high);
        for (int i : arr) {
            System.out.print(i+" ");
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
