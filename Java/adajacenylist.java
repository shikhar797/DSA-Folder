import java.util.ArrayList;
import java.util.LinkedList;

public class adajacenylist {
    public static void main(String[] args) {
        Graph graph=new Graph();
        graph.addNode(new Node('A'));
        graph.addNode(new Node('B'));
        graph.addNode(new Node('C'));
        graph.addNode(new Node('D'));
        graph.addNode(new Node('E'));

        graph.addEdge(0, 1);
        graph.addEdge(1, 2);
        graph.addEdge(1, 4);
        graph.addEdge(2, 3);
        graph.addEdge(2, 4);
        graph.addEdge(4, 0);
        graph.addEdge(4, 2);
        graph.print();
    }
}

class  Graph{
    ArrayList<LinkedList<Node>>alist;

    Graph(){
        alist=new ArrayList<>();
    }
    public void addNode(Node node){
        LinkedList<Node>currentList=new LinkedList<>();
        currentList.add(node);
        alist.add(currentList);
    }
    public void addEdge(int src,int des){
        LinkedList<Node>currentList=alist.get(src);
        Node desNode=alist.get(des).get(0);
        currentList.add(desNode);
    }
    public boolean checkEdge(int src,int des){
        LinkedList<Node>currentList=alist.get(src);
        Node desNode=alist.get(des).get(0);

        for (Node node : currentList) {
            if(node ==desNode){
                return true;
            }
        }
        return false;
    }
    public void print(){
         for (LinkedList<Node> linkedList : alist) {
            for (Node node : linkedList) {
                System.out.print(node.data+"->");
            }
            System.out.println("");
         }
    }
    
}
class Node{
    char data;
    Node(char data){
        this.data=data;
    }
}