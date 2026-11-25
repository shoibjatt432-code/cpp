
class Student {
    private int rollNo;
    private String name;
    private int m1, m2, m3;

    Student(int rollNo, String name, int m1, int m2, int m3) {
        this.rollNo = rollNo;
        this.name = name;
        this.m1 = m1;
        this.m2 = m2;
        this.m3 = m3;
    }

    public int getRollNo() {
        return rollNo;
    }

    public String getName() {
        return name;
    }

    int total() {
        return m1 + m2 + m3;
    }

    double percentage() {
        return total() / 3.0;
    }

    String grade() {
        double p = percentage();

        if (p >= 90)
            return "A";
        else if (p >= 75)
            return "B";
        else if (p >= 60)
            return "C";
        else
            return "D";
    }

    void display() {
        System.out.println("Roll Number: " + getRollNo());
        System.out.println("Name: " + getName());
        System.out.println("Total Marks: " + total() + " / 300");
        System.out.println("Percentage: " + percentage() + "%");
        System.out.println("Grade: " + grade());
    }
}

public class problem1 {
    public static void main(String[] args) {
        Student s = new Student(101, "Aamir", 85, 90, 80);
        s.display();
    }
}
