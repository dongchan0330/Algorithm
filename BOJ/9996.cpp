#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string str;
    cin >> n >> str;

    string left = str.substr(0, 0 + str.find("*"));
    string right = str.substr(str.find("*") + 1, str.size());

    while (n--)
    {
        string s;
        cin >> s;
        bool flag = false;

        if (str.size() - 1 > s.size())
        {
            cout << "NE\n";
        }
        else
        {
            for (int i = 0; i < left.size(); i++)
            {
                if (left[i] != s[i])
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                for (int i = 0; i < right.size(); i++)
                {
                    if (right[i] != s[s.size() - right.size() + i])
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if (!flag)
            {
                cout << "DA\n";
            }
            else
            {
                cout << "NE\n";
            }
        }
    }

}