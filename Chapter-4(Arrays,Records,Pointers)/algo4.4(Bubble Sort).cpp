#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "How many elements you want to sort? ";
    cin >> n;
    int array[n];
    cout << "ENTER ELEMENTS :" ;
    for (int i=0; i<n; i++ )
    {
        cin >> array[i];
    }
    for (int  i=0; i<n; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            int temp;
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    cout << "SORTED DATA : ";
    for (int i=0; i<n; i++ )
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
