public class recursion {
    public static void main(String[] args) {
        System.out.println(power(2,8));
    }
    private static int power(int num,int times){
        if (times<1) {
            return 1;
        }
        return num*power(num, times-1);
    }
}
