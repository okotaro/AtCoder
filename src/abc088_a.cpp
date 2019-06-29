#include <bits/stdc++.h>

int main()
{
    int n, a;
    std::cin >> n;
    std::cin >> a;

    int amari = n % 500;

    if (amari <= a){
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}