#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int n, i, count = 0;
    cout << "enter the size of the element : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            cout << "Invalid Input!" << endl;
            exit(0);
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            count++;
        }
    }
    cout << "number of elements divisible by 3 are : " << endl;
    cout << count;
    return 0;
}
