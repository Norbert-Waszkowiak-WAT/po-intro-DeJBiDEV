#include <iostream>

using namespace std;

class Point{
public:
int x;
int y;
void print(){
    cout<<x<<" "<<y<<endl;
}
};

int main(){
Point p1;
p1.x=5;
p1.y=12;
p1.print();
return 0;
}