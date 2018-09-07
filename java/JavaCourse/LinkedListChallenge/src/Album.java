import java.util.ArrayList;

/**
 * Created by thomaspan on 10/1/16.
 */
public class Album {
    private ArrayList<Song> trackList;

    public Album(ArrayList<Song> trackList) {
        this.trackList = trackList;
    }

    public ArrayList<Song> getTrackList() {
        return trackList;
    }
}
