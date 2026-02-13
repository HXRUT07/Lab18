#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
    double x, y, w, h;
};

double overlap(Rect A, Rect B){
    double x_overlap = min(A.x + A.w, B.x + B.w) - max(A.x, B.x);

    double y_overlap = min(A.y, B.y) - max(A.y - A.h, B.y - B.h);

    if(x_overlap > 0 && y_overlap > 0){
        return x_overlap * y_overlap;
    }
    else{
        return 0;
    }
}