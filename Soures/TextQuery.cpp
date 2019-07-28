//
// Created by 13152 on 2019/7/28.
//

#include "../Header/TextQuery.h"
TextQuery::TextQuery(ifstream &s):file(new vector<string>)
{
    string line;
    while (getline(s,line)){
        file->push_back(line);
        int n = file->size();
        istringstream in(line);
        string word;
        while(in >> word){
            auto &s = wp[word];
            if(!s)
                s.reset(new set<int>);
              //  s.reset(new set<int>);
            s->insert(n);
        }
    }
}
QueryResult TextQuery::queryResult(const string &str)
{
    static shared_ptr<set<int>> nodata(new set<int>);
    auto ss = wp.find(str);
    if(ss == wp.end())
        return QueryResult(str,nodata,file);
    else
        return QueryResult(str,ss->second,file);
}