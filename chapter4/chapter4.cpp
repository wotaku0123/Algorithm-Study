// 1 から　Nまでの総和を計算する再帰関数
#include <iostream>
#include <vector>
using namespace std;

int func(int N)
{
    cout << "func(" << N << ") を呼び出しました" << endl;

    if(N == 0) return 0;

    int result = N + func(N - 1);
    cout << N << "までの和 = " << result << endl;
    return result; 
}

//ユークリッドの互除法
int GCD(int m, int n) // m > n
{
    if(n == 0) return m;

    return  GCD(n, m%n);
}

//fibonacci数列を求める再帰関数(recursion function)
int fibo(int N)
{
    if(N == 0) return 0;
    else if(N == 1) return 1;

    return fibo(N - 1) + fibo(N - 2);
}

//fibonacci関数をfor文を用いて実装
void fibo_with_for(int N)
{
    vector<long long> F(N);
    F[0] = 0, F[1] = 1;
    for(int N = 2; N < 50; ++N)
    {
        F[N] = F[N - 1] + F[N - 2];
        cout << N << "項目" << F[N] << endl;
    }
}

int main()
{
    func(5);

    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;

    cout << "Fibonacci(6): " << fibo(6) << endl;

    cout << "fibonacci関数をfor文を用いて実装" << endl;
    fibo_with_for(50);

    return 0;
}

