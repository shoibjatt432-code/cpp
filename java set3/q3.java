
class Vehicle {
    int calculateRent(int days) {
        return days * 1000;
    }
}

class Car extends Vehicle {
    @Override
    int calculateRent(int days) {
        return super.calculateRent(days) + 500;
    }
}

class LuxuryCar extends Vehicle {
    @Override
    int calculateRent(int days) {
        return super.calculateRent(days) + 2000;
    }
}

public class problem3 {
    public static void main(String[] args) {

        Vehicle[] vehicles = {
            new Vehicle(),
            new Car(),
            new LuxuryCar()
        };

        int days = 3;

        for (Vehicle v : vehicles) {
            System.out.println(
                v.getClass().getSimpleName()
                + " Rent: Rs. "
                + v.calculateRent(days)
            );
        }
    }
}
