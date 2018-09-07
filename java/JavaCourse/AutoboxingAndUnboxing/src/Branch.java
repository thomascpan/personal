import java.util.ArrayList;

/**
 * Created by thomaspan on 9/30/16.
 */
public class Branch {
    private ArrayList<Customer> customers = new ArrayList<Customer>();

    public Branch() {
    }

    public void addCustomer(Customer customer) {
        customers.add(customer);
        System.out.println("Customer added");
    }

    public ArrayList<Customer> getCustomers() {
        return customers;
    }
}
