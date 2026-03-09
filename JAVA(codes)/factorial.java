import java.util.Scanner;

public class factorial {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter a Number:");
        int a=s.nextInt();
        long factorial=Factorial(a);
        System.out.println("Factorial of "+a+"="+factorial);
    }
    public static long Factorial(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return n*Factorial(n-1);
    }
}
}
