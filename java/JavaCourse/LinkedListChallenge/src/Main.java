import java.util.ArrayList;

/**
 * Created by thomaspan on 10/1/16.
 */
public class Main {
    public static void main(String[] args) {
        ArrayList<Album> albums = new ArrayList<Album>();

        String[] songsNames1 = {
            "Sherane a.k.a Master Splinter’s Daughter",
            "Bitch, Don't Kill My Vibe",
            "Backseat Freestyle",
            "The Art of Peer Pressure",
            "Money Trees",
            "Poetic Justice",
            "good kid",
            "m.A.A.d city",
            "Swimming Pools (Drank)",
            "Sing About Me, I’m Dying of Thirst",
            "Real",
            "Compton"
        };

        int[] songsDurations1 = {273, 310, 212, 524, 626, 500, 334, 550, 513, 1203, 723, 408};

        String[] songsNames2 = {
                "Wesley's Theory",
                "For Free? (Interlude)",
                "King Kunta",
                "Institutionalized",
                "These Walls",
                "u",
                "Alright",
                "For Sale? (Interlude)",
                "Momma",
                "Hood Politics",
                "How Much a Dollar Cost",
                "Complexion (A Zulu Love)",
                "The Blacker the Berry",
                "You Ain't Gotta Lie (Momma Said)",
                "i",
                "Mortal Man"
        };

        int[] songsDurations2 = {384, 290, 442, 456, 537, 300, 434, 570, 243, 903, 613, 512, 210, 423, 1303, 113};

        ArrayList<Song> trackList1 = new ArrayList<Song>();
        ArrayList<Song> trackList2 = new ArrayList<Song>();

        for(int i = 0; i < songsNames1.length; i++) {
            trackList1.add(new Song(songsNames1[i], songsDurations1[i]));
        }

        for(int i = 0; i < songsNames2.length; i++) {
            trackList2.add(new Song(songsNames2[i], songsDurations2[i]));
        }

        albums.add(new Album(trackList1));
        albums.add(new Album(trackList2));

        Playlist playlist = new Playlist(albums);

        playlist.addSong(trackList1.get(3));
        playlist.addSong(trackList1.get(4));
        playlist.addSong(trackList1.get(9));
        playlist.addSong(trackList2.get(2));
        playlist.addSong(trackList2.get(14));
        playlist.addSong(trackList2.get(15));

        playlist.menuOption();
    }
}
