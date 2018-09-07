package com.example.game;

import java.util.List;

/**
 * Created by thomaspan on 10/1/16.
 */
public interface ISaveable {
    List<String> write();
    void read(List<String> savedValues);
}
