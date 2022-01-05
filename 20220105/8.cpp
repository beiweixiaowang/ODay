#include<iostream>
using namespace std;
const int N =1e5;
int num[N];
int main(void){
	int n;
	cin>>n;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		for(int i=1;i<=a;i++){
			cin>>num[i];
		}
		int t1=b,t2=c;
		while(t1<t2){
			int f=num[t1];
			num[t1]=num[t2];
			num[t2]=f;
			t1++;
			t2--;
		}
		for(int i=1;i<=a;i++) {
			cout<<num[i];
			if(i==a) cout<<endl;
			else cout<<' ';
		}
	} 
	return 0;
} 
