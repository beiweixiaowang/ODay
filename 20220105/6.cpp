#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],n,m,i,j;
double b[1001][1001]; 
int main()
{
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{	
	for(j=1;j<=m;j++)
	{
		cin>>a[i][j];
		b[i][j]=a[i][j];
	}
	}
	for(i=2;i<n;i++)
	{
		for(j=2;j<m;j++)
		b[i][j]=round(a[i-1][j]+a[i][j-1]+a[i+1][j]+a[i][j+1]+a[i][j])/5.0;
	} 
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
            if(j<m)
		        printf("%.0lf ",b[i][j]);
            else
                printf("%.0lf",b[i][j]);
		printf("\n");
	}
	return 0;
	}