class Farm{
    double length;
    double width;
    double getArea(){
        return length*width;
    }
}


public class area_of_two_Farm {
    public static void main(String [] args)   {
        Farm f1=new Farm();
        f1.length=40.00;
        f1.width=20.00;
        double area1=f1.getArea();
        System.out.println("Area of F1 =" + area1);
        Farm f2=new Farm();
        f2.length=30.00;
        f2.width=40.00;
        double area2=f2.getArea();
        System.out.println("Area of F2 =" + area2);
    }
}
