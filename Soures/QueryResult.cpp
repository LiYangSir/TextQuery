//
// Created by 13152 on 2019/7/28.
//

#include "../Header/QueryResult.h"

ostream & print(ostream & out, const QueryResult &qr) {
    out << qr.sought << " occurs " << qr.point->size() << " "
        << (qr.point->size()>1 ? "times" : "time") << endl;
    for (auto num : *qr.point) {
        out << num << " " << *(qr.file->begin()+ num - 1) <<endl;
    }
    return out;
}