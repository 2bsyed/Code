#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n,max=0;
        cin>>n;
        for (int j=0;j<n;j++){
            int s;
            cin>>s;
            if(s>max) max=s;
        }
        cout<<"Case "<<i+1<<":"<<" "<<max<<endl;
    }
}