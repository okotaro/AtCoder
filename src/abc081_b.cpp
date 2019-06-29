#include <bits/stdc++.h>

int main()
{
    int N;
    int A[200];

    int cnt=0;

    std::cin >> N;
    for (int i=0; i<N; i++){ std::cin >> A[i]; }

    while(true){

        bool existsOdd = false;
        for (int i = 0; i < N; i++){
            if (A[i] % 2 != 0) { existsOdd = true; }
        }

        if (existsOdd == true) { break; }

        for (int i = 0; i < N; i++){
            A[i] /= 2;
        }

        cnt++;
    }

    std::cout << cnt << std::endl;

    return 0;
}