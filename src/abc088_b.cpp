#include <bits/stdc++.h>

int main()
{
    int N;
    int a[100] = {0};

    std::cin >> N;
    for(int i = 0; i < N; i++){ std::cin >> a[i]; }

    int aliceP = 0;
    int bobP = 0;

    std::sort(a, a + N, std::greater<int>());

    for(int i = 0; i < N; i++){
        if(i%2 == 0){
            aliceP += a[i];
        } else {
            bobP += a[i];
        }
    }
    
    std::cout << aliceP - bobP << std::endl;

    return 0;
}