#include <bits/stdc++.h>
using namespace std;   

const long long MAX=1e6+2;
long long N, M, K;
vector<long long> arr;


int main() {
    cin >> N >> M >> K;
    for (long long i=0; i<N; i++) {
        long long largest_possible=N-i-1, adding;
        long long adder=min(K-largest_possible, M);
        if (adder==0) break;
        if (adder>i) {
            adding=min(i+1, M);
            adder=adding;
        }
        else {
            adding=arr[i-adder];
        }
        arr.push_back(adding);
        K-=adder;
    }
    if (K==0 && arr.size()==N) {
        for (long long i=0; i<N; i++) {
            cout << arr[i];
            if (i != N - 1) cout << " ";
        }
    }
    else {
        cout << -1;
    }
    cout << "\n";
}
