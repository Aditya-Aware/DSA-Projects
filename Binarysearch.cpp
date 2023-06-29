#include<iostream>
using namespace std;

binarysearch{
    
}

int main(){
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
    
    return 0;
}