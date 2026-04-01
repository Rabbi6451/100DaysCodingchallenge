#include <iostream>
using namespace std;

int main() {
    int b[10], p[10], nb, np;

    cout << "Enter number of blocks: ";
    cin >> nb;
    for(int i = 0; i < nb; i++)
        cin >> b[i];

    cout << "Enter number of processes: ";
    cin >> np;
    for(int i = 0; i < np; i++)
        cin >> p[i];

    for(int i = 0; i < np; i++) {
        for(int j = 0; j < nb; j++) {
            if(b[j] >= p[i]) {
                cout << "Process " << i+1 << " allocated to block " << j+1 << endl;
                b[j] -= p[i];
                break;
            }
        }
    }
    return 0;
}