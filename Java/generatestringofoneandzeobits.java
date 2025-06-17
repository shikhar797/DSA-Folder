public class generatestringofoneandzeobits {
    static int[] arr;
    public static void main(String[] args) {
        int n=3;
        arr =new int[n];
        GenererateString(n);
    }
    private static void GenererateString(int n){
        if (n<1) {
            printfun(arr);
        }
        else{
            arr[n-1]=0;
            GenererateString(n-1);
            arr[n-1]=1;
            GenererateString(n-1);
        }
    }
    private static void printfun(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println("");
    }
}
