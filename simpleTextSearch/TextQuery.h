//
// Created by zdy2001 on 2023/11/13.
//

#ifndef SIMPLETEXTSEARCH_TEXTQUERY_H
#define SIMPLETEXTSEARCH_TEXTQUERY_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <memory>
#include <map>
#include <set>
#include <sstream>
using line_no = std::vector<std::string>::size_type;
class QueryResult{
    friend std::ostream &print(std::ostream&,const QueryResult&);
public:
    QueryResult(std::string s,
                std::shared_ptr<std::set<line_no>> p,
                std::shared_ptr<std::vector<std::string>> f):sought(s),lines(p),file(f){};
private:
    std::string sought;
    std::shared_ptr<std::set<line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;
};
class TextQuery{
public:

    explicit TextQuery(std::ifstream &);
    QueryResult query(const std::string &) const;
private:
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string,std::shared_ptr<std::set<line_no>>> wm;
};
#endif //SIMPLETEXTSEARCH_TEXTQUERY_H
