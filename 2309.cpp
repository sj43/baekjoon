#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<int> v, w;
  int i, c;
  
  for(i=0;i<9;i++){
    cin >> c;
    v.push_back(c);
    w.push_back(1);
  }

  w[0] = 0;
  w[1] = 0;
  
  sort(v.begin(), v.end());

  while(true){
    vector<int> ret;
    for(i=0;i<9;i++){
      if(w[i]==1) ret.push_back(v[i]);
    }
    if (accumulate(ret.begin(), ret.end(), 0) == 100) {
      sort(ret.begin(), ret.end());
      for (auto n: ret) {
        cout << n << endl;
      }
      break;
    }
    if (!next_permutation(w.begin(), w.end())) break;
  }
  return 0;
}
