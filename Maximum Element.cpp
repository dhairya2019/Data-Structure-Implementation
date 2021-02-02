#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;



int main() {
    vector<int> v1;
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int q;
        scanf("%d", &q);

        switch (q)
        {
        case 1:
            scanf("%d", &x);

            if (v1.empty()){
                v1.push_back(x);
            }
            else {
                v1.push_back(max(x, v1.back()));
                
            }
            break;

        case 2:
            if (!v1.empty()) {
                v1.pop_back();
            }
            break;

        case 3:
            printf("%d\n", v1.back());
            break;

        default:
            break;
        }
    }

    return 0;
}
