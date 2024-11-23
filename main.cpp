#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void f1() {

}

void f2(const vector<string>& strings) {
    for (const auto& str : strings) {
        cout << str << endl;
    }
}

void f3() {

}

int main() {

    f1();
    f2();
    f3();
}
