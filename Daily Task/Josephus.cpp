// question no 1823

#include<iostream>
#include<vector>
using namespace std;

// int findTheWinner(int n, int k) {
//         // Initialize vector of N friends, labeled from 1-N
//         vector<int> circle;
//         for (int i = 1; i <= n; i++) {
//             circle.push_back(i);
//         }

//         // Maintain the index of the friend to start the count on
//         int startIndex = 0;

//         // Perform eliminations while there is more than 1 friend left
//         while (circle.size() > 1) {
//             // Calculate the index of the friend to be removed
//             int removalIndex = (startIndex + k - 1) % circle.size();

//             // Erase the friend at removalIndex
//             circle.erase(circle.begin() + removalIndex);

//             // Update startIndex for the next round
//             startIndex = removalIndex;
//         }

//         return circle.front();
//     }

int winnerHelper(int n, int k) {
        if (n == 1) return 0;
        int ans = (winnerHelper(n - 1, k) + k) % n;
        cout<<ans;
        return ans;
    }

int main() {
    int n = 6;
    int k = 5;
    int ans = winnerHelper(n,k) + 1;
    cout<<ans;
    return 0;
}