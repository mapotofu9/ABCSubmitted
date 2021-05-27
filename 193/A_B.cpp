// A
#include <bits/stdc++.h>
using namespace std;
int main(){
  double a, b;
  cin >> a >> b;

  double discount = (1-(b/a))*100;

  cout << discount;
}



// B
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> p(n);
  vector<int> x(n);

  bool affordable = false;

  for(int i = 0; i < n; i++){
    cin >> a[i] >> p[i] >> x[i];
  }

  int minPrice = 0;

  for(int i = 0; i < n; i++){
    x[i] -= a[i];
    if(x[i] >= 1){
      if(p[i] <= minPrice || minPrice == 0){
        minPrice = p[i];
        affordable = true;
      }
    }
  }
  
  if(affordable){
    cout << minPrice;
  }else{cout << -1;}
}
