//
//  main.cpp
//  线性表（链表）
//
//  Created by liangqian on 2019/10/26.
//  Copyright © 2019 Mr.liang. All rights reserved.
//

#include "NodeList.hpp"
int main() {
    // insert code here...
    node_chain real;
    real.add_node(5);
    real.add_node(4);
    real.add_node(3);
    real.add_node(2);
    real.add_node(1);
    real.show_list();
    real.reverse_show();
    real.remove_node(5);
    real.show_list();
    real.sort();
    real.show_list();
    real.reverse_sort();
    real.show_list();
    return 0;
}
