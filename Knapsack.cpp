#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int val[] = {60, 100, 120};   // values
    int wt[]  = {10, 20, 30};     // weights
    int W = 50;
    int n = 3;

    int K[4][51];

    for(int i = 0; i <= n; i++) {
        for(int w = 0; w <= W; w++) {
            if(i == 0 || w == 0)
                K[i][w] = 0;
            else if(wt[i-1] <= w)
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
            else
                K[i][w] = K[i-1][w];
        }
    }

    cout << "Maximum Profit = " << K[n][W];

    return 0;
}