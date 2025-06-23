#include<iostream>
#include<thread>
#include<cstdio>
#include<unistd.h>
using namespace std;

void task1()
{
    for(int i=0; i<10; i++)
    {
        printf("Task1 is running");
        fflush(stdout);
    }
}
void task2()
{
    for(int i=0; i<10; i++)
    {
        printf("Task2 is running");
        fflush(stdout);
    }
}

int main(){
    thread t1(task1);
    thread t2(task2);

    t1.join();
    t2.join();
    return 0;
}