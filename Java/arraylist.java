import java.util.*;
public class arraylist {
    public static void main(String[] args) {
        LinkedList<Integer>l=new LinkedList<Integer>();
        ArrayList<Integer>a=new ArrayList<Integer>();
        
        long startTime;
        long endTime;
        long duration;

        for(int i=0;i<1000000;i++){
            l.add(i);
            a.add(i);
        }

        //linked list 
        //start time
        startTime=System.nanoTime();

        //doing something 
        //l.get(342321);    faster in array list
        l.remove(55550);

        //finish time
        endTime=System.nanoTime();

        //duration
        duration=endTime-startTime;
        System.out.println("Performance time of linked list:"+duration+"ns");

        //array list 
        //start time
        startTime=System.nanoTime();

        //doing something 
        //a.get(433243);       faster in array list
        a.remove(55550);

        //finish time
        endTime=System.nanoTime();

        //duration
        duration=endTime-startTime;
        System.out.println("Performance time of array list:"+duration+"ns");

        
    }
}
