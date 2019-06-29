#include <bits/stdc++.h>

int main()
{
    std::string s;
    std::cin >> s;
    
    int cnt=0;

    if(s[0]=='1'){cnt++;}
    if(s[1]=='1'){cnt++;}
    if(s[2]=='1'){cnt++;}

    std::cout << cnt << std::endl;

    return 0;
}