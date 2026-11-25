import java.util.ArrayList;

class Stack<T> {

    ArrayList<T> list = new ArrayList<>();

    void push(T value) {
        list.add(value);
    }

    T pop() {
        if (isEmpty()) {
            System.out.println("Stack is empty");
            return null;
        }

        return list.remove(list.size() - 1);
    }

    T peek() {
        if (isEmpty()) {
            System.out.println("Stack is empty");
            return null;
        }

        return list.get(list.size() - 1);
    }

    boolean isEmpty() {
        return list.isEmpty();
    }
}

public class GenericStack {
    public static void main(String[] args) {

        Stack<Integer> s1 = new Stack<>();

        s1.push(10);
        s1.push(20);
        s1.push(30);

        System.out.println("Integer Stack: " + s1.peek());
        System.out.println("Popped: " + s1.pop());

        Stack<String> s2 = new Stack<>();

        s2.push("Apple");
        s2.push("Mango");

        System.out.println("String Stack: " + s2.peek());
        System.out.println("Popped: " + s2.pop());

        s1.pop();
        s1.pop();
        s1.pop();
    }
}