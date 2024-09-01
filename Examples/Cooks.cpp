#include <bits/stdc++.h>
#include <vector>
using namespace std;
int minTimeToCompleteOrder(vector<int>& rank, int M) {
    int N = rank.size();
    sort(rank.begin(), rank.end(), greater<int>());
    int low = 1, high = M * rank[0];
    while (low < high) {
        int mid = low + (high - low) / 2;
        int dishes = 0;
        for (int i = 0; i < N; ++i) {
            dishes += mid / rank[i];
        }
        if (dishes < M) low = mid + 1;
        else high = mid;
    }
    return low;
}
int main() {
    int N, M;
    cin >> N;
    vector<int> rank(N);
    for (int i = 0; i < N; ++i) {
        cin >> rank[i];
    }
    cin >> M;
    int result = minTimeToCompleteOrder(rank, M);
    cout<< result << endl;
    return 0;
}
