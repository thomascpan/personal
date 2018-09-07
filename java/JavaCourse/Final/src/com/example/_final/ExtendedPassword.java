package com.example._final;

/**
 * Created by thomaspan on 10/13/16.
 */
public class ExtendedPassword extends Password {
    private int decryptedPassword;

    public ExtendedPassword(int password) {
        super(password);
        this.decryptedPassword = password;
    }
}
