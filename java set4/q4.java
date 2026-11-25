interface Printable {
    void print();
}

interface Scannable {
    void scan();
}

class MultiFunctionPrinter implements Printable, Scannable {

    public void print() {
        System.out.println("Printing Document");
    }

    public void scan() {
        System.out.println("Scanning Document");
    }
}

class BasicPrinter implements Printable {

    public void print() {
        System.out.println("Basic Printer Printing");
    }
}

public class problem4 {
    public static void main(String[] args) {

        MultiFunctionPrinter m = new MultiFunctionPrinter();

        m.print();
        m.scan();

        BasicPrinter b = new BasicPrinter();
        b.print();
    }
}