#include <bits/stdc++.h>
using namespace std;

string str1,str2;

string Insert (string str1, string str2, int pos)
{
    int l1,l2;
    string temp1,temp2,temp3;
    l1 = str1.length();
    l2 = str2.length();

    temp1.assign(str1,0,pos-1);
   // cout << "temp1 " <<temp1 << endl;
    temp2 = temp1 + temp2.assign(str2,0,l2);
   // cout << "temp2 " <<temp2 << endl;
    temp3 = temp2 + temp3.assign(str1,pos-1,l1);
   // cout << "temp3 " <<temp3 << endl;
    return temp3;
}

int main()
{

   int pos;
   cout << "ENTER A STRING : ";
   cin >> str1;
   cout << "ENTER A subSTRING : ";
   cin >> str2;
   cout << "ENTER THE POSITION : ";
   cin >>  pos;
   str1 = Insert (str1,str2,pos);
   cout << "AFTER INSERTING : ";
   cout << str1 << endl;
}
