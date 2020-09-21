int g;                  // 1
void test1(){           // 2
    g = 1;              // 4
    int a = g;          // 4    DD = {3}
    if(g == 1){         // 5    DD = {4}
        g = g + a;      // 6    DD = {3, 4}, CD = {5}
    }                   
    g = 2;              // 7    DD = {3, 6}
    a = g;              // 8    DD = 7
}
