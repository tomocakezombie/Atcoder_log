#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(M,0);
  vector<int> B(M,0);
  vector<int> elect(N+1, 0);
  vector<vector<int>> ifrest(N+1,vector<int>());
  
  for(int i = 0;i < M;i++){
    
    cin >> A[i] >> B[i];
    
    // cout << ">?" << endl;
    ifrest[A[i]].push_back(B[i]);
    // cout << "<?" << endl;
    elect[A[i]]++;
    // cout << A[i] << " " << B[i] << endl;
  }
  
  // cout << "error" << endl;
  
  auto copy = elect;
  for(int k = 1; k < N+1;k++){
    copy = elect;
    for(int l = 0; l < (int)ifrest[k].size();l++){
      copy[ifrest[k][l]]++;
      // cout << ifrest[k][l] << "was added" << endl;
    }
    
    copy[k] -= ifrest[k].size();
    
    // cout << "copy:" ;
    // for(int C : copy){
    //   cout << C << " ";
    // }
    // cout << endl;
    
    int Max = 0;
    int index = 0;
    for(int i = 0;i < N+1;i++){
      if(Max < copy[i]){
        Max = copy[i];
        index = i;
      }
    }
    cout << index << endl;
  }
  
  
  return 0;
}