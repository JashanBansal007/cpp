#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int num = 1;     
    char c = 'a';     

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int idx = i * m + j;  

            if (idx % 2 == 0) {   
                cout << num;
                num++;
                if (num > 9) num = 1;
            } else {             
                cout << c;
                c++;
                if (c > 'z') c = 'a';
            }
        }
        cout << '\n';
    }

    return 0;
}