#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for(int i = 0;i < N;i++){
        cin >> A[i];
    }
    for(int i = 0;i < N;i++){
        cin >> B[i];
    }
    
    bool isClear = true;
    for(int i = 0;i < N;i++){
      if(A[i] == B[i]){
        continue;
      }
      isClear = false;
    }
    if(isClear){
      cout << "Yes" << endl;
      return 0;
    }

    bool isSame = true;

    int judge_number = -1;
    for(int i = 0;i < N;i++){
        // cout << "i" << i << endl;
        // cout << "A:" << A[i] << " B:" << B[i] << endl;
        if(isSame == false){
            // cout << "judge_nuber" << judge_number << endl;
            // cout << "A" << A[i] << endl;
            if(A[i-1] == B[i] && A[i] == judge_number){
                if(A[i] == B[i+1]) continue;
                isClear = true;
                isSame = true;
                continue;
            }

            if(A[i-1 == B[i]]){
                continue;
            }
        }

        // 2
        if(A[i] != B[i] && judge_number != -1){
            // cout << "2" << endl;
            isClear = false;
            break;
        }

        if(A[i] != B[i]){
            judge_number = B[i];
            isSame = false;
            // cout << "judge" << judge_number << endl;
        }
    }

    if(isClear){
        cout << "Yes" << endl;
        return 0;
    }

    isSame = true;
    judge_number = -1;
    for(int i = 0;i < N;i++){
        // cout << "i" << i << endl;
        if(isSame == false){
        // cout << "i" << i << endl;
        // cout << "A:" << A[i] << " B:" << B[i] << endl;
            if(A[i] == B[i-1] && B[i] == judge_number){
                if(A[i+1] == B[i]) continue;
                // cout << "B[i]" << B[i] << "==" << judge_number << endl;
                isClear = true;
                isSame = true;
                continue;
            }

            if(A[i-1 == B[i]]){
                continue;
            }
        }

        // 2
        if(A[i] != B[i] && judge_number != -1){
            // cout << "breaked" << A[i] << " " << B[i] << endl;
            isClear = false;
            break;
        }

        if(A[i] != B[i]){
            judge_number = A[i];
            isSame = false;
            // cout << "judge_number" << judge_number << endl;
        }
    }

    if(isClear){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}