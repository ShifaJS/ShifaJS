public class Box1 {
    public double height;
    public double width;
    public double depth;

    Box1(double height,double width,double depth)
    {
        this.height=height;
        this.width=width;
        this.depth=depth;
    }

    Box1()
    {
        height=width=depth=-1;
    }

    Box1(double side)
    {
        height=width=depth=side;
    }

    Box1(Box1 myBox1)
    {
        height= myBox1.height;
        width=myBox1.width;
        depth= myBox1.depth;
    }
    public double calculateVolume()
    {
        return (height*width*depth);
    }
}
