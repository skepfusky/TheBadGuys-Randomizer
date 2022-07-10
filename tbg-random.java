import java.util.Random;

public class TheBadGuysJava {
  public static void main(String[] args) {
    String[] theBadGuys = {
      "Wolf",
      "Snake",
      "Tarantula",
      "Shark",
      "Piranha",
      "Diane Foxington"
    };

    Random r = new Random();
    String yourLove = theBadGuys[r.nextInt(theBadGuys.length)];

    if (yourLove = "Wolf" && yourLove = "Diane Foxington") {
      System.out.println("You have a crush on ").concat(yourLove).concat(" I see, you must be a furry!");
    } else {
      System.out.println("You chose ").concat(yourLove).concat(" as your crush uwu");
    }
  }
}