#include <iostream>
using namespace std;

int main(void){
    int n, a, b, fight, count = 1;

    cin >> n >> a >> b;

    while (n != 0){ //안 만났을 때 종료조건

        //a가 홀수라면, 해당 라운드의 상대는 a+1, 짝수라면 a-1
        if (a % 2 == 1) 
            fight = a + 1;
        else
            fight = a - 1;

        if (fight == b){ //해당 라운드의 상대가 b라면 출력 후 종료
            cout << count;
            return (0);
        }

        //아니라면 조건 업데이트
        count ++;
        n /= 2;
        a = (a + 1) / 2;
        b = (b + 1) / 2;
    }

    cout << "-1";
    return (0);
}