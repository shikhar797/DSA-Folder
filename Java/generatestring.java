public class generatestring {
    static int[] arr;
    public static void main(String[] args) {
        int n=3;
        int j=4;
        arr=new int[n];
        GenerateString(n,j);
    }
    private static void GenerateString(int n,int j){
        if(n<1){
            printfun(arr);
        }
        else{
            for(int i=0;i<j;i++){
                arr[n-1]=i;
                GenerateString(n-1, j);
            }
        }

    }
    private static void printfun(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] +" ");
        }
        System.out.println("");
    }
}
