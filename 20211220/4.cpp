#include<iostream>
using namespace std;
#define MAXSIZE 2048
int main(void){
    
    int n, p;
    float np[MAXSIZE];
    cin >> n >> p;

    for (int i = 0; i < n; i++)
    {
        cin >> np[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (np[i] < p)
        {
            printf("On Sale! %.1f\n", np[i]);
        }
    }
}