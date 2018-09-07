import javax.sound.midi.Soundbank;

/**
 * Created by thomaspan on 9/23/16.
 */
public class Main {
    public static void main(String[] args) {
        doSomething(1);
        doSomething(1d);
        doSomething("1");
        doSomething(1,"1");
    }

    public static void doSomething(int i) {
        System.out.println(i+1);
    }

    public static void doSomething(double d) {
        System.out.println(d);
    }

    public static void doSomething(String s) {
        System.out.println(s+1);
    }

    public static void doSomething(int i, String s) {
        System.out.println(i+s);
    }
}
