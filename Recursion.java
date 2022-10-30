public class Recursion {
    public static void main(String[] args) {
        Factorial factorial=new Factorial();
        System.out.println(factorial.getFactorial(5));
        System.out.println(factorial.getFactorial(6));
        System.out.println(factorial.getFactorial(7));

        PrintArrayRecursively arrayObject=new PrintArrayRecursively(10);
        for (int i=0;i<10;i++)
        {
            arrayObject.array[i]=i+1;
        }
        arrayObject.printArray(10);
    }
}
