//Write a Program in JAVA to check whether a Number is PRIME or NOT PRIME .
import java.util.Scanner;

public class prime_or_not {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a Number:");
        int num=sc.nextInt();
        boolean isPrime=true;

        if(num<=1){
            isPrime=false;
        }else{
            for(int i=2;i*i<=num;i++){
                if(num%i==0){
                    isPrime=false;
                    break;
                }
            }
        }
        if(!isPrime){
            System.out.println(num+" is not a Prime Number");
        }else{
            System.out.println(num+" is a Prime Number");
        }

    }
}
