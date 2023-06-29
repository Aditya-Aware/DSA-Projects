#include <iostream>
using namespace std;

int searching(int arr[], int a, int x)
{
    cin >> x;
    for (int i = 0; i < a; i++)


    {
        if (arr[i] == x)
        {
            cout << "Element found";
            return i;
        }
        return -i;
    }
}
void main()
{
    int n;
    cout << "Enter the no of coloums in matrx : ";
    cin >> n;

    int arr[n] = {};

    cout << "Enter the elements in the matrix : ";
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    cout << "The Entered Elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    searching(arr);
    return 0;
}