#include <bits/stdc++.h>

int main()
{
    int A, B, C, X;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;
    std::cin >> X;

    int pair = 0;

    for (int a = 0; a <= A; a++){
        for (int b = 0; b <= B; b++){
            for (int c = 0; c <= C; c++){
                if(X == 500 * a + 100 * b + 50 * c) { pair++; }
            }
        }
    }

    std::cout << pair << std::endl;

    return 0;
}