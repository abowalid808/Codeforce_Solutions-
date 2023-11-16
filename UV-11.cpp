#include<bits/stdc++.h>
#define Abo_Walid  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define endl '\n'
#define vec vector

using namespace std;

bool IsPrime(int n) {
    bool is_prime = true;
    if (n == 0 || n == 1) {
        is_prime = false;
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

int PrimeFactor(int n){
    set<int> s;
    int res=0;
    while(n%2==0){
        n/=2;
        res++;
        s.insert(2);
    }

    for(int i=3;i<= sqrt(n);i++){
        while(n%i==0){
            n/=i;
            res++;
            s.insert(i);
        }
    }
    if(n>2){
        s.insert(n);
        res++;
    }
    return res;
}

void solve () {
   ll n; cin>>n;
   if(n<3) {cout<<0<<endl;
       return;}
   else{
       cout<<(n-1)/2<<endl;
   }
}
int main () {
    Abo_Walid
    int t=1; cin>>t;
    while(t--) solve();
    return 0;
}

