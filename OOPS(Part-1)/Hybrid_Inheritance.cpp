#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

// Hybrid inheritance: D inherits from B and C (multiple)
class D : public B, public C {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.showB();      // From B
    obj.showC();      // From C
    obj.showD();      // From D

    // obj.showA();   ? Ambiguity: which path to A?
    obj.B::showA();    // ? Clear path through B

    return 0;
}
