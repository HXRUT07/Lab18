#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect* A,Rect* B){
	double s_width,e_width,s_height,e_height,width,height;
	if(A->x > B->x){
        s_width = A->x;
    }
    else{
        s_width = B->x;
    }
    
    if(A->x + A->w < B->x + B->w){
        e_width = A->x + A->w;
    }
    else{
        e_width = B->x + B->w;
    }
    width = e_width - s_width;

    if(A->y > B->y){
        s_height = A->y;
    }
    else{
        s_height = B->y;
    }
    
    if(A->y + A->h < B->y + B->h){
        e_height = A->y + A->h;
    }
    else{
        e_height = B->y + B->h;
    }
    height = e_height - s_height;

    if(height <= 0 || width <= 0){
        return 0;
    }
    else{
        return height * width;
    }
}
