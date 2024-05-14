#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n,count=0,p,x,y;
        cin>>n;
        for (int j=0;j<n;j++){
            
            cin>>y;
            if(j==0){
                x=y;
                p=y;
                continue;
            }
            count+=abs(x-y);
            x=y;
        }
        count+=abs(p-y);
        cout<<count<<endl;
    }
}