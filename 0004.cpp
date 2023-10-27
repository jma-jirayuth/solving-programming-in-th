#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    string s;

    cin >> s;
    if (all_of(s.begin(), s.end(), [](unsigned char c)
               { return isupper(c); }))
    {
        cout << "All Capital Letter";
        return 0;
    }

    else if (all_of(s.begin(), s.end(), [](unsigned char c)
                    { return islower(c); }))
    {
        cout << "All Small Letter";
        return 0;
    }

    else
        cout << "Mix";
}