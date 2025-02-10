#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<char> v(5);
    for (auto &i : v){
        cin >> i;
    }
    for (const auto &i : v){
        cout << i << " ";
    }
    cout << endl; // Add a newline for better output formatting
}