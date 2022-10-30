public class PrintArrayRecursively {
    int[] array;
    PrintArrayRecursively(int n)
    {
        array=new int[n];
    }

    public void printArray(int n)
    {
        if(n>1)
            printArray(n-1);
        System.out.println((n-1)+" = "+array[n-1]);
    }
}
