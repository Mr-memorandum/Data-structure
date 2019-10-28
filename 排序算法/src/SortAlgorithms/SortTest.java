package SortAlgorithms;

import java.util.Arrays;

public class SortTest {
    private static int[] arrayReset()
    {
        int[] array = {7,6,5,4,3,2,1,0};
        System.out.println("Array has been reset.");
        System.out.println("Array is "+Arrays.toString(array));
        return array;
    }

    public static void main(String[] args)
    {
        int[] a = arrayReset();
        new BubbleSort(a);
        a = arrayReset();
        new StraightInsertionSort(a);
        a = arrayReset();
        new ShellSort(a);
    }
}
