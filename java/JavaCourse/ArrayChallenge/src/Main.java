import java.util.Arrays;

/**
 * Created by thomaspan on 9/29/16.
 */
public class Main {
    public static void main(String[] args) {
        int[] list = {106,26,81,5,15};
        System.out.println(Arrays.toString(list));
        list = sortArray(list);
        System.out.println("hit");
        System.out.println(Arrays.toString(list));
    }

    public static int[] sortArray(int[] array) {
        boolean isSorted = false;
        int i = 0;

        while (isSorted == false) {
            isSorted = true;
            while (i < array.length - 1) {
                if (array[i] > array[i+1]) {
                    int temp = array[i+1];
                    array[i+1] = array[i];
                    array[i] = temp;
                    isSorted = false;
                }
                i++;
            }
            i = 0;
        }
        return array;
    }
}
