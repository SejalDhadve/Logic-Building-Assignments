//  Write a java program to find maximum difference between two elements such that larger element appears after the smaller number.

class MaximumDifference
{
    int maxDiff(int arr[],int arr_size)
    {
        int i = 0;
        int maxDiff = arr[1] - arr[0];
        int minElement = arr[0];

        for(i = 1; i < arr_size; i++)
        {
            int diff = arr[i] - minElement;
            if(diff > maxDiff)
                maxDiff = diff;

            if(arr[i] < minElement)
                minElement = arr[i];
        }
        return maxDiff;
    }
}

class Program1
{
    public static void main(String A[])
    {
        MaximumDifference maxdif = new MaximumDifference();
        int arr[] = {1,2,90,10,110};

        System.out.println("Maximum difference is : "+maxdif.maxDiff(arr,5));
    }
}