#include <bits/stdc++.h>
using namespace std;

void Delete(string &str, int pos, int len)
{
    int l;
    l = str.length();
    string temp1,temp2 ;
    for(int i = 0; i < pos-1; i++)
    {
        temp1 = temp1 + str[i];
    }
    //cout << "temp" << temp1 << endl;
    for(int i = pos -1 +len ; i < l; i++)
    {
       temp2 = temp2 + str[i];
    }
    //cout << "temp2" << temp2 << endl;
    str = temp1 + temp2;

}

int main()
{
    string str;
    cout << "Enter the string : ";
    cin >> str;
    int pos,len;
    cout << "Enter the position and length : ";
    cin >> pos >> len;
    Delete (str,pos,len);
    cout << "After deleting : ";
    cout << str << endl;
}

