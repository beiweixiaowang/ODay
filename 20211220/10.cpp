#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,c1=0,c2=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int min=a[0],max=a[n-1];
    for(int i=0;i<n;i++){
        if(min==a[i])c1++;
        if(max==a[i])c2++;
    }
    cout<<min<<" "<<c1<<endl<<max<<" "<<c2;
    return 0;
}
