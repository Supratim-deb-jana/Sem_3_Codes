// Write a Program to find the Sum and Average of an Array using User define

import java.util.Scanner;

public class Array_Sum_Avg {
     public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter how many Elements do you want:");
        int num=sc.nextInt();
        double arr[]=new double[num];
        double sum=0;
        int i;
        System.out.println("Enter Elements:");
        for(i=0;i<num;i++){
            arr[i]=sc.nextDouble();
            sum+=arr[i];
        }
        double avg=sum/num;
        System.out.print("Your entered Elements are:");
        for(i=0;i<num;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        System.out.println("Total sum of array is:"+sum);
        System.out.println("the Average is:"+avg);
    }
}