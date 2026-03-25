class staticTest{
    int multiply(int a, int b){
        return a*b;
    }
    static int add(int a, int b){
        return a+b;
    }
}

public class Main {
    public static void main(String[] args) {
        staticTest t = new staticTest();
        System.out.println("Multiplication is = " + t.multiply(15, 10));
        System.out.println("Addition is = " + staticTest.add(20, 30));
    }
}
