// generator.cpp
#include <bits/stdc++.h>
using namespace std;

string rand_str(mt19937_64 &rng, int len) {
    static const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    uniform_int_distribution<int> dist(0, 25);
    string s;
    s.reserve(len);
    while (len--) s += alphabet[dist(rng)];
    return s;
}

int main(){
    mt19937_64 rng(
      chrono::high_resolution_clock::now()
        .time_since_epoch().count()
    );

    // Example: one test per run, a random-length string
    int L = uniform_int_distribution<int>(1, 10)(rng);
    cout << rand_str(rng, L) << "\n";
    return 0;
}
