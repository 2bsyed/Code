#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i];
        if(i != n - 1){
            cout << " ";
        }
    }
}