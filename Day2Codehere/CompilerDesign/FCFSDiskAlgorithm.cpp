#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int req[50], n, head, total = 0;

    cout << "Enter number of requests: ";
    cin >> n;

    cout << "Enter request sequence:\n";
    for(int i = 0; i < n; i++)
        cin >> req[i];

    cout << "Enter initial head position: ";
    cin >> head;

    for(int i = 0; i < n; i++) {
        total += abs(req[i] - head);
        head = req[i];
    }

    cout << "Total seek time: " << total;
    return 0;
}