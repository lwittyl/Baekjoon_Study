#include <iostream>
#include <cstring>
using namespace std;

bool adj[101][101] = {0, };
bool visited[101] = {0};
int count = -1;

void DFS(int v, int n){
    visited[v - 1] = 1;
    count++;
    for (int i = 0; i < n; i++){
        if (adj[v - 1][i] && !visited[i]){ //v�� ������ �ְ�, ���� �湮���� �ʾҴٸ� ��� Ž��
            DFS(i + 1, n);
        }
    }
}

int main(void){
    int num, edge, v1, v2;

    cin >> num;
    cin >> edge;
    //�׷��� ����
    for (int i = 0; i < edge; i++){
        cin >> v1 >> v2;
        adj[v1 - 1][v2 - 1] = 1;
        adj[v2 - 1][v1 - 1] = 1;
    }

    DFS(1, num);

    cout << count;

    return (0);
}