#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int b,p,f,h,c,profit=0;
        cin>>b;
        cin>>p;
        cin>>f;
        cin>>h;
        cin>>c;
        if ((p+f)*2<=b)
         cout<<p*h+f*c<<"\n";
        else if(b>1){
            int dmax=h,dmin=c,max=p,min=f;
            if(h>c){
                dmax=h,dmin=c,max=p,min=f;
            }
            else dmax=c,dmin=h,max=f,min=p;
            b/=2;
            if(b>max){
                cout<<max*dmax+(b-max)*dmin<<"\n";
                
            }
            else{
                cout<<b*dmax<<"\n";
            }

        }
        else cout<<"0\n";


    }
}