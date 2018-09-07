import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/**
 * Created by thomaspan on 10/7/16.
 */
public class League<T extends Team> {
    private String name;
    ArrayList<T> teams = new ArrayList<>();

    public League(String name) {
        this.name = name;
    }

    public void addTeam(T team) {
        if(teams.contains(team)) {
            System.out.println(team.getName() + " is already included");
        } else {
            teams.add(team);
        }
    }

    public void printRankings() {
        Collections.sort(teams);
        for(T t : teams) {
            System.out.println(t.getName() + ": " + t.rank());
        }
    }
}
