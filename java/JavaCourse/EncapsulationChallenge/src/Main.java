/**
 * Created by thomaspan on 9/26/16.
 */
public class Main {
    public static void main(String[] args) {
        Printer printer1 = new Printer(true);
        Printer printer2 = new Printer(true);

        for(int i = 0; i < 10; i++) {
            printer1.print();
        }

        System.out.println(printer1.getTonerLevel());
        System.out.println(printer1.isDuplexPrinter());
        System.out.println(printer1.getNumOfPages());

        for(int i = 0; i < 2; i++) {
            printer1.print();
        }

        System.out.println(printer2.getTonerLevel());
        System.out.println(printer2.isDuplexPrinter());
        System.out.println(printer2.getNumOfPages());
    }
}
