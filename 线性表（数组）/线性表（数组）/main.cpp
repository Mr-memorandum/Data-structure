//
//  main.cpp
//  线性表（数组）
//
//  Created by 梁骞 on 2019/10/26.
//  Copyright © 2019 Mr.liang. All rights reserved.
//

#include <iostream>
#include "LinearList.hpp"
using namespace std;
int main()
{
    Array_linearList real;
    for(int i = 0;i<10;i++)
    {
        real.insert(i,i+1);
    }
    real.insert(3, 1);
    real.insert(4, 2);
    real.output_mirror_list();
    cout<<endl;
    real.erase(3);
    real.output_mirror_list();
    cout<<"over"<<endl;;
    return 0;
}
