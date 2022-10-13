#include<unistd.h>
#include<stdio.h>
void putt(int n)
{
    if (n < 0)
    {
        write(1,"-",1);
        n = -1;
    }
    if(n % 10 == 0)
    {
        n = n + 48;
        write(1,&n,1);
    }
    else{
        putt(n / 10);
        n = (n % 10) + 48;
        write(1,&n,1);
    }
}
int main(int argc, char const *argv[])
{
    
    return 0;
}
