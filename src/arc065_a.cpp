#include <bits/stdc++.h>

// abc049_c

int main()
{
    std::string divide[4] = {"dream", "dreamer", "erase", "eraser"};

    std::string S;
    std::cin >> S;

    std::reverse(S.begin(), S.end());
    for (int i = 0; i < 4; i++){ std::reverse(divide[i].begin(), divide[i].end()); }

    bool canDivideAll = true;
    for (int i = 0; i < (int)S.size(); ){
        bool canDivide = false;
        for (int j = 0; j < 4; j++){
            std::string d = divide[j];
            if (S.substr(i, d.size()) == d){
                i += d.size();
                canDivide = true;
                break;
            }
        }
        if (canDivide == false){
            canDivideAll = false;
            break;
        }
    }

    if (canDivideAll){
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}