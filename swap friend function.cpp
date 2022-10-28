#include <iostream>
using namespace std;
class swaap{
    int data;
    int temp1;
    public:
    void getdata(int a1){
        data=a1;
    }
    friend void swap1(swaap,swaap);

};
void swap1(swaap a,swaap b){
    a.temp1=a.data;
    a.data=b.data;
    b.data=a.temp1;
    cout<<a.data;
    cout<<b.data;



}

int main()
{
    swaap a,b;
    a.getdata(3);
    b.getdata(4);
    swap1(a,b);


return 0;
}
