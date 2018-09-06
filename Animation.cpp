#include <cstring>
#include <iostream>
#include <unistd.h>

void printSomething(const char *str);

int main(){
        
        printSomething("you "); 
        printSomething("can't "); 
        printSomething("see "); 
        printSomething("me");




        write(1,"\33[2A\r", 5); //erase line
        write(1,"\33[1K", 4); // move 1 line up
        write(1,"\33[2A\r", 5); //erase line and carriage return
        
        printSomething("Ohh .. yeah!!\n");

        system("pause");
        return 0;
}

void printSomething(const char *str) {
    write(1,str,strlen(str));
    usleep(400000);
}