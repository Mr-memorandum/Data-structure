package SortAlgorithms;
import java.util.Arrays;
class ShellSort {
    void Sort(int[] array, int h)
    {
        for(int i = h;i<array.length;i++)
        {
            if(array[i]<array[i-h])
            {
                BubbleSort.exchange(array,i,i-h);
            }
            System.out.println(Arrays.toString(array));
        }
    }

    ShellSort(int[] a)
    {
        System.out.println("Shell's sort:");
        int h = a.length/2;
        while(h>=1)
        {
            System.out.println("h is " + h);
            Sort(a,h);
            h = h/2;
        }
    }
}
