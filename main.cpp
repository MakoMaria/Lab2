#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void bubbleSort(list<string>& mylist) {
    int n = mylist.size();

    for (int i = 0; i < n - 1; i++) {
        auto it1 = mylist.begin();
        auto it2 = next(it1, 1);

        for (int j = 0; j < n - i - 1; j++) {
            // Convert to integers and compare
            int num1 = stoi(it1->substr(0, it1->find(" ")));
            int num2 = stoi(it2->substr(0, it2->find(" ")));

            if (num1 > num2) {
                swap(*it1, *it2);
            }

            advance(it1, 1);
            advance(it2, 1);
        }
    }
}


int main() {
    list<string> listok;
    string line;
    while (getline(cin, line)) {
//        if (line == "end") break;
        listok.push_back(line);
    }
    bubbleSort(listok);

    for (auto i : listok) {
        cout << i << " ";
    }
}