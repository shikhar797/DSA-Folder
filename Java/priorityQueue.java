import java.util.*;
public class priorityQueue {
    public static void main(String[] args) {
        Queue<Integer>pq=new PriorityQueue<>(Collections.reverseOrder());
        pq.add(1);
        pq.add(2);
        pq.add(3);
        pq.add(4);
        pq.add(2);
        pq.add(3);
        while (!pq.isEmpty()) {
            System.out.println(pq.peek());
            pq.remove();
        }
    }
}
