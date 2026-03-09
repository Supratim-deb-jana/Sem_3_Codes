import java.util.Scanner;

public class print_user_value {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a massage:");
        String massage=sc.nextLine();
        System.out.println("Enter a number:");
        int number=sc.nextInt();
        System.out.println("The massage you Entered:"+massage);
        System.out.println("The Number you Entered:"+number);
    }
}
