//..
#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int arr[10] = {1, 2, 3, 2, 3, 1, 6, 7, 9, 1};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        cout << "here" << i << "comming" << count << "times" << endl;
    }

    return 0;
}
