#include <iostream>
using namespace std;
int main() {
    float c;
    float f;
    cout << "輸入華氏溫度:";
    cin >> f;
    c = ((f - 32) * 5 / 9);
    cout << "攝氏溫度為:" << c;
}
