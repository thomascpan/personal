/**
 * Created by thomaspan on 9/23/16.
 */
public class Main {
    public static void main(String[] args) {
        int myIntValue = 5/3;
        float myFloatValue = 5f/3f;
        double myDoubleValue = 5d/3d;

        System.out.println("myIntValue " + myIntValue);
        System.out.println("myIntValue " + myFloatValue);
        System.out.println("myIntValue " + myDoubleValue);

        double pounds = 200d;
        double kilograms = pounds * 0.45359237d;

        System.out.println(kilograms);
    }
}
