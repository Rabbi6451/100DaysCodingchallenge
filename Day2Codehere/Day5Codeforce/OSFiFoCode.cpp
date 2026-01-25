#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int frames, pages;
    cout << "Enter number of frames: ";
    cin >> frames;
    cout << "Enter number of pages: ";
    cin >> pages;
    
    vector<int> pageRef(pages);
    cout << "Enter page reference string: ";
    for(int i = 0; i < pages; i++)
        cin >> pageRef[i];
    
    vector<int> memory;
    queue<int> q;
    int faults = 0;
    
    for(int i = 0; i < pages; i++) {
        bool found = false;
        
        for(int j = 0; j < memory.size(); j++) {
            if(memory[j] == pageRef[i]) {
                found = true;
                break;
            }
        }
        
        if(!found) {
            if(memory.size() < frames) {
                memory.push_back(pageRef[i]);
                q.push(pageRef[i]);
            } else {
                int front = q.front(); q.pop();
                for(int j = 0; j < memory.size(); j++) {
                    if(memory[j] == front) {
                        memory[j] = pageRef[i];
                        break;
                    }
                }
                q.push(pageRef[i]);
            }
            faults++;
        }
    }
    
    cout << "Page Faults: " << faults << endl;
    return 0;
}