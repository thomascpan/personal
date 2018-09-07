/**
 * Created by thomaspan on 10/12/16.
 */
public class Main {
    public static void main(String[] args) {
        Account tomsAccount = new Account("Thomas");
        tomsAccount.deposit(1000);
        tomsAccount.withdraw(500);
        tomsAccount.withdraw(-200);
        tomsAccount.deposit(-20);
        tomsAccount.calculateBalance();

        System.out.println("Balance on account is " + tomsAccount.getBalance());


        ExampleClass exampleClass = new ExampleClass();

        System.out.println(exampleClass.SOME_CONSTANT);
        exampleClass.methodA();
        exampleClass.methodB();
        System.out.println(exampleClass.methodC());
        System.out.println(exampleClass.returnConstant());
    }
}
