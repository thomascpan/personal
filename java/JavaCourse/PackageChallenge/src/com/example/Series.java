package com.example;

import java.util.ArrayList;
import java.util.Arrays;

/**
 * Created by thomaspan on 10/12/16.
 */
public class Series {
    public static int nSum(int n) {
        int sum = 0;
        while(n > 0) {
            sum+=n;
            n--;
        }
        return sum;
    }

    public static int factorial(int n) {
        int product = 1;
        while(n > 0) {
            product*=n;
            n--;
        }
        return product;
    }

    public static int fibonacci(int n) {
        ArrayList<Integer> list = new ArrayList<>(Arrays.asList(0,1));
        for(int i = 1; i < n; i++) {
            list.add(list.get(i) + list.get(i-1));
        }
        return list.get(list.size()-1);
    }
}
