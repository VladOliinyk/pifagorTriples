
#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;


int main(int argc, char *argv[])
{
    ////////////////////////////// время //////////////////////////////
    double start_time =  clock();

    int n = 10000;
    int counter = 0;
    double intptr;

    for (int a = 1; a < n; a++) {
        for (int b = a+1; b < n; b++) {

            if ( !( (a % 2 == 1) && (b % 2 == 1) ) ) {
                double z = sqrt((a*a)+(b*b));
                if ( ( z <= n ) && (modf(z, &intptr) == 0) ) {
                    counter++;
                }
            }

        }
    }


    double end_time = clock();
    double search_time = end_time - start_time;
    cout<<(search_time/CLOCKS_PER_SEC)<<endl;
    ////////////////////////////// время //////////////////////////////

    counter*=2;
    cout << counter;
    return 0;
}


//if ( !( (a % 2 == 1) && (b % 2 == 1) ) ) {
//    double z = sqrt((a*a)+(b*b));
//    if ( ( z <= n ) && (modf(z, &intptr) == 0) ) {
//        counter++;
//    }
//}


//for (int a = 3; a < n; a++) {
//    for (int b = 3; b < n; b++) {

//        if ( !( (a % 2 == 1) && (b % 2 == 1) ) && () ) {
//            double z = sqrt((a*a)+(b*b));
//            if ( ( z <= n ) && (modf(z, &intptr) == 0) ) {
//                counter++;
//            }
//        }

//    }
//}
