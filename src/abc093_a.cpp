#include <bits/stdc++.h>

int main()
{
    std::string s;
    std::cin >> s;

    bool a = false;
    bool b = false;
    bool c = false;

    for(auto e : s){
        if (e == 'a'){a = true;}
        else if (e == 'b'){b = true;}
        else if (e == 'c'){c = true;}
    }

    if (a == false || b == false || c == false){
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
    }

    return 0;
}