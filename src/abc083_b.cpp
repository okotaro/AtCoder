#include <bits/stdc++.h>

int sumDigits(int num){
    int sum = 0;

    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int N, A, B;
    std::cin >> N >> A >> B;

    int sum = 0;

    for (int i = 1; i <= N; i++){
        int num = sumDigits(i);

        if (A <= num && num <= B){
            sum += i;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}