#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b;
    
    cin >> a >> b;
    
    if (a > b) {
        cout << a - 1 << endl;
    }else{
        cout << a << endl;
    }
    
    return 0;
}
