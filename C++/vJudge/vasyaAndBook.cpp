#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n,x,y,d,p;
        cin>>n;
        cin>>x;
        cin>>y;
        cin>>d;
        cin>>p; 
        if(y<d) cout<<"-1\n" ;      
        else if((x-y)%d==0){
            if (x<n/2) p=x/d+(y-1)/d;
            else 
        }
    }
}