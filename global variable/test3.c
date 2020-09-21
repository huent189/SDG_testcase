int g;                      //1
void func1(){
    int a = 2;              //2
    add(a);                 //3     DD = {1, 2};
    while (g > 0)           //4     DD = {6}    TD = {3, 4}
    {
        g = g - a;          //5     DD = {6, 2}     CD = {4}    TD = {3, 4}
    }
}
void add(int param1){       // in(param1) = {3};
    g = g + param1;         //6     DD = {1, param1}
}