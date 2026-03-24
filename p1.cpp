#include<bits/stdc++.h>
using namespace std;

long long cal(long long val){
  long long t = 1000;

  long long  n = 999/val;

  long long ans = val*((n*(n+1)))/2;
  return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 3;
    int f = 5;

    int i = 1 ;
    long long ans = 0;
    ans+=cal(3);
    ans+=cal(5);
    ans-=cal(15);

    
    


    
    cout<<ans<<endl;
}
