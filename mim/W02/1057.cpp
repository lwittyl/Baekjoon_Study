#include <iostream>
using namespace std;

int main(void){
    int n, a, b, fight, count = 1;

    cin >> n >> a >> b;

    while (n != 0){ //�� ������ �� ��������

        //a�� Ȧ�����, �ش� ������ ���� a+1, ¦����� a-1
        if (a % 2 == 1) 
            fight = a + 1;
        else
            fight = a - 1;

        if (fight == b){ //�ش� ������ ��밡 b��� ��� �� ����
            cout << count;
            return (0);
        }

        //�ƴ϶�� ���� ������Ʈ
        count ++;
        n /= 2;
        a = (a + 1) / 2;
        b = (b + 1) / 2;
    }

    cout << "-1";
    return (0);
}