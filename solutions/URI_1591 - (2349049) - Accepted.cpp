#include <iostream>
#include <string>
   
using namespace std;

int findCount(string str, string match){
    int count = 0;
    size_t pos;

    for(pos = str.find(match); pos != string::npos; pos = str.find(match, pos+1))
        count++;

    return count;
}

int main(int argc, const char * argv[])
{
    int t, l, c, i, j, toFind, count;
    string word, linha[51], coluna[51];

    cin >> t;
    for(; t > 0; t--){

        cin >> l >> c;
        for(i = 0; i < l; i++) {
            cin >> linha[i];
            for(j = 0; j < c; j++) {
                if(i == 0)
                    coluna[j] = "\0";
                coluna[j] += linha[i][j];
            }
        }

        cin >> toFind;

        for(; toFind > 0; toFind--){
            cin >> word;
            count = 0;
            for(i = 0; i < l; i++)
                count += findCount(linha[i], word);

            if(word.length() > 1) {
                for(i = 0; i < c; i++)
                    count += findCount(coluna[i], word);
            }

            cout << count << endl;
        }

    }

    return 0;
}