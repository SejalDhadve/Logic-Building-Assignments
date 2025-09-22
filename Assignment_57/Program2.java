/*  Given an array arr[] of n integers construct a Product Array prod[](of same size) such that prod[i] is equal to the product of all the elements of arr[] except arr[i].
Solve it without division operator and in O(n).
*/

class ProductArray
{
    void productArray(int arr[], int n)
    {
        int prod[] = new int[n];
        int i;

        for(i = 0; i < n; i++)
        {
            prod[i] = 1;
        }

        int temp = 1;
        for(i = 0; i < n; i++)
        {
            prod[i] = temp;
            temp = temp * arr[i];
        }

        temp = 1;
        for(i = n-1; i >= 0; i--)
        {
            prod[i] = prod[i] * temp;
            temp = temp * arr[i];
        }

        for(i = 0; i < n; i++)
        {
            System.out.print(prod[i]+" ");
        }
        System.out.println();
    }
}

class Program2
{
    public static void main(String A[])
    {
        ProductArray pa = new ProductArray();
        int arr[] = {10,3,5,6,2};
        int n = arr.length;
        System.out.println("The product array is : ");
        pa.productArray(arr,n);
    }
}