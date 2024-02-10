/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 10/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();

    int n,m,d;
    cin>>n>>m>>d;


    for(int i=n; i<=m; i+=d){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}