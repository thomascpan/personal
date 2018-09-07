package com.example._final;

/**
 * Created by thomaspan on 10/13/16.
 */
public class Main {
    public static void main(String[] args) {
//        SomeClass one = new SomeClass("one");
//        SomeClass two = new SomeClass("two");
//        SomeClass three = new SomeClass("three");
//
//        System.out.println(Math.PI);
//
//        int pw = 54321;
//        Password password = new ExtendedPassword(pw);
//        password.storePassword();
//
//        password.letMeIn(54321);
//        password.letMeIn(1234);

        System.out.println("Main method called");
        SIBTest test = new SIBTest();
        test.someMethod();
        System.out.println("Owner is " + SIBTest.owner);
    }
}
