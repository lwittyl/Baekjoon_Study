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
        if (adj[v - 1][i] && !visited[i]){ //v와 인접해 있고, 아직 방문하지 않았다면 재귀 탐색
            DFS(i + 1, n);
        }
    }
}

void BFS(int v, int n){
    int cur;

    //맨 처음 방문하는 v q에 삽입 및 출력
    q.push(v - 1);
    cout << v << " ";
    visited[v - 1] = 1;

    while(!q.empty()){
        //q에 들어있는 vertex 빼면서 진행
        cur = q.front();
        q.pop();
        for (int i = 0; i < n; i++){
            if (adj[cur][i] && !visited[i]){//v와 인접해 있고, 아직 방문하지 않았다면 출력 및 q에 삽입
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

    //그래프 생성
    for (int i = 0; i < m; i++){
        cin >> v1 >> v2;
        adj[v1 - 1][v2 - 1] = 1;
        adj[v2 - 1][v1 - 1] = 1;
    }

    DFS(v, n);
    cout << endl;

    //visited 배열 초기화
    for(int i = 0; i < 1001; i++)
        visited[i] = 0;

    BFS(v, n);

    return (0);
}