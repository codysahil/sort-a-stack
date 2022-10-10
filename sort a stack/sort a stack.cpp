#include <iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main() {
    stack<int> s;
    s.push(41);
    s.push(3);
    s.push(32);
    s.push(2);
    s.push(11);
    int n = s.size();
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = s.top();
        s.pop();
    }
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}