#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int sum = 0;
    for(int i = 0;i < N - 1;i++){
        int input;
        cin >> input;
        sum += input;
    }

    cout << -sum << endl;
    return 0;
}