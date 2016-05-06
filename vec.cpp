#include <iostream>
#include <complex>
#include "vec.hpp"

using namespace std;
using namespace Vec;

int main(int argc, char *argv[]) {
    vec<3,double> a = {1., 2., 3.};
    vec<3,double> b = {3,  2,  1 };
    cout << a.norm() << endl;
    vec<3,double> d = a - b;
    d /= 2;
    cout << d.norm() << endl;
    vec<3> e(a);
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a == e) << endl;
    cout << (a != e) << endl;

    complex<int> I(0, 1);
    vec<2,complex<int>> c {1+I, 2-I};
    cout << c.norm() << endl;
    return 0;
}