#include<iostream>
using namespace std;
class rectangle 
{
    public:
    int length,breadth;
    rectangle()
    {
        cout<<"here!!";
    }
    int area() {
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+ breadth);

    }
    int main(){
rectangle();

    }
};