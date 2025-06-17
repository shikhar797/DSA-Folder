import java.util.Vector;

public class mergefunction {
    public static void main(String[] args) {
        Vector<Integer>v=new Vector<Integer>();
        v.add(1);
        v.add(2);
        v.add(5);
        v.add(7);
        v.add(2);
        v.add(4);
        v.add(6);
        int low=0,mid=3,high=6;
        MergeFunction(v,low,mid,high);
        for (int i : v) {
            System.out.println(i);
        }
    }
    private static void MergeFunction(Vector<Integer>v,int low,int mid,int high){
        int n1=mid-low+1;
        int n2=high-mid;
        Vector<Integer>left=new Vector<Integer>();
        Vector<Integer>right=new Vector<Integer>();
        for (int i = 0; i < n1; i++) left.add(v.get(low+i));
        for (int i = 0; i < n2; i++) right.add(v.get(mid+1+i));   
        int i=0,j=0,k=low;
        while (i<n1&&j<n2) {
            if (left.get(i)<right.get(j)) {
                v.set(k,left.get(i));
                i++;
                k++;
            }
            else{
                v.set(k,right.get(j));
                j++;
                k++;
            }
        }
        while (i<n1) {
            v.set(k,left.get(i));
            i++;
            k++;
        }
        while (j<n2) {
            v.set(k,right.get(j));
            j++;
            k++;
        }
        
    }
}
