class A {
    void show(Object x) {
        System.out.println("A-Object");
    }
}

class B extends A {

    @Override
    void show(Object x) {
        System.out.println("B-Object");
    }

    void show(String x) {
        System.out.println("B-String");
    }
}

public class Problem4 {
    public static void main(String[] args) {

        A a = new B();

        String s = "Hello";
        Object o = s;

        a.show(s);
        a.show(o);
        a.show(null);
    }
}