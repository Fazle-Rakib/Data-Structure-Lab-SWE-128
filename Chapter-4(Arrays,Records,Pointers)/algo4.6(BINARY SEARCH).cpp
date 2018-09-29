#include <iostream>
using namespace std;
int main()
{
    int data[13] = {1,3,6,9,23,33,47,56,63,77,88,94,99};
    int lb,ub,beg,End,loc,mid;
    int item = 99;
    lb = 0;
    beg = lb;
    ub = 12;
    End = ub;
    mid = (int)((beg+End)/2);
    while(beg <= End && data[mid] != item)
    {
        if(item < data[mid])
        {
            End = mid -1;
        }
        else
        {
            beg = mid+1;
        }
        mid = int ((beg+End)/2);
        if(data[mid] == item)
        {
            loc = mid;
            break;
        }
        else
        {
            loc = -1;
        }
    }
    cout << "ITEM is in :"<< loc << "th position" <<  endl;


}
