#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    for (int i=0;i<k;i++){
        int t,n;
        cin>>n;
        cin>>t;
        int d=n;
        int p=t-n;
        if (p>0) p*=1;
        else p*=-2;
        int l=p+d;
        cout<<l;
        cout<<"Case "<<i+1<<":"<<" "<<l*4+19;
    }
}