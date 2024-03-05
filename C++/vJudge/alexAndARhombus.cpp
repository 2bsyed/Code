#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r=1,p;
    for(int i=0;i<n;i++){
        p=i*4;
        r=p+r;
        
    }
    cout<<r;
}