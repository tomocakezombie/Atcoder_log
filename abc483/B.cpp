#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> vec(N);
  for(int i = 0;i < N;i++){
    vec[i] = i+1;
  }
  
  for(int i = 0;i < Q;i++){
    int K;
    cin >> K;
    
    // cout << K << "K" << endl;
    vector<int> change(K);
    for(int j = 0;j < K;j++){
      change[j] = vec[j]*-1;
    }
    reverse(change.begin(), change.end());
    
    // for(int j = 0;j < K;j++){
    //   cout << change[j] << " ";
    // } cout << endl;
    
    for(int j = 0;j < K;j++){
      vec[j] = change[j];
    }
    
    // for(int j = 0; j < N;j++){
    //   cout << vec[j] << " ";
    // }cout << endl;
  }
  
  for(int i = 0;i < N;i++){
      cout << vec[i] << endl;
  }
  
  return 0;
}