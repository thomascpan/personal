package com.example._final;

/**
 * Created by thomaspan on 10/13/16.
 */
public class SIBTest {
    public static final String owner;

    static {
        owner = "tom";
        System.out.println("SIBTest static initialization block called");
    }

    public SIBTest() {
        System.out.println("SIB constructor called");
    }

    static {
        System.out.println("2nd initialization block called");
    }

    public void someMethod() {
        System.out.println("someMethod called");
    }
}
