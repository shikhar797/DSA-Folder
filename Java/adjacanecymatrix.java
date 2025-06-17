import java.util.ArrayList;

public class adjacanecymatrix {
    public static void main(String[] args) {
        Graph graph=new Graph(5);
        graph.addNode(new Node('A'));
        graph.addNode(new Node('B'));
        graph.addNode(new Node('C'));
        graph.addNode(new Node('D'));
        graph.addNode(new Node('E'));
        graph.addEdge(0, 1);
        graph.addEdge(1, 2);
        graph.addEdge(2, 3);
        graph.addEdge(2, 4);
        graph.addEdge(4, 0);
        graph.print();
        graph.DepthFirstSearch(1);
        //System.out.println(graph.checkEdge(0, 1));
    }
}
class  Graph{
    ArrayList<Node>nodes;
    int[][]matrix;

    Graph(int size){
        nodes=new ArrayList<>();
        matrix=new int[size][size];

    }
    public void DepthFirstSearch(int src){
        boolean[] visited=new boolean[matrix.length];
        dfsHelper(src,visited);
    }
    private void dfsHelper(int src ,boolean[] visited){
        if (visited[src]) {
            return;
        }
        else{
            visited[src]=true;
            System.out.println(nodes.get(src).data +"=visited");
        }
        for (int i = 0; i < matrix[src].length; i++) {
            if (matrix[src][i]==1) {
                dfsHelper(i, visited);
            }
        }
        return ;
    }
    public void addNode(Node node){
        nodes.add(node);
    }
    public void addEdge(int src,int dst){
        matrix[src][dst]=1;
    }
    public boolean checkEdge(int src,int dst){
        if (matrix[src][dst]==1) {
            return true;
        }
        else return false;
    }
    public void print(){
        System.err.print("  ");
        for (Node node : nodes) {
            System.out.print(node.data+" ");
        }
        System.err.println(" ");

        for (int i = 0; i < matrix.length; i++) {
            System.out.print(nodes.get(i).data+" ");
            for (int j = 0; j < matrix.length; j++) {
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println(" ");
        }
    }
    
}
class Node{
    char data;
    Node(char data){
        this.data=data;
    }
}

