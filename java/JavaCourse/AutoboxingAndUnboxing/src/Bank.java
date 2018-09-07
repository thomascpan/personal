import java.util.ArrayList;

/**
 * Created by thomaspan on 9/30/16.
 */
public class Bank {
    private ArrayList<Branch> branches = new ArrayList<Branch>();

    public Bank() {
    }

    public ArrayList<Branch> getBranches() {
        return branches;
    }

    public void addBranch(Branch branch) {
        branches.add(branch);
        System.out.println("Branch added.");
    }

    public void addCustomer(Branch branch, Customer customer) {
        branch.addCustomer(customer);
    }

    public void addTransaction(Customer customer, double transaction) {
        customer.addTransaction(transaction);
    }

    public void getListOfCustomers(Branch branch, boolean includeTransactions) {
        ArrayList<Customer> customers = branch.getCustomers();
        for(int i=0; i < customers.size(); i++) {
            System.out.println(customers.get(i).getName());
        }
        if(includeTransactions) {
            for(int i=0; i < customers.size(); i++) {
                ArrayList<Double> transactions = customers.get(i).getTransactions();
                for(int j=0; j < transactions.size(); j++) {
                    System.out.println(transactions.get(j));
                }
            }
        }
    }
}
