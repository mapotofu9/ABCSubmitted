#include <bits/stdc++.h>
using namespace std;
int main(){
  long n;
  cin >> n;

  long d = n;
  double xp = 0;

  map<long,int> memo;

  for(int i=2; i <= sqrt(n); i++){
    for(int j = 2; j < 34; j++){
      xp = pow(i,j);
      if(xp <= n){ 
        if(memo[xp] == 1){continue;}
        else{memo[xp]++;d--;}
      }
    }
  }
  cout << d;
}
