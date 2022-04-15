#include <iostream>
using namespace std;
// void add(int index, int addval, int arr[5])
// {
//     // 2,3=10
//     arr[index] = arr[index] + addval;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << endl;
//         }
// }

int main()
{
    int arr[5] = {2, 5, 7, 8, 5};
    // add(2, 333, arr);
    int index = 2;
    int addval = 333;
    arr[index] = arr[index] + addval;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}