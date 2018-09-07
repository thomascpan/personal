package com.example._final;

/**
 * Created by thomaspan on 10/13/16.
 */
public class SomeClass {
    public static int classCounter = 0;
    public final int instanceNumber;
    public final String name;

    public SomeClass(String name) {
        this.name = name;
        classCounter++;
        instanceNumber = classCounter;
        System.out.println(name + " created, instance is " + instanceNumber);
    }

    public int getInstanceNumber() {
        return instanceNumber;
    }
}
