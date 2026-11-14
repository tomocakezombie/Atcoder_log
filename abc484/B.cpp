#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K;
    cin >> K;
    vector<int> A(K);
    for(int i = 0;i < K;i++){
        cin >> A[i];
    } 

    sort(A.begin(), A.end());

    if(A[K-1] != 9){
        cout << -1 << endl;
    } else {
        cout << A[0] << endl;
    }
    return 0;
}