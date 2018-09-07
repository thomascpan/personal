/**
 * Created by thomaspan on 9/26/16.
 */
public class Main {
    public static void main(String[] args) {
        Hamburger burger1 = new Hamburger("White", "Beef");
        HealthyBurger burger2 = new HealthyBurger();
        DeluxeBurger burger3 = new DeluxeBurger();

        burger1.addExtras(1);
        burger1.addExtras(2);
        burger1.addExtras(3);
        System.out.println(burger1.getPrice());

        burger2.addExtras(1);
        burger2.addExtras(2);
        System.out.println(burger2.getPrice());

        burger3.addExtras(1);
        System.out.println(burger3.getPrice());
    }
}
