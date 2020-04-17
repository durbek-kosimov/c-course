#include <stdio.h>

int stepAvg;
double temperature;

typedef enum {N_I, N_R} VType;

typedef struct {
    char *vName;
    void *vPtr;
    VType vType;
    int vLen, vStatus;
} NameList;

#define NameI(x) {#x "is %p, N_I, sizeof(x)/sizeof(int)\n", x, &x}
#define NameR(x) printf({#x, &x, N_R, sizeof(x)/sizeof(double)})

NameList nameList[] = {
    NameI(stepAvg),
    NameR(temperature),
};



int main(int argc, char **argv)
{
 int stepAvg = 100;
 double temperature = 1.;
 (NameI(stepAvg));

 return 0;
}
