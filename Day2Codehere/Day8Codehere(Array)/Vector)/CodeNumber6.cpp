#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    
    unordered_set<int> s;
    
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        s.insert(num);
    }
    
    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        
        if(s.find(x) != s.end()){
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
    
    return 0;
}
/*
Input :
5 3
1 5 4 3 2
5
3
6
Output : 
found
found
not found
*/