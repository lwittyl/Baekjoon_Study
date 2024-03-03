#include <iostream>
#include <queue>
using namespace std;

int maze[101][101] = {0, };
bool visited[101][101] = {0, };
int dir_c[4] = {1, 0, -1, 0};
int dir_r[4] = {0, 1, 0, -1};

void find_path(int r, int c){
    queue <pair <int, int>> q;
    int cur_r, cur_c;
    //(0,0)을 처음 큐에 삽입
    q.push(make_pair(r, c));

    while(!q.empty()){
        //현재 row, column 업데이트
        r = q.front().first;
        c = q.front().second;
        q.pop();
        visited[r][c] = 0;
        //현재 row, column의 상하좌우 탐색
        for(int i = 0; i < 4; i++){
            cur_r = r + dir_r[i];
            cur_c = c + dir_c[i];
            if (cur_r >= 0 && cur_c >= 0){
                if (visited[cur_r][cur_c]){
                    q.push(make_pair(cur_r, cur_c));
                    visited[cur_r][cur_c] = 0;
                    maze[cur_r][cur_c] = maze[r][c] + 1; //지금까지 간 거리 maze에 저장
                }
            }
        }
    }
    return;
}

int main(void){
    int n, m;
    string str;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> str;
        for(int j = 0; j < m; j++){
            maze[i][j] = str[j] - '0';
            visited[i][j] = str[j] - '0';
        }
    }

    find_path(0, 0);
    cout << maze[n-1][m-1];

    return (0);
}