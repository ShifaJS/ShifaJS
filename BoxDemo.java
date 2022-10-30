public class BoxDemo {
    public static void main(String[] args) {
        Box1 myBox1=new Box1(10,20,15);
        Box1 myBox2=new Box1();
        Box1 myBox3=new Box1(5);
        Box1 myBox4=new Box1(myBox1);

        System.out.println("the volume of first object : "+myBox1.calculateVolume());
        System.out.println("the volume of second object : "+myBox2.calculateVolume());
        System.out.println("the volume of third object : "+myBox3.calculateVolume());
        System.out.println("the volume of fourth object : "+myBox4.calculateVolume());

    }
}
