#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<limits.h>

bool isDigit(const char Symbol) {
    return Symbol >= '0' && Symbol <= '9';
}

int main() {
    std::map<char, long long> Counters;
    for (int i = 0; i <= 9; ++i) {
        Counters.insert(std::pair<char, long long>('0' + i, 0));
    }
    char Path[PATH_MAX];
    std::cin.getline(Path, PATH_MAX);
    //std::cout << Path << std::endl;
    std::ifstream In;
    In.open(Path);
    char Current;
    while(In >> Current) {
        if (isDigit(Current)) {
            Counters[Current] += 1;
        }
    }
    for (int i = 0; i <= 9; ++i) {
        std::cout << static_cast<char>('0' + i) << " " << Counters['0' + i] << std::endl;
    }
    return 0;
}
