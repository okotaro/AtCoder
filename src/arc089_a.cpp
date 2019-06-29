#include <bits/stdc++.h>

// abc086_c

int main()
{
    int N;
    int t[100001], x[100001], y[100001];
    
    t[0] = x[0] = y[0] = 0;

    std::cin >> N;
    for (int i = 0; i < N ; i++){ std::cin >> t[i+1] >> x[i+1] >> y[i+1]; }

    bool can = true;

    for (int i = 0; i < N; i++){
        int dt = t[i+1] - t[i];
        int dist = std::abs(x[i+1] - x[i]) + std::abs(y[i+1] - y[i]);

        if (dist > dt) {
            can = false;
            break;
        }
        if (dist % 2 != dt % 2){
            can = false;
            break;
        }
    }

    if(can){
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}