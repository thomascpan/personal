/**
 * Created by thomaspan on 10/7/16.
 */
public abstract class Team implements Comparable<Team> {
    private String name;
    private int won;
    private int tied;
    private int lost;

    public Team(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public int rank() {
        return ((won*2) + tied) - lost;
    }

    public void matchWith(Team team, int ourScore, int theirScore) {
        if (ourScore > theirScore) {
            won++;
        } else if (ourScore == theirScore) {
            tied++;
        } else {
            lost++;
        }
        if (team != null) {
            team.matchWith(null, theirScore, ourScore);
        }
    }

    @Override
    public int compareTo(Team team) {
        if(this.rank() > team.rank()) {
            return -1;
        } else if(this.rank() == team.rank()) {
            return 0;
        } else {
            return 1;
        }
    }

    @Override
    public String toString() {
        return this.name;
    }
}