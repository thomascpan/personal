/**
 * Created by thomaspan on 10/12/16.
 */
public class ExampleClass implements Accessible {
    @Override
    public void methodA() {
        System.out.println("MethodA");
    }

    @Override
    public void methodB() {
        System.out.println("MethodB");
    }

    @Override
    public boolean methodC() {
        return false;
    }

    public int returnConstant() {
        return SOME_CONSTANT;
    }
}
