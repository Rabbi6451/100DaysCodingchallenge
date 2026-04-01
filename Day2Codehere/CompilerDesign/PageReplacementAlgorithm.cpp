#include <iostream>
using namespace std;

int main() {
    int pages[50], frame[10], n, f, page_fault = 0, k = 0;

    cout << "Enter number of pages: ";
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> pages[i];

    cout << "Enter number of frames: ";
    cin >> f;

    for(int i = 0; i < f; i++)
        frame[i] = -1;

    for(int i = 0; i < n; i++) {
        bool found = false;

        for(int j = 0; j < f; j++) {
            if(frame[j] == pages[i]) {
                found = true;
                break;
            }
        }

        if(!found) {
            frame[k] = pages[i];
            k = (k + 1) % f;
            page_fault++;
        }
    }

    cout << "Page Faults: " << page_fault;
    return 0;
}