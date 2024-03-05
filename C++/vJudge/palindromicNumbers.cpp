#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    int t;
    cin>>t;
    string s=to_string(t);
    string s1=s;
    reverse(s.begin(),s.end());
    if (s1==s) cout<<"Case "<<i+1<<": Yes\n";
    else cout<<"Case "<<i+1<<": No\n";
    }
}