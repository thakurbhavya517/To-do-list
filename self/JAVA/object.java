/*import java.util.Scanner;

public static double calcHalf (double A){
    return A/2;
}

public class classFunction {
    Scanner scanner = new Scanner(System.in);
    public static void main(String args[]){
    System.out.println("value of A:");
    double A =  scanner.nextDouble();
    
}
}*/

//Aim: Create 2 classes with function in 1 class and Object in other one, use the object in fuction class.

public class object{
    public static void main(String[] args) {
        objkid A = new objkid();
        A.show();
    }
}
class objkid {
    void show(){
        System.out.println("Hey There!\nYou're Cooked :)");
    }
}