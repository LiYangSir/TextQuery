#include <iostream>
#include <fstream>
#include <string>
#include "../Header/TextQuery.h"
#include "../Header/QueryResult.h"
using namespace std;
int main() {
    ifstream in("..\\TextQuery.txt");
    TextQuery textQuery(in);
    cout << "please input a number of you think;" << endl;
    string word;
    cin >> word;
    QueryResult qr = textQuery.queryResult(word);
    print(cout,qr);
    return 0;
}