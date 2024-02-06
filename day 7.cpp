#include <iostream>

using namespace std;



//Sum of array

int sum(int array[], int size)
{
    int sum=0;
    for (int i=0; i<size; i++)
    {
        sum=sum+array[i];
    }
    return sum;
}

int main()
{
    int num;
    cin>>num;

    cout<<"Enter the number in the rray";

    int arr[100];
    int i=0;
    while(i<num)
    {
        cin>>arr[i];
        i++;
    }

    cout<<"sum of array is "<<sum(arr, num);
}
