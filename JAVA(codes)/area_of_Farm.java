class Farm{
    double length;
    double width;
    double area(){
        return length*width;
    }
    public void setSide(double l,double w){
        length=l;
        width=w;
    }
}


public class area_of_Farm {
    public static void main(String [] args){
        Farm f1=new Farm();
        double farmArea;
        f1.setSide(70.0,30.0);
        farmArea=f1.area();
        System.out.println("Area of Farm =" + farmArea);
    }
}
