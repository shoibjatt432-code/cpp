
import java.util.HashSet;
import java.util.Objects;

class Student {
    int regNo;
    String name;

    Student(int regNo, String name) {
        this.regNo = regNo;
        this.name = name;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;

        if (!(obj instanceof Student))
            return false;

        Student s = (Student) obj;
        return regNo == s.regNo;
    }

    @Override
    public int hashCode() {
        return Objects.hash(regNo);
    }

    void display() {
        System.out.println(regNo + " - " + name);
    }
}

public class problem6{
    public static void main(String[] args) {
        HashSet<Student> students = new HashSet<>();

        Student s1 = new Student(101, "Aamir");
        Student s2 = new Student(101, "Aamir Khan");
        Student s3 = new Student(102, "Sara");

        students.add(s1);
        students.add(s2);
        students.add(s3);

        System.out.println("Registered students:");

        for (Student s : students) {
            s.display();
        }

        if (students.contains(new Student(101, "Any Name"))) {
            System.out.println("Student 101 is registered");
        } else {
            System.out.println("Student not registered");
        }
    }
}
