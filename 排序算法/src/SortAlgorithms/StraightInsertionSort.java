package SortAlgorithms;

import java.util.Arrays;

class StraightInsertionSort {
    StraightInsertionSort(int[] array)
    {
        System.out.println("Straight insertion sorting:");
        for(int i = 1;i<array.length;i++)
        {
            int j = i;
            do
            {
                if(array[j]<array[j-1])
                {
                    BubbleSort.exchange(array,j,j-1);
                }
                j = j - 1;
            }
            while(j>0);
            System.out.println(Arrays.toString(array));
        }
    }
}
