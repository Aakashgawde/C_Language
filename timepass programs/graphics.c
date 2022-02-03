#include<stdio.h>
#include<graphics.h>
int main(){
    int gd =DETECT,gm;
    initgraph(&gd,&gm,"C:\\tc\\bgi");
    circle(150,200,50);
    closegraph();

return 0;
}