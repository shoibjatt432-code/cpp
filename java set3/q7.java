class Animal {

    Animal reproduce() {
        System.out.println("Animal Reproduces");
        return new Animal();
    }

    void sound(String s) {
        System.out.println("Sound: " + s);
    }

    void sound(int n) {
        System.out.println("Number: " + n);
    }
}

class Dog extends Animal {

    @Override
    Dog reproduce() {
        System.out.println("Dog Reproduces");
        return new Dog();
    }
}

public class Problem7 {
    public static void main(String[] args) {

        Animal a = new Dog();
        Animal result1 = a.reproduce();

        Dog d = new Dog();
        Dog result2 = d.reproduce();

        d.sound("Bark");
        d.sound(2);
    }
}