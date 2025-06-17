import java.util.Stack;
public class stack {
    public static void main(String[] args) {
        Stack<Integer>stack=new Stack<Integer>();
        stack.push(1);
        stack.push(4);
        stack.push(0);
        stack.push(4);
        stack.push(8);
        stack.push(4);
        stack.push(3);
        stack.pop();
        System.out.println(stack.search(1));
        // System.out.println(stack);
    }
}