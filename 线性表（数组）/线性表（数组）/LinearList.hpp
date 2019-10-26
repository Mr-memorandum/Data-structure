//
//  LinearList.hpp
//  线性表（数组）
//
//  Created by 梁骞 on 2019/10/26.
//  Copyright © 2019 Mr.liang. All rights reserved.
//

#ifndef LinearList_hpp
#define LinearList_hpp

#include <vector>
#include <iostream>
using namespace std;
class linearList
{
public:
    virtual ~linearList()
    {
        
    }
    virtual bool judge_empty() const = 0;//return true if empty
    virtual int size_list() const = 0;//return numbers of elements
    virtual int & get(int index) const = 0;
    virtual int index_find(const int & element) const = 0;
    virtual void erase(int index) = 0;
    virtual void insert(int index, const int & element) = 0;
};

class Array_linearList:public linearList
{
private:
    int *array;
    int array_length;
    int list_size;
    void check_index(int index) const;
public:
    vector<int> _mirror;
    Array_linearList();
    Array_linearList(int initialcapcity);
    Array_linearList(const Array_linearList & s);
    ~Array_linearList()
    {
        
    }
    
    bool judge_empty() const;
    int size_list() const;
    int& get(int index) const;
    int index_find(const int & element) const;
    void erase(int index);
    void insert(int insert, const int & element);
    
    int capcity() const {return array_length;}
    void output_mirror_list()
    {
        vector<int> mirror;
        int l;
        l = list_size;
        for(int i=0;i<l;i++)
        {
            mirror.push_back(array[i]);
        }
        for(int i = 0;i<l;i++)
        {
            cout<<mirror[i]<<" ";
        }
        mirror.clear();
    }
};

#endif /* LinearList_hpp */
