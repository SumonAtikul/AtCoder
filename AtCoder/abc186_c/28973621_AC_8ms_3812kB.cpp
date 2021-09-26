#include<iostream>
using namespace std;
int n,ans=0;
bool output(int m){
    int mm=m;
    while(mm){if(mm%10==7)return false;mm/=10;}
    while(m){if(m%8==7)return false;m/=8;}
    return true;
}
int main(){
    scanf("%d",&n);
    for(int i=n;i>0;--i)if(output (i))ans++;
    printf("%d",ans);
    return 0;
}