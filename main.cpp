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

void f3(const string& filename, const vector<string>& strings) {
    ofstream outputFile(filename);
    if (!outputFile.is_open()) {
        cerr << "Error " << filename << endl;
        return;
    }

    for (const auto& str : strings) {
        outputFile << str << endl;
    }

    outputFile.close();
}

int main() {

    f1();
    f2();
    f3();
}
