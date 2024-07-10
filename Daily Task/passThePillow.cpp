// question no 2582

#include<iostream>

using namespace std;

int passThePillow(int n, int t) {
    int cycleTime = n -1;
    int cycle = t/cycleTime;
    int steps = t % cycleTime;
    return cycle % 2 == 0 ? steps + 1 : n - steps;
}



int main() {
    int n = 5, t = 20;
    int person = passThePillow(n,t);
    cout<<person;
    return 0;
}