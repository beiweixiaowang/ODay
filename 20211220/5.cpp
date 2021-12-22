#include<iostream>
using namespace std;
#define MAX 1000000
int main(void){
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < MAX; i++)
    {
        if(i % 5 == 0 && i % 7 == 2 && i % 9 == 4){
            count += 1;
            if(count != n)
            {
                cout << i << " ";
            }else
            {
                cout << i;
                break;
            }
        }
    }
}