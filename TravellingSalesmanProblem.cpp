#include <iostream>
using namespace std;

#define N 4
#define INF 999

int main() {
    int graph[N][N] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int visited[N] = {0};
    int cost = 0;
    int current = 0;

    visited[current] = 1;

    for (int count = 0; count < N - 1; count++) {
        int next = -1;
        int min = INF;

        for (int i = 0; i < N; i++) {
            if (!visited[i] && graph[current][i] < min) {
                min = graph[current][i];
                next = i;
            }
        }

        visited[next] = 1;
        cost += min;
        current = next;
    }

    cost += graph[current][0]; // return to start

    cout << "Minimum Cost = " << cost;

    return 0;
}