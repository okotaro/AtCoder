#include <bits/stdc++.h>

int main()
{
    int a, b, c, d;
    int sum = 0;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    if (a > b){
        sum += b;
    } else {
        sum += a;
    }
    
    if (c > d){
        sum += d;
    } else {
        sum += c;
    }
    
    std::cout << sum << std::endl;

    return 0;
}