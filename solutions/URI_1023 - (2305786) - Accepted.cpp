#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
 
using namespace std;

class House
{
public:

    long unsigned int people;
    long unsigned int media;

    House(long unsigned int peo, long unsigned int med){
        people = peo;
        media = med;
    }
    
};

static bool mySort(House* a, House* b){
    return a->media < b->media;
}
 
int main(int argc, const char * argv[])
{
    long unsigned int i, peo, cons, size, city = 0;
    long unsigned int N, sum, peoples, house[201] = {0};
    vector<House*> v;
    cout.precision(2);
    while(cin >> N && N != 0){
        city++;
        if(city > 1)
            cout << endl;

        v = vector<House*>();
        sum = 0;
        peoples = 0;

    	for(i = 0; i < N; i++){
    		cin >> peo >> cons;
            sum += cons;
            peoples += peo;
            
            house[(int)(floor(cons/(double)peo))] += peo;
    	}

        for(i = 0; i < 201; i++){
            if(house[i] > 0)
                v.push_back(new House(house[i], i));

            house[i] = 0;
        }

        sort(v.begin(), v.end(), mySort);

        cout << "Cidade# "<< city << ":" << endl;
        size = v.size();
        for(i = 0; i < size; i++){
            if(i == 0)
                cout << v.at(i)->people << "-" << v.at(i)->media;
            else
                cout << " " << v.at(i)->people << "-" << v.at(i)->media;
        }

    	cout << endl << "Consumo medio: " << fixed << (((sum*1.0)/(peoples*1.0))-0.0049999999) << " m3." << endl;
    }

    return 0;
}