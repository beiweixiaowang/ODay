#include <stdio.h>
#include<iostream>
using namespace std;
int main(void)
{
    int m,n,o,j,x;
    cin >> x;
    for(j=0;j<x;j++)
    {
        cin >> m >> n >> o;
        if(m*m+n*n+o*o-3*m*n*o==0)
        {
            cout << "Yes" << endl;
        }
        if(m*m+n*n+o*o-3*m*n*o!=0)
        {
        
            cout << "No" << endl;
        }
    }
    return 0;
}
