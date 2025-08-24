//Input an octal number from the user and convert into decimal
import java.util.Scanner;

public class Conversion {
    public static void main(String args[]) {

        System.out.println("Enter an octal number: ");
        try (Scanner scanner = new Scanner(System.in)) {
            int octal = scanner.nextInt();
            
            int decimal = 0;
            int power = 0;
            
            while (octal != 0) {
                int digit = octal % 10;
                decimal += digit * Math.pow(8, power);
                octal /= 10;
                power++;
            }  
            
            System.out.println("Decimal equivalent: " + decimal);
        }
    }
}







/*{same program using string instead of integer}
import java.util.Scanner;

public class Conversion {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter an octal number: ");
        String octal = scanner.nextLine();

        int decimal = Integer.parseInt(octal, 8);

        System.out.println("Decimal equivalent: " + decimal);

        scanner.close();
    }
}
*/