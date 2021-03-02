/*
#include <assert.h>
#include "ThirdPriorityQueue.h"
#include "TestP8.h"
#include <vector>
#include <exception>
#include <iostream>

using namespace std;

bool rel2(TPriority p1, TPriority p2) {
    return p1 <= p2;
}

bool rel1(TPriority p1, TPriority p2) {
    return p1 >= p2;
}

void testCreate() {
    cout << "Test create\n";
    ThirdPriorityQueue pq3(rel2);
    assert(pq3.atMostTwo());
    try {
        pq3.top();
        assert(false);
    }
    catch (exception&) {
        assert(true);
    }
    try {
        pq3.pop();
        assert(false);
    }
    catch (exception&) {
        assert(true);
    }
    pq3.push(5, 5);
    assert(pq3.atMostTwo());
    try {
        pq3.top();
        assert(false);
    }
    catch (exception&) {
        assert(true);
    }
    try {
        pq3.pop();
        assert(false);
    }
    catch (exception&) {
        assert(true);
    }
}

void testPush() {
    cout << "Test push\n";
    ThirdPriorityQueue pq3(rel2);
    for (int i = 0; i < 10; i++) {
        pq3.push(i, i);
    }
    assert(pq3.atMostTwo() == false);

    for (int i = -10; i < 20; i++) {
        pq3.push(i, i);
    }
    assert(pq3.atMostTwo() == false);

    for (int i = -100; i < 100; i++) {
        pq3.push(i, i);
    }
    assert(pq3.atMostTwo() == false);

    for (int i = -1000; i <= 1000; i++) {
        pq3.push(i, i);
    }
    assert(pq3.atMostTwo() == false);
    assert(pq3.top().second != 1000);
    assert(pq3.top().second == -998);

    assert(pq3.pop().second == -998);
    //cout<< pq3.pop().second;
    assert(pq3.top().second == -997);

    for (int i = -997; i <= -100; i++) {
        assert(pq3.top().second == i);
        assert(pq3.pop().second == i);
    }

}

void testPop() {
    cout << "Test pop\n";
    ThirdPriorityQueue pq3(rel2);
    for (int i = 0; i < 10; i++) {
        pq3.push(i, i);
    }
    assert(pq3.top().second == 2);
    assert(!pq3.atMostTwo());
    for (int i = -10; i < 20; i++) {
        pq3.push(i, i);
    }
    assert(pq3.top().second == -8);
    for (int i = 100; i > 50; i--) {
        pq3.push(i, i);
    }
    assert(pq3.top().second == -8);
    for (int i = -10; i < -1; i++) {
        assert(pq3.pop().second == i + 2);
    }

    assert(pq3.pop().second == 0);
    for (int i = 0; i < 8; i++) {
        assert(pq3.pop().second == i + 1);
        assert(pq3.pop().second == i + 1);
    }
    assert(pq3.pop().second == 9);
    assert(pq3.pop().second == 9);

    for (int i = 10; i < 19; i++) {
        assert(pq3.pop().second == i);
    }
    assert(pq3.pop().second == 19);
    for (int i = 51; i <= 100; i++) {
        assert(pq3.pop().second == i);
    }

    assert(pq3.atMostTwo() == true);


}

void testQuantity(Relation rel) {//add a lot of elements
    cout << "Test quantity\n";
    ThirdPriorityQueue pq3(rel);
    for (int i = 1; i <= 10; i++) {
        for (int j = 100; j >= -100; j--) {
            pq3.push(j, j);
        }
    }
    int count = 1;
    Element last = pq3.pop();
    while (pq3.atMostTwo() == false) {
        Element current = pq3.pop();
        assert(rel(last.second, current.second));
        count++;
        last = current;
    }
    assert(count == 2008);
}

void testP8() {
    testCreate(); // merge
    testPush();//nu merge ultimul for; face poc la -995 la pop()
    testPop(); //nu merge al 4 lea for
    testQuantity(rel2);
    testQuantity(rel1);

}
*/