#include<iostream>
#define MAX_E 15
#define MAX_S 28
#define MAX_M 19
using namespace std;

int main(void)
{
    int E, S, M, year;
    cin >> E >> S >> M;

    year = 1;
    
    if (E == MAX_E) E = 0;
    if (S == MAX_S) S = 0;
    if (M == MAX_M) M = 0;

    while(true) {
        if (year % MAX_E == E && year % MAX_S == S && year % MAX_M == M) {
            cout << year << endl;
            break;
        }
        year++;
    }

    return 0;
}
