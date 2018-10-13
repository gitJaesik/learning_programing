//
// Created by maguire1815 on 26/09/2018.
//

#include <queue>
#include <vector>

#include <iostream>

using namespace std;

int main()
{

    // stl의 queue // vector와 같은 container
    // List<Integer> list <= vector와 비슷한 자바의 stl
    // Queue<Integer> queue <= queue와 비슷한 자바의 stl

    /*
     * | | | | | | | | | |
     * |1|
     * |1|5|
     * |1|5|2|
     */

    queue<int> q;
    q.push(1);
    q.push(5);
    q.push(2);
    q.push(10);
    q.push(110);

    vector<int> v;
    v.push_back(1);

    while(!q.empty()){
        cout << q.front() << endl;
        /*
         * |1|5|2|
         */
        q.pop();
        /*
         * |5|2|
         */
    }

    // algorithm 용어 중 하나가 FIFO
    // FIFO : First Input First Output
    // Queue

    rturn 0;
}

