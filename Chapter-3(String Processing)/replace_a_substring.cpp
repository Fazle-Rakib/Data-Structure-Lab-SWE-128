#include <bits/stdc++.h>

using  namespace std;
void Update(string &s, string r, string p)
{
    int l1,l2,l3;
    string temp,temp2;
    int f = 0;
    l1 = s.length();
    l2 = r.length();
    for(int i = 0; i < l1; )
    {
        f = 0;
        int point = i;
        for(int j = 0; j < l2 ; j++)
        {
            if(s[i] == r[j])
            {
                i++;
                f++;
            }
            else
            {
                i++;
                break;
            }
        }
        if(f == r.length())
        {
            temp.assign(s,0,point);
            temp2.assign(s,point+l2,l1-l2); ///point
        }
    }
    s = temp + p +temp2;

}

int main()
{
    string str,rep,pat;
    cout << "Enter the string : ";
    cin >> str;
    cout << "Enter the pattern which you want to replace : ";
    cin >> rep;
    cout << "Enter the pattern to replace : ";
    cin >> pat;
    Update(str,rep,pat);
    cout << "After replacing the string is : ";
    cout << str << endl;
}

