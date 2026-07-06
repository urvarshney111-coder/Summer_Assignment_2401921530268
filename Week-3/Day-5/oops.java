import java.util.Random;

abstract class Compartment {
    abstract String notice();
}

class FirstClass extends Compartment {
    String notice() {
        return "First Class";
    }
}

class Ladies extends Compartment {
    String notice() {
        return "Ladies";
    }
}

class General extends Compartment {
    String notice() {
        return "General";
    }
}

class Luggage extends Compartment {
    String notice() {
        return "Luggage";
    }
}

public class TestCompartment {
    public static void main(String[] args) {

        Compartment[] a = new Compartment[10];
        Random r = new Random();

        for (int i = 0; i < 10; i++) {
            int n = r.nextInt(4) + 1;

            if (n == 1)
                a[i] = new FirstClass();
            else if (n == 2)
                a[i] = new Ladies();
            else if (n == 3)
                a[i] = new General();
            else
                a[i] = new Luggage();

            System.out.println(a[i].notice());
        }
    }
}