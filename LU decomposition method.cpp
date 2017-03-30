#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    double a[3][3],b[3][1],l[3][3],u[3][3],y[3][1],x[3][1];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<3;i++){
        cin>>b[i][0];
    }
    cout<<endl;
    cout<<endl;
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++)
            l[i][j]=0;
    }
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++)
            u[i][j]=0;
    }
    l[0][0]=a[0][0];
    l[1][0]=a[1][0];
    l[2][0]=a[2][0];
    l[1][1]=a[1][1]-a[1][0]*a[0][1]/a[0][0];
    l[2][1]=a[2][1]-a[2][0]*a[0][1]/a[0][0];
    l[2][2]=a[0][0]*a[2][2]-a[2][0]*a[0][2]-((a[0][0]*a[2][1]-a[2][0]*a[0][1])/a[0][0])*((a[0][0]*a[1][2]-a[1][0]*a[0][2])/(a[1][1]*a[0][0]-a[1][0]*a[0][1]));
    u[0][0]=1;
    u[1][1]=1;
    u[2][2]=1;
    u[0][1]=a[0][2]/a[0][0];
    u[0][2]=a[0][2]/a[0][0];
    u[1][2]=((a[0][0]*a[1][2]-a[1][0]*a[0][2])/(a[1][1]*a[0][0]-a[1][0]*a[0][1]));
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++)
            cout<<l[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
     cout<<endl;
    cout<<endl;
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++)
            cout<<u[i][j]<<" ";
        cout<<endl;
    }
    y[0][0]=b[0][0]/l[0][0];
    y[1][0]=(b[1][0]-l[1][0]*y[0][0])/l[1][1];
    y[2][0]=(b[2][0]-l[2][0]*y[0][0]-l[2][1]*y[1][0])/l[2][2];
    x[2][0]=y[2][0]/u[2][2];
    x[1][0]=(y[1][0]-u[1][2]*x[2][0])/u[1][1];
    x[0][0]=(y[0][0]-u[0][1]*x[1][0]-u[0][2]*x[2][0])/u[0][0];
    cout<<endl;
    cout<<endl;
    for(ll i=0;i<3;i++){
        cout<<y[i][0]<<" ";
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(ll i=0;i<3;i++){
        cout<<x[i][0]<<" ";
        cout<<endl;
    }

}
