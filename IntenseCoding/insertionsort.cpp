#include <iostream>
using namespace std;

int main()
{
    int *array, temp, count = 0, size;
    cin >> size;
    array = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        cin >> *(array + i);
    }
    cout << "Original array is : \n";
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << "  ";
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            count += 1;
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                i = i - count;
            }
        }
    }
    cout << "\nArray after insertion sort: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << "   ";
    }
    return 0;
}