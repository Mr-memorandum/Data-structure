//
//  LinearList.cpp
//  线性表（数组）
//
//  Created by 梁骞 on 2019/10/26.
//  Copyright © 2019 Mr.liang. All rights reserved.
//

#include "LinearList.hpp"
#include <iostream>
#include <string>
using namespace std;

Array_linearList::Array_linearList()
{
    array_length = 10;
    array = new int [array_length];
    list_size = 0;
}

Array_linearList::Array_linearList(int initialcapcity)
{
    if(initialcapcity<1)
    {
        cout<<"initial capcity must be >0."<<endl;
    }
    else
    {
        array_length = initialcapcity;
        array = new int [array_length];
        list_size = 0;
    }
}

Array_linearList::Array_linearList(const Array_linearList & s)
{
    array_length = s.array_length;
    list_size = s.list_size;
    array = new int [array_length];
    //copy(_InputIterator __first, _InputIterator __last, _OutputIterator __result)
    copy(s.array, s.array+list_size, array);
}

bool Array_linearList::judge_empty() const
{
    if(list_size == 0)
    {
        cout<<"empty linar list."<<endl;
        return 0;
    }
    else return 1;
}

int Array_linearList::size_list() const
{
    return list_size;
}

void Array_linearList::check_index(int index) const
{
    if(index<0 || index > list_size)
    {
        cout<<"index = "<< index <<"size = "<<list_size<<endl;
        throw "illegal index!";
    }
}

int & Array_linearList::get(int index) const
{
    check_index(index);
    return array[index];
}

int Array_linearList::index_find(const int & element) const
{
    int index = int (find(array, array+list_size, element) - array);
    if(index == list_size)
    {
        return -1;
    }
    else
    {
        return index;
    }
}

void Array_linearList::erase(int index)
{
    check_index(index);
    copy(array+index+1,array+list_size,array+index);
    list_size = list_size - 1;
}

void changelength1D(int *& a,int old_length,int new_length)
{
    int *temp_array = new int[new_length];
    int number = min(old_length,new_length);
    copy(a,a+number,temp_array);
    delete [] a;
    a = temp_array;
}

void Array_linearList::insert(int index,const int & element)
{
    if(index<0 || index>list_size)
    {
        cout<<"index = "<<index<<"size = "<<list_size;
        throw "illegal index";
    }
    if(list_size == array_length)
    {
        changelength1D(array,array_length,2*array_length);
        array_length *= 2;
    }
    copy_backward(array+index, array+list_size, array+list_size+1);
    array[index] = element;
    list_size++;
}
