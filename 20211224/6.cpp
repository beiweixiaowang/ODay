#include<iostream>
using namespace std;
int main(){
    int a,b,c,a1,b1,c1,sum1=0,sum2=0,s=0,s1=0;
    int f[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d-%d-%d",&a,&b,&c);
    scanf("%d-%d-%d",&a1,&b1,&c1);
    if((a%4==0&&a!=100!=0)||a%400==0){
        for(int i=1;i<b;i++){
            if(i==2) sum1+=29;
            else sum1+=f[i];
        }
    }
    else{
        for(int i=1;i<b;i++){
            sum1+=f[i];
        }
    }
    if((a1%4==0&&a1%100!=0)||a1%400==0){
        for(int i=1;i<b1;i++){
            if(i==2) sum2+=29;
            else sum2+=f[i];
            //cout<<sum2<<endl;
        }
    }
    else{
        for(int i=1;i<b1;i++){
        sum2+=f[i];
        }
    }
    if(a>a1) swap(a,a1);
        for(int i=a;i<a1;i++){
            if((a%4==0&&a%100!=0)||a%400==0) s1+=366;
            else s1+=365;
    }
    s=abs(sum1+c-sum2-c1)+s1;
    if(s%2==0) printf("我们生日相差%d天\n傻瓜,我心仪的人其实是你呀!",s);
    else printf("我们生日相差%d天\n对不起,我们有缘无份",s);
}