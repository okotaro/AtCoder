#include <bits/stdc++.h>

int main()
{
    int x, a, b;
    std::cin >> x;
    std::cin >> a;
    std::cin >> b;
    
    x -= a;

    std::cout << x % b << std::endl;
    
    return 0;
}