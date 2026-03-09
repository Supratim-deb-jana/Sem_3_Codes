// Write a Program to find the Sum and Average of an Array
public class array_find_sum_avg {
    public static void main(String[] args){
        int arr[]={1,2,3,4,5};
        int len=arr.length;
        int sum=0;
        int avg;
        int i;
        for(i=0;i<len;i++){
            sum+=arr[i];
        }
        avg=sum/len;
        System.out.println("Total sum of array is:"+sum);
        System.out.println("the Average is:"+avg);
    }
}
