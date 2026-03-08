import java.util.Scanner;
public class decimal_to_binary{
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter a Number:");
        int number=sc.nextInt();
        int[] decNumber=new int[30];
        int i=0;
        while(number>0){
            decNumber[i]=number%2;
            number=number/2;
            i++;
        }
        System.out.println("Converted Decimal Number to Binary...");
        for(int j=i-1;j>=0;j--){
            System.out.print(decNumber[j]);
        }
    }
}