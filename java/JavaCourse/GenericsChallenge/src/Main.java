/**
 * Created by thomaspan on 10/7/16.
 */
public class Main {
    public static void main(String[] args) {
        League<BasketballTeam> nba = new League<>("NBA");
        League<FootballTeam> nfl = new League<>("NFL");

        BasketballTeam okc = new BasketballTeam("OKC");
        BasketballTeam lal = new BasketballTeam("LAL");
        BasketballTeam gsw = new BasketballTeam("GSW");

        FootballTeam broncos = new FootballTeam("Broncos");
        FootballTeam patriots = new FootballTeam("Patriots");
        FootballTeam packers = new FootballTeam("Packers");

        nba.addTeam(okc);
        nba.addTeam(lal);
        nba.addTeam(gsw);

        nfl.addTeam(broncos);
        nfl.addTeam(patriots);
        nfl.addTeam(packers);

        okc.matchWith(lal, 100, 95);
        lal.matchWith(gsw, 87, 105);
        gsw.matchWith(okc, 102, 103);

        nba.printRankings();
    }
}
