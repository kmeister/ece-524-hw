//
// Created by Kurt Meister on 4/4/20.
//

#include <iostream>
#include <chrono>

using namespace std;

double some_computation(int ii, int jj, int kk)
{
    return 1000000 / ((ii + jj + kk) * 1.0 + 0.1);
}

int main()
{
    const int IMAX = 1000000;
    const int JMAX = 100;
    const int KMAX = 50;

    chrono::steady_clock::time_point begin = chrono::steady_clock::now();

    for (int ii = 0; ii < IMAX; ii++){
        cout << "ii: " << ii << "\n";

        for (int jj = 0; jj < JMAX; jj++){
            for (int kk = 0; kk < KMAX; kk++){
                double junkvar = some_computation(ii, jj, kk);
            }
        }
    }

    chrono::steady_clock::time_point end = chrono::steady_clock::now();

    cout << " elapsed time: " << chrono::duration_cast<chrono::seconds>(end - begin).count() << "(s)\n";

}