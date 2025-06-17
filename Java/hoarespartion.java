public class hoarespartion {
    public static void main(String[] args) {
        int [] arr=new int[]{15,10,9,12};
        int low=0,high=arr.length -1;
        // int l=HoaresPartion(arr,low,high);
        HoaresPartion(arr,low,high);
        for (int i : arr) {
            System.out.print(i+" ");
        }
    }
    private static int HoaresPartion(int[] arr,int low,int high){
        int i=low,j=high;
        int piviot=arr[low];
        boolean flag1=false,flag2=false;
        while (true) {
            if (arr[i]<piviot&&!flag1) {
                i++;
            }
            else flag1=true;
            if (arr[j]>piviot&&!flag2) {
                j--;
            }
            else flag2=true;
            if (i>=j) {
                return j;
            }
            if (flag1&&flag2) {
                int a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
                flag1=false;
                flag2=false;
            }
        }
        
    }
}
