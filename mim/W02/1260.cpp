#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

bool adj[1001][1001] = {0, };
bool visited[1001] = {0};
queue <int> q;

void DFS(int v, int n){
    visited[v - 1] = 1;
    cout << v << " ";
    for (int i = 0; i < n; i++){
        if (adj[v - 1][i] && !visited[i]){ //v�� ������ �ְ�, ���� �湮���� �ʾҴٸ� ��� Ž��
            DFS(i + 1, n);
        }
    }
}

void BFS(int v, int n){
    int cur;

    //�� ó�� �湮�ϴ� v q�� ���� �� ���
    q.push(v - 1);
    cout << v << " ";
    visited[v - 1] = 1;

    while(!q.empty()){
        //q�� ����ִ� vertex ���鼭 ����
        cur = q.front();
        q.pop();
        for (int i = 0; i < n; i++){
            if (adj[cur][i] && !visited[i]){//v�� ������ �ְ�, ���� �湮���� �ʾҴٸ� ��� �� q�� ����
                cout << i + 1 << " ";
                visited[i] = 1;
                q.push(i); 
            }
        }
    }
}

int main(void){
    int n, m, v, v1, v2;

    cin >> n >> m >> v;

    //�׷��� ����
    for (int i = 0; i < m; i++){
        cin >> v1 >> v2;
        adj[v1 - 1][v2 - 1] = 1;
        adj[v2 - 1][v1 - 1] = 1;
    }

    DFS(v, n);
    cout << endl;

    //visited �迭 �ʱ�ȭ
    for(int i = 0; i < 1001; i++)
        visited[i] = 0;

    BFS(v, n);

    return (0);
}