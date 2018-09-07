/**
 * Created by thomaspan on 9/26/16.
 */
public class Printer {
    private double tonerLevel = 100.00d;
    private boolean isDuplexPrinter;
    private int numOfPages = 0;

    public Printer(boolean isDuplexPrinter) {
        this.isDuplexPrinter = isDuplexPrinter;
    }

    public void print() {
        System.out.println("Printing...");
        numOfPages++;
        tonerLevel-= 0.5;
    }

    public double getTonerLevel() {
        return tonerLevel;
    }

    public boolean isDuplexPrinter() {
        return isDuplexPrinter;
    }

    public int getNumOfPages() {
        return numOfPages;
    }
}
