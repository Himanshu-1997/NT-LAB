#include<bits/stdc++.h>
using namespace std;
#define ll long long int
double fun(double x){
    return exp(x*x);
}
int main(){
    double h=0.1,sum=0,a,b,c,ans=0;;
    for(ll i=1;i<=9;i++){
        sum=sum+fun(i*0.1);
    }
    a=fun(0);
    b=fun(1);
    c=(a+b)*0.5;
    sum+=c;
    ans=sum*h;
    cout<<ans<<endl;
}
