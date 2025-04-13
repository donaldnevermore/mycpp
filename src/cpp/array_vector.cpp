#include <cstdlib>
#include <vector>
using namespace std;

void run() {
    vector<int> fabonacci, lucas, pell, triangular, square, pentagonal;

    const int seq_cnt = 6;

    vector<int> *seq_addrs[seq_cnt] = {&fabonacci, &lucas, &pell, &triangular, &square, &pentagonal};

    vector<int> *current_vec = 0;

    for (int ix = 0; ix < seq_cnt; ++ix) {
        current_vec = seq_addrs[ix];
    }

    srand(seq_cnt);
    int seq_index = rand() % seq_cnt;
    current_vec = seq_addrs[seq_index];
}
