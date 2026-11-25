import java.util.*;

class Patient {
    int id;
    String name;
    int priority;
    int arrival;

    Patient(int id, String name, int priority, int arrival) {
        this.id = id;
        this.name = name;
        this.priority = priority;
        this.arrival = arrival;
    }
}

public class Main {
    public static void main(String[] args) {

        PriorityQueue<Patient> pq = new PriorityQueue<>(
            (a, b) -> {
                if (a.priority != b.priority)
                    return a.priority - b.priority;
                return a.arrival - b.arrival;
            }
        );

        pq.add(new Patient(1, "Patient A", 1, 1));
        pq.add(new Patient(2, "Patient B", 2, 2));
        pq.add(new Patient(3, "Patient C", 1, 3));
        pq.add(new Patient(4, "Patient D", 3, 4));

        System.out.println("Hospital Patient Queue:");

        while (!pq.isEmpty()) {
            Patient p = pq.poll();

            System.out.println(
                p.name + " - Priority " + p.priority
            );
        }
    }
}