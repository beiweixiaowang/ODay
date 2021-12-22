#include<iostream>
using namespace std;
int main(void){
    int m, n;
    cin >> m >> n;
    int reslut, temp = 0;
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        temp += t % n;
    }
    reslut = temp % n;
    cout << reslut;
    return 0;
}