public class towerofhanoi {
    public static void main(String[] args) {
        int n=3;
        int[] step = {1};
        TowerOfHanoi(n,"A","B","C",step);
    }
    private static void TowerOfHanoi(int n,String source,String target,String Auxilary,int[] step){
        if (n==1) {
            System.out.println("Step"+step[0]+":"+"Disk moved from "+ source + "to" + target);
            step[0]++;
            return;
        }
        TowerOfHanoi(n-1, source, Auxilary, target,step);
        System.out.println("Step"+step[0]+":"+"Disk moved from "+ source + "to" + target);
        step[0]++;

        TowerOfHanoi(n-1, Auxilary, target, source,step);
    }
}
