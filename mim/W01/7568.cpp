#include <iostream>
using namespace std;

int main(void){
    int n, x, y;

    cin >> n;
    int *height = new int[n];
    int *weight = new int[n];
    int *rank = new int[n]();

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        height[i] = x;
        weight[i] = y;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (height[j] > height[i] && weight[j] > weight[i]){
                rank[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << rank[i] + 1 << " ";
    }
    return (0);
}