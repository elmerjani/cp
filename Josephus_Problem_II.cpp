#include <iostream>
#include <set>

using namespace std;

void josephus(int n, int k) {
    set<int> children;
    for (int i = 1; i <= n; i++) {
        children.insert(i);
    }
    
    auto it = children.begin();
    
    while (!children.empty()) {
        // Move iterator k-1 times in circular manner
        for (int i = 0; i < k - 1; i++) {
            it++;
            if (it == children.end()) it = children.begin(); // Wrap around
        }
        
        // Output the current element to be removed
        cout << *it << " ";
        
        // Get the next iterator before erasing
        auto next_it = next(it);
        if (next_it == children.end()) next_it = children.begin();
        
        // Remove the element
        children.erase(it);
        
        // Update the iterator
        it = next_it;
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n >> k;
    josephus(n, k);
    return 0;
}
