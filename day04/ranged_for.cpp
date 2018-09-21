//
// Created by maguire1815 on 21/09/2018.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
//    vector<int> v;
//    v.push_back(0);
//    v.push_back(2);
//    v.push_back(4);
//    v.push_back(5);
//    v.push_back(6);
//    v.push_back(7);
//    v.push_back(8);
//    v.push_back(9);

    int v[6];
    v[0] = 0;
    v[1] = 2;
    v[2] = 3;
    v[3] = 5;

    for (int i = 0 ; i < 6; i++) {
        cout << v[i] << endl;
    }

//    for (auto i : v) {
//        cout << i << endl;
//    }

//    for (int i = 0; i < v.size(); i++) {
//        cout << v[i] << endl;
//    }

    return 0;
}
