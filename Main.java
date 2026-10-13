import java.util.Scanner;
import java.time.LocalDateTime;;

public class Main{

    public static void main(String args[]){

        int intialBalance = 2000000;

        Scanner scanner = new Scanner(System.in);

        LocalDateTime datetime = LocalDateTime.now();

        int choice = 1;

        do{
            
        System.out.println("\n================= Smart Till POS ==============\n");

        System.out.println("Enter your name: ");

        String name = scanner.nextLine();

        System.out.println("Enter Product Name: ");

        String productName = scanner.nextLine();

        System.out.println("Enter unit price: ");

        int unitPrice = scanner.nextInt();
        
        System.out.println("Enter quantity Received: ");

        int quantityReceived = scanner.nextInt();

        int total = quantityReceived * unitPrice;

        int balance = intialBalance - total;

        System.out.printf("\n Name: %s \n Product Name: %s \n Unit Price: %d \n Total: %d \n Balance: %d \n Received Date: %s, \n Date of Purchase: %s", name, productName, unitPrice, total, balance,datetime,datetime);

        System.out.println("\n\nEnter 0 to continue or 1 to exit: ");
        choice = scanner.nextInt();


        }while(choice != 1);

        scanner.close();


    
    }
}