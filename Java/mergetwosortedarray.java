import java.util.*;
public class mergetwosortedarray {
    public static void main(String[] args) {
        Vector<Integer>v1=new Vector<Integer>();
        v1.add(1);
        v1.add(2);
        Vector<Integer>v2=new Vector<Integer>();
        v2.add(3);
        v2.add(4);
        Vector<Integer>v=merge(v1,v2);
        for (int i : v) {
            System.out.println(i);
        }
    }
    private static Vector<Integer> merge(Vector<Integer>v1,Vector<Integer>v2){
        Vector<Integer>v=new Vector<Integer>();
        int i=0,j=0;
        while (i<v1.size()&&j<v2.size()) {
            if (v1.get(i)<v2.get(j)) {
                v.add(v1.get(i));
                i++;
            }
            else{
                v.add(v2.get(j));
                j++;
            }
        }
        while (i<v1.size()) {
            v.add(v1.get(i));
            i++;
        }
        while (j<v2.size()) {
            v.add(v2.get(j));
            j++;
        }
        return v;
    }
}
