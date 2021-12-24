#include<iostream>
#include<string>
using namespace std;
bool record[128];
int main(){
	string A, B;
	getline(cin, A);
	getline(cin, B);
	for (int i = 0; i < B.length(); i++)
		record[B[i]] = true;
	for (int i = 0; i < A.length(); i++)
		if (!record[A[i]])
			cout << A[i];
}