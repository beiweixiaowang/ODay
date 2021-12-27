#include<stdio.h>
int main()
{
    int t,n,i,j,k,l,a[10];
    scanf("%d",&t);
    for(;t>0;t--){
            l=1;
        scanf("%d",&n);              
        for(i=1;i<=n;i++){                             
            for(j=0;j<n;j++){
                scanf("%d",&a[j]);        
            }
            for(k=0;k<i-1;k++){
                if(a[k]!=0){          
                    l=0;       
                }
                
        }
    }
        if(l==1){                 
                printf("YES\n");
            }else{
                printf("NO\n");
            }
    }
    return 0;
}
