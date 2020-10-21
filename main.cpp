#include <iostream>
using namespace std;

int main() {


    return 0;
}



/*//Psuedo code for selection sort
for (int i = 0; int i < N - 1; i++)
    smallest = array[i];
    for (int j = i + 1; j < N - 1 j++)
        if (array[j] > smallest) 
            smallest = array[j]
    Swap item[i] with item[smallest]


//Pseudo code for bubble sort
do (
    exchange flag = false
    for (each pair in the array)
        if (values are out of order)
            swap the values
            exchange flag = true
        endif
    endfor
    arraysize = arraysize - 1; //makes sure the largest value stays where it is
)   while (exchange flag is true)


while (exchange flag is true) {
    exchange flag = false
    for (each pair in the array)
        if (values are out of order)
            swap the values
            exchange flag = true
        endif
    endfor
    arraysize = arraysize - 1; //makes sure the largest value stays where it is
}


//Pseudo code for merge sort
while(neighter sequence is finished) {
    set a "current item" in each sequence
    if current item in sequence 1 > current item in sequence 2
        copy smaller item to output
        increase index of sequence with smaller item
    }*/