// question no 1518

#include <iostream>
using namespace std;

int numWaterBottles(int numBottles, int numExchange) {
        int rem = numBottles/numExchange;
        int quo = numBottles % numExchange;
        int sum = numBottles + rem;
        while((rem + quo) >= numExchange){
            int rem2 = (rem + quo) / numExchange;
            int quo = (rem + quo) % numExchange;
            rem = rem2;
            sum += rem;

        }
        return sum;
    }

int main() {
    int n = 22;
    int e = 6;
    int ans = numWaterBottles(n,e);
    cout<<ans;
    return 0;
}