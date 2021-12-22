#include <iostream>
using namespace std;
int a[111];
int main()
{
    for (int i = 0; i < 24; i++)
    {
        cin >> a[i];
    }
    int x;
    while (1)
    {
        cin >> x;
        if (x == -1)
            return 0;
        else if (x >= 0 && x <= 23)
        {
            if (a[x] > 50)
                cout << a[x] << " Yes" << endl;
            else
                cout << a[x] << " No" << endl;
        }
        else
            return 0;
    }
}