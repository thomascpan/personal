import com.example.game.ISaveable;
import com.example.game.Player;

import java.util.ArrayList;
import java.util.Scanner;

/**
 * Created by thomaspan on 10/1/16.
 */
public class Main {
    public static void main(String[] args) {
        ISaveable player1 = new Player("Thomas", 100, 10);
        System.out.println(player1);

        ((Player) player1).setHitPoints(8);
        System.out.println(player1);

        ((Player) player1).setWeapon("Spear");
        System.out.println(player1);

        saveObject(player1);
        loadObject(player1);
        System.out.println(player1);
    }

    public static ArrayList<String> readValues() {
        ArrayList<String> values = new ArrayList<String>();
        Scanner scanner = new Scanner(System.in);
        boolean quit = false;
        int index = 0;
        System.out.println("Choose\n" +
            "1 to enter a string\n" +
            "0 to quit");

        while(!quit) {
            System.out.print("Choose an option: ");
            int choice = scanner.nextInt();
            scanner.nextLine();
            switch (choice) {
                case 0:
                    quit = true;
                    break;
                case 1:
                    System.out.print("Enter a string" );
                    String stringInput = scanner.nextLine();
                    values.add(index, stringInput);
                    index++;
                    break;
            }
        }
        return values;
    }

    public static void saveObject(ISaveable object) {
        for(int i=0; i<object.write().size(); i++) {
            System.out.println("Saving " + object.write().get(i) + " to storage device");
        }
    }

    public static void loadObject(ISaveable object) {
        ArrayList<String> values = readValues();
        object.read(values);
    }
}
