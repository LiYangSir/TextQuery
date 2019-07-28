#ifndef TEXTQUERY_TEXTQUERY_H
#define TEXTQUERY_TEXTQUERY_H

#include <iostream>
#include <set>
#include <map>
#include <string>
#include <memory>
#include <fstream>
#include <sstream>
#include <vector>
#include "QueryResult.h"
using namespace std;
class QueryResult;
class TextQuery {
public:
    TextQuery(ifstream &);
    QueryResult queryResult(const string &);
private:
    shared_ptr<vector<string>> file;            //保存文件的内容
    map<string,shared_ptr<set<int>>> wp;
};


#endif //TEXTQUERY_TEXTQUERY_H
