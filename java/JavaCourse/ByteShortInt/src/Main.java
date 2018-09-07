/**
 * Created by thomaspan on 9/22/16.
 */
public class Main {
    public static void main(String[] args) {
        byte myByte = 127;
        short myShort = 1000;
        int myInt = 1000000;
        long myLong = (long) (5000 + 10)*(myByte + myShort + myInt);

        System.out.println(myLong);
    }
}
