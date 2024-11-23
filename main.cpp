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
    vector<string> strings;
    f1("input.txt", strings);
    f2(strings);
    f3("output.txt", strings);
    return 0;
}
