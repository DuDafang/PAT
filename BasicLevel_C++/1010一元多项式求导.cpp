#include <iostream>//����Ľⷨ���ҵķ�������������� 
using namespace std;
int main() {
    int a, b, flag = 0;//flag�����һ���÷���
	//������Ǳ�֤��bΪ0֮ǰ�������η� 
	//Ϊʲô�����flag����أ���Ϊ����һ�ֿ��ܣ����ǵ�һ��������x 0����ʱ��Ҫֱ����� 
    while (cin >> a >> b) {
        if (b != 0) {
            if (flag == 1) cout << " ";
            cout << a * b << " " << b - 1;
            flag = 1;
        }
    }
    if (flag == 0) cout << "0 0";
    return 0;
}
