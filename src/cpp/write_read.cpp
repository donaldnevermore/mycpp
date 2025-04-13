#include <fstream>
#include <iostream>
using namespace std;

void outfile() {
    ofstream outfile("seq_data.txt", ios_base::app);
    if (!outfile) {
        cerr << "Oops! Unable to save session data!\n";
    } else {
        string usr_name;
        int num_tries;
        int num_right; // not in the book

        outfile << usr_name << ' ' << num_tries << ' ' << num_right << endl;
    }
}

void infile() {
    ifstream infile("seq_data.txt");

    int num_tries = 0;
    int num_cor = 0;
    string usr_name; // not in the book

    if (!infile) {
        cerr << "Oops! Unable to save session data!\n";
    } else {
        string name;
        int nt;
        int nc;

        while (infile >> name) {
            infile >> nt >> nc;
            if (name == usr_name) {
                cout << "Welcome back, " << usr_name << "\nYour current score is " << nc << " out of " << nt
                     << "\nGood luck!\n";

                num_tries = nt;
                num_cor = nc;
            }
        }
    }
}

void inoutfile() {
    fstream iofile("seq_data.txt", ios_base::in | ios_base::app);
    if (!iofile) {
        //
    } else {
        iofile.seekg(0);
        //
    }
}
