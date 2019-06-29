#include <bits/stdc++.h>

int main()
{
    int N;
    int d[100] = {0};

    std::cin >> N;
    for(int i = 0; i < N; i++){ std::cin >> d[i]; }

    std::set<int> values;

    for (int i = 0; i < N; i++){
        values.insert(d[i]);
    }

    std::cout << values.size() << std::endl;

    return 0;
}