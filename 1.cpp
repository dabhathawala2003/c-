//program to interchange the neighbouring elements of array//.

#include<iostream>               //***************header file for c++******************//
using namespace std;            //****************used for standard intput output*************//
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";          //******************cout->printf and cin->scanf*******************//
    }cout<<endl;
}

void swapAlternate(int arr[],int size)l
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1 < size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={9,10,11,12,13};

    swapAlternate(even, 8);
    printArray(even, 8);

    swapAlternate(odd, 5);
    printArray(odd, 5);

    return 0;
}