#include <bits/stdc++.h>

int main()
{
    int N, Y;
    std::cin >> N >> Y;
    bool isFound = false;

    int a, b;
    for (a = 0; a <= N; a++){
        for (b = 0; b <= N - a; b++){
            if(Y == 10000 * a + 5000 * b + 1000 * (N - a - b)){
                isFound = true;
                break;
            }
        }

        if (isFound){ break; }
    }

    if (isFound){
        std::cout << a << " " << b << " " << N - a - b << std::endl;
    } else {
        std::cout << "-1 -1 -1" << std::endl;
    }
    return 0;
}