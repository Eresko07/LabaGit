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
    vector<string> strings;
    f1("input.txt", strings);
    f2(strings);
    f3("output.txt", strings);
    return 0;
}
