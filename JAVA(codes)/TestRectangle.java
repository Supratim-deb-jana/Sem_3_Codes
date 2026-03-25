class Rectangle{
    float l;
    float w;
    Rectangle(){
        l=10.0f;
        w=5.0f;
    }
    Rectangle(float length, float width){
        l=length;
        w=width;
    }
    Rectangle(Rectangle p){
        l=p.l;
        w=p.w;
    }
    Rectangle(float length){
        l=length;
        w=l;
    }
    void Cal_Area(){
        float a = w * l;
        System.out.println("The Area of Rectangle with length " + l + "and width " + w + " is= " + a);
    }
}

public class TestRectangle {
    public static void main(String[] args) {
        Rectangle t1 = new Rectangle(15,12);
        t1.Cal_Area();
        Rectangle t2 = new Rectangle(12);
        t2.Cal_Area();
        Rectangle t3 = new Rectangle();
        t3.Cal_Area();
        Rectangle t4 = new Rectangle(t1);
        t4.Cal_Area();
    }
}
