package SortAlgorithms;
import java.util.Arrays;

class BubbleSort {
    BubbleSort(int[] array)
    {
        System.out.println("Bubble sorting:");
        for(int i = 0;i<array.length;i++)
        {
            for(int j = 0;j<array.length-i-1;j++)
            {
                if(array[j]>array[j+1])
                {
                    exchange(array,j,j+1);
                }
            }
            System.out.println(Arrays.toString(array));
        }
    }

    static void exchange(int[] array, int i, int j)
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
