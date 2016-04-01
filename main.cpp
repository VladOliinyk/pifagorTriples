#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

void int_func1(){

    int n = 10000;
    int counter = 0;

    ////////////////////////////// timer begin //////////////////////////////
    double start_time =  clock();

    for (int a = 1; a < n; a++) {
        for (int b = a+1; b < n; b++) {

            if ( !( (a % 2 == 1) && (b % 2 == 1) ) ) {
                double z = sqrt((a*a)+(b*b));
                //if ( ( z <= n ) && (modf(z, &intptr) == 0) )
                if ( ( z <= n ) && ( z - (int)z == 0) ) {
                    counter++;
                }
            }

        }
    }

    ////////////////////////////// timer end //////////////////////////////
    double end_time = clock();
    double search_time = end_time - start_time;
    cout<<(search_time/CLOCKS_PER_SEC)<<endl;


    counter*=2;
    cout << counter << endl;;

}

void int_func2(){

    int n = 10000;
    int counter = 0;

    ////////////////////////////// timer begin //////////////////////////////
    double start_time =  clock();

    for (int a = 1; a < n; a++) {
        for (int b = n; b > a; b--) {

            if ( !( (a % 2 == 1) && (b % 2 == 1) ) ) {
                double z = sqrt((a*a)+(b*b));
                //if ( ( z <= n ) && (modf(z, &intptr) == 0) )
                if ( ( z <= n ) && ( z - (int)z == 0) ) {
                    counter++;
                }
            }

        }
    }

    ////////////////////////////// timer end //////////////////////////////
    double end_time = clock();
    double search_time = end_time - start_time;
    cout<<(search_time/CLOCKS_PER_SEC)<<endl;


    counter*=2;
    cout << counter << endl;;

}

void double_func(){

    int n = 10000;
    int counter = 0;

    ////////////////////////////// timer begin //////////////////////////////
    double start_time =  clock();

    for (int a = 1; a < n; a++) {
        for (int b = a+1; b < n; b++) {

            if ( !( (a % 2 == 1) && (b % 2 == 1) ) ) {
                double z = sqrt((a*a)+(b*b));
                //if ( ( z <= n ) && (modf(z, &intptr) == 0) )
                if ( ( z <= n ) && ( z - (int)z == 0.0) ) {
                    counter++;
                }
            }

        }
    }

    ////////////////////////////// timer end //////////////////////////////
    double end_time = clock();
    double search_time = end_time - start_time;
    cout<<(search_time/CLOCKS_PER_SEC)<<endl;


    counter*=2;
    cout << counter << endl;;

}


int main()
{
    cout << "int func1: " << endl;
    int_func1();

    cout << "int func2: " << endl;
    int_func2();

    cout << "double func: " << endl;
    double_func();

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
