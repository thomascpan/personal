import java.util.Iterator;
import java.util.LinkedList;
import java.util.ListIterator;
import java.util.Scanner;

/**
 * Created by thomaspan on 9/30/16.
 */
public class Main {
    public static void main(String[] args) {
        LinkedList<String> placesToVisit = new LinkedList<String >();
        addInOrder(placesToVisit, "walnut");
        addInOrder(placesToVisit, "los angeles");
        addInOrder(placesToVisit, "irvine");
        addInOrder(placesToVisit, "san diego");
        addInOrder(placesToVisit, "san francisco");
        addInOrder(placesToVisit, "sacremento");
        printList(placesToVisit);
    }

    public static void printList(LinkedList<String> linkedList) {
        Iterator<String> i = linkedList.iterator();
        while(i.hasNext()) {
            System.out.println(i.next());
        }
        System.out.println("======================");
    }

    private static boolean addInOrder(LinkedList<String> linkedList, String newCity) {
        ListIterator<String> stringListIterator = linkedList.listIterator();
        while(stringListIterator.hasNext()) {
            int comparison = stringListIterator.next().compareTo(newCity);
            if(comparison == 0) {
                System.out.println(newCity + " is already included as a destination");
                return false;
            } else if (comparison > 0) {
                stringListIterator.previous();
                stringListIterator.add(newCity);
                return true;
            } else if (comparison < 0) {
            }
        }

        stringListIterator.add(newCity);
        return true;
    }
}