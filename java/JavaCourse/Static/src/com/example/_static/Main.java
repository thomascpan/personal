package com.example._static;

/**
 * Created by thomaspan on 10/13/16.
 */
public class Main {
    public static int multiplier = 7;

    public static void main(String[] args) {
//        StaticTest firstInstance = new StaticTest("1st Instance");
//        System.out.println(StaticTest.getNumInstances());
//
//        StaticTest secondInstance = new StaticTest("2nd Instance");
//        System.out.println(StaticTest.getNumInstances());

        int answer = multiply(6);
        System.out.println(answer);
    }

    public static int multiply(int number) {
        return number * multiplier;
    }
}
