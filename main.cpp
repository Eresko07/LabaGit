#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
void f1(const string& filename, vector<string>& strings) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()){
        cerr << "Error " << filename << endl;
        return;
    }

    string line;
    while (getline(inputFile, line)) {
        strings.push_back(line);
    }

    inputFile.close();
}

void f2() {

}

void f3() {

}

int main() {

    f1();
    f2();
    f3();
}
