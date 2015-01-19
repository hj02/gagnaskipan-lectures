#ifndef __DEBUGUTILS__
#define __DEBUGUTILS__

#include<iostream>
#include<vector>

using namespace std;

bool DEBUG = true;

template<class T>
ostream& operator<<(ostream &out, const vector<T>& v) {
    for(size_t i = 0; i < v.size(); i++) {
        out << v[i] << ' ';
    }
    return out;
}

template<class T>
void print(T t) {
    if(!DEBUG) {
        return;
    }
    cout << t;
}

template<class T>
void print(T *t, int len) {
    if(!DEBUG) {
        return;
    }
    for(int i = 0; i < len; i++) {
        print(t[i]);
        print(' ');
    }
    print('\n');
}

template<class T>
void println(T t) {
    if(!DEBUG) {
        return;
    }
    print(t);
    cout << endl;
}

template<class T, class U>
void println(T t, U u) {
    print(t);
    print(' ');
    println(u);
}


#endif