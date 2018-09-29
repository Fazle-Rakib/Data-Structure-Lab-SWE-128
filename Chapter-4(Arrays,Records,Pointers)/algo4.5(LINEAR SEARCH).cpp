#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    int data[n+2] = {1,2,3,4,5,6,7};
    int item =8;
    data[n+1] = item;
    for(int i = 0; i < n+2; i++)
    {
        cout << data[i] <<" ";
    }
    cout << endl;
    int loc = 0;
    while(data[loc] != item )
    {
        loc++;
    }
    if(loc == n+1)
    {
        loc = -1;
    }
    cout << loc;

}
