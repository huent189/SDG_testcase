int g = 1;              // 1
void test2(){           // 2
    int a = g;          // 3    DD = {1}
    if(g == 1){         // 4    DD = {1}
        g = g + a;      // 5    DD = {1, 3}, CD = {4}
    }                   // 6
    g = 2;              // 7    DD = {1, 5}, slicing = {1, 3, 4, 5}
    a = g;              // 8    DD = 7
}
