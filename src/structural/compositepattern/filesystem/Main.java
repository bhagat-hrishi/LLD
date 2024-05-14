package structural.compositepattern.filesystem;

public class Main {
    public static void main(String[] args) {
        Directory movieDirectory = new Directory ("Movie");
        FileSystem border = new File( "Tamasha");
        movieDirectory.add(border);
        Directory comedyMovieDirectory = new Directory( "Comedy Movie");
        File hulchul = new File("Hulchul");
        comedyMovieDirectory.add(hulchul);
        movieDirectory.add(comedyMovieDirectory);
        movieDirectory.ls();
    }
}
