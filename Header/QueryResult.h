//
// Created by 13152 on 2019/7/28.
//

#ifndef TEXTQUERY_QUERYRESULT_H
#define TEXTQUERY_QUERYRESULT_H

#include <iostream>
#include <set>
#include <map>
#include <string>
#include <memory>
#include <vector>
using namespace std;
class QueryResult {
    friend ostream & print(ostream &, const QueryResult&);
public:
	QueryResult(const string& s, shared_ptr<set<int>> p, shared_ptr<vector<string>> f) :sought(s),point(p),file(f){}
private:
    string sought;
    shared_ptr<set<int>> point ;
    shared_ptr<vector<string>> file;
    };

#endif //TEXTQUERY_QUERYRESULT_H
