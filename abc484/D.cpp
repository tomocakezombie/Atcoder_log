#incldue <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for(int &i:A){
        cin >> i;
    }

    set<vector<int>> S;

    for(int i = 0; i < N;i++){
        int Y = A[i];
        for(int j = i;j >= 0;j--){
            
            vector<int> forPush;
            for(int k = 0; k < j;k++){
                forPush.push_back(A[k]);
            }
            forPush.push_back(Y);
            for(int k = j;j < N;k++){
                forPush.push_back(A[k]);
            }
            
            S.insert(forPush);
        }
    }

    cout << S.size() << endl;
    return 0;
}