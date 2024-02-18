/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 17/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();
    int n; cin>>n;
    string s="";

    for(int i=0; i<n; i++){
        s +="10";
    }
    s +='1';
    cout<<s<<endl;
    return 0;
}