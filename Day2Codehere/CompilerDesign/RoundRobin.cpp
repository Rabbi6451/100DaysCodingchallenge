#include <iostream>
using namespace std;

int main() {
    int n, tq, time = 0, remain;
    int bt[20], rt[20], wt[20], tat[20];

    cout << "Enter number of processes: ";
    cin >> n;

    remain = n;

    for(int i = 0; i < n; i++) {
        cout << "Enter burst time: ";
        cin >> bt[i];
        rt[i] = bt[i];
    }

    cout << "Enter time quantum: ";
    cin >> tq;

    while(remain != 0) {
        for(int i = 0; i < n; i++) {
            if(rt[i] > 0) {
                if(rt[i] <= tq) {
                    time += rt[i];
                    rt[i] = 0;
                    remain--;
                    tat[i] = time;
                    wt[i] = tat[i] - bt[i];
                } else {
                    rt[i] -= tq;
                    time += tq;
                }
            }
        }
    }

    cout << "\nP\tBT\tWT\tTAT\n";
    for(int i = 0; i < n; i++)
        cout << i+1 << "\t" << bt[i] << "\t" << wt[i] << "\t" << tat[i] << endl;

    return 0;
}