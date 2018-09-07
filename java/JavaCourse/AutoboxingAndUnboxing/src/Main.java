/**
 * Created by thomaspan on 9/29/16.
 */
public class Main {
    public static void main(String[] args) {
        Bank bank = new Bank();

        Branch branch1 = new Branch();
        Customer customer1 = new Customer("Thomas", 100d);
        bank.addBranch(branch1);
        bank.addCustomer(branch1, customer1);
        bank.addTransaction(customer1, 50d);
        bank.addTransaction(customer1, 200d);

        Customer customer2 = new Customer("Billy", 500d);
        bank.addCustomer(branch1, customer2);
        bank.addTransaction(customer2, 50d);
        bank.addTransaction(customer2, 200d);

        bank.getListOfCustomers(branch1, true);
    }
}
