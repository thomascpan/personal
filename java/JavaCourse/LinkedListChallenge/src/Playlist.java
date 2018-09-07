import java.util.ArrayList;
import java.util.LinkedList;
import java.util.ListIterator;
import java.util.Scanner;

/**
 * Created by thomaspan on 10/1/16.
 */
public class Playlist {
    private ArrayList<Album> albums;
    private LinkedList<Song> trackList = new LinkedList<Song>();

    public Playlist(ArrayList<Album> albums) {
        this.albums = albums;
    }

    public void addSong(Song song) {
        for(int i=0; i<albums.size(); i++) {
            for(int j=0; j<albums.get(i).getTrackList().size(); j++) {
                if(song.getTitle() == albums.get(i).getTrackList().get(j).getTitle()) {
                    trackList.add(song);
                    System.out.println("Adding " + song.getTitle());
                    return;
                }
            }
        }
        System.out.println("Song not found");
    }

    public void menuOption() {
        Scanner scanner = new Scanner(System.in);
        boolean quit = false;
        boolean goingForward = true;
        ListIterator<Song> listIterator = trackList.listIterator();

        if(trackList.isEmpty()) {
            System.out.println("Playlist is empty");
            return;
        } else {
            System.out.println("Now playing: " + listIterator.next().getTitle());
            printMenu();
        }

        while(!quit) {
            int action = scanner.nextInt();
            scanner.nextLine();
            switch(action) {
                case 0:
                    System.out.println("Quitting");
                    quit = true;
                    break;
                case 1:
                    if(!goingForward) {
                        listIterator.next();
                        goingForward = true;
                    }
                    if(listIterator.hasNext()) {
                        System.out.println("Now playing: " + listIterator.next().getTitle());
                    } else {
                        System.out.println("End of playlist");
                    }
                    break;
                case 2:
                    if(goingForward) {
                        listIterator.previous();
                        goingForward = false;
                    }
                    if(listIterator.hasPrevious()) {
                        System.out.println("Now playing: " + listIterator.previous().getTitle());
                    } else {
                        System.out.println("Start of playlist");
                    }
                    break;
                case 3:
                    if(goingForward) {
                        System.out.println("Now playing: " + listIterator.previous().getTitle());
                        listIterator.next();
                    } else {
                        System.out.println("Now playing: " + listIterator.next().getTitle());
                        listIterator.previous();
                    }
                    break;
                case 4:
                    for(int i=0; i<trackList.size(); i++) {
                        System.out.print(trackList.get(i).getTitle() + ", ");
                    }
                    System.out.println();
                    break;
                case 5:
                    if(goingForward) {
                        System.out.println("Removing: " + listIterator.previous().getTitle());
                    } else {
                        System.out.println("Removing: " + listIterator.next().getTitle());
                    }
                    listIterator.remove();
                    break;
                default:
                    System.out.println("Invalid command");
                    break;
            }
        }
    }

    private void printMenu() {
        System.out.println("0: Quit");
        System.out.println("1: Skip forward");
        System.out.println("2: Skip backward");
        System.out.println("3: Replay");
        System.out.println("4: List songs");
        System.out.println("5: Remove song");
    }
}
