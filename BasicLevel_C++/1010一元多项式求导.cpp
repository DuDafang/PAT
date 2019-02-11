#include <iostream>//柳神的解法，我的方法有两个点过不 
using namespace std;
int main() {
    int a, b, flag = 0;//flag标记是一个好方法
	//这个就是保证在b为0之前有其他次方 
	//为什么会存在flag这个呢，因为会有一种可能，就是第一次输入是x 0，此时需要直接输出 
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
