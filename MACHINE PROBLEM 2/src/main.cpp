#include <cstdlib>
#include <cstdio>
#include <array>
#include <iostream>

using namespace std;

int main(){
int row, column, input;
int seatCounter[36], inputCounter[35];
array<array <int, 7>, 5> seats{{
{ 1, 2, 3, 4, 5, 6, 7},
{ 8, 9,10,11,12,13,14},
{15,16,17,18,19,20,21},
{22,23,24,25,26,27,28},
{29,30,31,32,33,34,35}
}};
    do{
        for(row = 0; row < 5; row++){
        column = 0;
            while (column < 7){
                if (seats[row][column] < 10){
                    cout << " " << seats[row][column] << " ";
                }else{
                    cout << seats[row][column] <<" ";
                }
            column++;
            }
        cout << "\n";
        }


    cout << "Enter Seat to Reserve: ";
    cin >> input;
    cout << "\n";

    if (input > 35){
        cout << "Invalid Seat Number \n\n";
    } else if (input < 1){
        cout << "Invalid Seat Number \n\n";
    } else {
        inputCounter[input] = input;
        cout << "\n";
        if (inputCounter[input] == seatCounter [input]){
        cout << "Seat is Already Taken \n\n";
    } else{
        cout << "Seat Succesfully Reserved! \n\n";
    }    
    }


    
    row = 0;
    while (row < 5){
        column = 0;
        while (column < 7){
            if (seats[row][column] == input){
            seatCounter[input] = seats[row][column];
            seats[row][column] = 0;
            }
        column++;
        }
    row++;
    }


    }while (input != 5240920);


system("pause");
return EXIT_SUCCESS;
}