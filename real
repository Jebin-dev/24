import java.util.Random;
import java.util.Scanner;

public class NumberGuessingGame {

    public static void main(String[] args) {
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);

        int secretNumber = random.nextInt(100) + 1; // 1 to 100
        int attempts = 0;
        int guess = 0;

        System.out.println("🎯 Welcome to the Number Guessing Game!");
        System.out.println("I'm thinking of a number between 1 and 100.");

        while (guess != secretNumber) {
            System.out.print("Enter your guess: ");
            
            if (scanner.hasNextInt()) {
                guess = scanner.nextInt();
                attempts++;

                if (guess < secretNumber) {
                    System.out.println("Too low! Try again.");
                } else if (guess > secretNumber) {
                    System.out.println("Too high! Try again.");
                } else {
                    System.out.println("🎉 Congratulations! You guessed the number in " + attempts + " attempts.");
                }
            } else {
                System.out.println("Please enter a valid number.");
                scanner.next(); // clear invalid input
            }
        }

        scanner.close();
    }
}
