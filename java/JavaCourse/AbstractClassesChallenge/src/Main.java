/**
 * Created by thomaspan on 10/3/16.
 */
public class Main {
    public static void main(String[] args) {
        LinkedList list = new LinkedList(new Node("Thomas"));
        String[] names = {"Clarence", "Kendrick", "Tina", "Tina", "Lauren", "Oswald", "Keanu", "Sarah"};
        for(int i = 0; i < names.length; i++) {
            list.add(new Node(names[i]));
        }
        list.print();

        list.remove("Clarence");
        list.print();

        list.remove("Tina");
        list.print();

        list.remove("Lauren");
        list.print();

        list.remove("Billy");
        list.print();
    }
}