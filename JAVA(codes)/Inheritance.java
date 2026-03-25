class Base{
    int x,y;
    void view(){
        System.out.println("X = " + x + " Y = " + y);
    }
    void Add(){
        System.out.println("X+Y = " + (x+y));
    }
}
class C extends Base{
    int z;
    void viewZ(){
        System.out.println("Z = " + z);        
    }
    void Sum(){
        System.out.println("X+Y+Z = " + (x+y+z));
    }
}


public class Inheritance {
    public static void main(String[] args) {
        Base b = new Base();
        C c1 = new C();
        b.x = 1;
        b.y = 2;
        System.out.println("Base class values");
        b.view();
        b.Add();
        System.out.println("Derived class values");
        c1.x=4;
        c1.y=5;
        c1.z=6;
        c1.view();
        c1.viewZ();
        c1.Sum();
    }
}
