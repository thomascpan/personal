/**
 * Created by thomaspan on 10/3/16.
 */
public class Penguin extends Bird {
    public Penguin(String name) {
        super(name);
    }

    @Override
    public void fly() {
        super.fly();
        System.out.println("I'm not very good at that.");
    }
}
