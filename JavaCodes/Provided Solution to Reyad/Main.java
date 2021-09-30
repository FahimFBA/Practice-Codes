import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) {
        ArrayList<Movie> list = new ArrayList<>();
        list.add(new Movie("Walking Dead", 8.3));
        list.add(new Movie("Avengers", 7.3));
        list.add(new Movie("Pother Pachali", 9.5));
        list.add(new Movie("Your Name", 6.1));
        list.add(new Movie("Inception", 9.8));
        Collections.sort(list, new CompareRating());
        for (int j = 0; j < list.size(); j++) {
            System.out.println(list.get(j).name + " " + list.get(j).imdbRating);
        }

    }
}

class Movie {
    String name;
    double imdbRating;

    public Movie(String name, double imdbRating) {
        this.name = name;
        this.imdbRating = imdbRating;
    }
}

class CompareRating implements Comparator<Movie> {
    public int compare(Movie o1, Movie o2) {
        if (o1.imdbRating < o2.imdbRating) {
            return 1;
        } else if (o1.imdbRating > o2.imdbRating) {
            return -1;
        }
        return 0;
    }
}
