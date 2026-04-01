#include <iostream>
using namespace std;

int main() {
    int n, time = 0, remain, time_quantum;
    int bt[20], rt[20], wt[20], tat[20];

    cout << "Enter number of processes: ";
    cin >> n;

    remain = n;

    for(int i = 0; i < n; i++) {
        cout << "Enter burst time for process " << i + 1 << ": ";
        cin >> bt[i];
        rt[i] = bt[i]; // remaining time
    }

    cout << "Enter time quantum: ";
    cin >> time_quantum;

    while(remain != 0) {
        for(int i = 0; i < n; i++) {
            if(rt[i] > 0) {
                if(rt[i] <= time_quantum) {
                    time += rt[i];
                    rt[i] = 0;
                    remain--;

                    tat[i] = time;
                    wt[i] = tat[i] - bt[i];
                } else {
                    rt[i] -= time_quantum;
                    time += time_quantum;
                }
            }
        }
    }

    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for(int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t" << bt[i] << "\t\t"
             << wt[i] << "\t\t" << tat[i] << endl;
    }

    return 0;
}