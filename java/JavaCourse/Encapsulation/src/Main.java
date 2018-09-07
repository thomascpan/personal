import java.util.SortedMap;

/**
 * Created by thomaspan on 9/26/16.
 */
public class Main {
    public static void main(String[] args) {
//        Player player = new Player();
//        player.name = "Tim";
//        player.health = 20;
//        player.weapon = "Sword";
//
//        int damage = 10;
//        player.loseHealth(damage);
//        System.out.println("Remaining health = " + player.healthRemaining());
//
//        damage = 11;
//        player.health = 200;
//        player.loseHealth(damage);
//        System.out.println("Remaining health = " + player.healthRemaining());

        EnhancedPlayer player = new EnhancedPlayer("Tim", 50, "sword");
        System.out.println("Initial health is " + player.getHealth());

        EnhancedPlayer player1 = new EnhancedPlayer("Tom", "spear");
        System.out.println("Initial health is " + player1.getHealth());
    }
}
