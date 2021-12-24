
#include<stdio.h>
int main(){
	int a[13][13]={0};
	int i=0,j=0;
	int n=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j==0)a[i][j]=1;
			if(i==j)a[i][j]=1;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j!=0&&j!=i&&i>j)a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(i>=j)printf("%-4d",a[i][j]);
		}
		if(i!=n-1)printf("\n");
	}
	return 0;
}