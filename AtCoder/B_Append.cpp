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

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;

        if(a==1){
            v.push_back(b);
        }
        else{
            cout<<v[v.size()-b]<<endl;
        }
    }

    return 0;
}