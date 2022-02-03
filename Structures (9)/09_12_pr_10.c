#include<stdio.h>
typedef struct time{
    int hours;
    int min;
    int sec;
}time;

void display(time t){
    printf("The time is %d:%d:%d\n",t.hours,t.min,t.sec);
}

int timeCmp(time t1, time t2)
{
    // make decision on basis of seconds
    if(t1.sec>t2.sec)
    {
        return 1;
    }
    if(t1.sec<t2.sec)
    {
        return -1;
    }
    //make decision on basis of minute
    if (t1.min > t2.min)
    {
        return 1;
    }
    if (t1.min < t2.min)
    {
        return -1;
    }
    //make decision on basis of hours
    if (t1.hours > t2.hours)
    {
        return 1;
    }
    if (t1.hours < t2.hours)
    {
        return -1;
    }
    return 0;
}
int main(){
    time t1 ={12,25,45};
    time t2 = {6,4,20};
    display(t1);
    display(t2);
    int a = timeCmp(t1,t2);
    printf("Time comparison function returns: %d\n",a);


return 0;
}