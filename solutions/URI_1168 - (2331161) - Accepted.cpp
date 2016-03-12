#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int vet[10], n;
    long long unsigned int led;
    string num;

    vet[0] = 6;
    vet[1] = 2;
    vet[2] = 5;
    vet[3] = 5;
    vet[4] = 4;
    vet[5] = 5;
    vet[6] = 6;
    vet[7] = 3;
    vet[8] = 7;
    vet[9] = 6;

    cin >> n;

    for(;n>0;n--){
        cin >> num;
        led = 0;
        for(char c: num){
            led += vet[c-48];
        }

        cout << led << " leds" << endl;
    }

    return 0;
}