/**
 * Created by thomaspan on 10/3/16.
 */
public class Main {
    public static void main(String[] args) {
        Dog doggy = new Dog("Fido");

        doggy.eat();
        doggy.breathe();

        Parrot birdy = new Parrot("Tweety");

        birdy.eat();
        birdy.breathe();
        birdy.fly();

        Penguin gunther = new Penguin("Gunther");

        gunther.eat();
        gunther.breathe();
        gunther.fly();
    }
}
