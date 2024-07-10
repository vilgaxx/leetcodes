// question no 1701

#include<iostream>
#include<vector>
using namespace std;

double averageWaitingTime(vector<vector<int>>& customers) {
        int customer = customers.size();
        int nextOrder = customers[0][0];
        double avgWait = 0;
        for (int i = 0; i < customer; i++)
        {
            nextOrder = max(nextOrder,customers[i][0]) + customers[i][1];           
            avgWait = avgWait + (nextOrder - customers[i][0]);
            
        }
        return (avgWait/customer);
        
    }

int main() {
    vector<vector<int>> customers = {{5,2},{5,4},{10,3},{20,1}};
    double nextOrder = averageWaitingTime(customers);
    cout<<nextOrder;
    return 0;
}