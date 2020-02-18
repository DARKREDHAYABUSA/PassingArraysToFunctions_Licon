//PassingArraysToFunctions
//Dr_T 2-17-2020

#include <iostream>
using namespace std;

void printArray(int[], int); //Prototype


int main() 
{
int numbers[8] = {23, 46, 12, 24, 1}; //5 of possible values
numbers[5] = 500; //assign 500 to the 6th element
numbers[6] = 1000;
numbers [7] = 89;

//get the size of numbers now that it has data
int numbers_array_size = sizeof(numbers) / sizeof(int);
cout << "This array has " << numbers_array_size << " values\n";

//call the printArray pass as argument numbers, numbers_array_size
printArray(numbers, numbers_array_size);
  return 0;
}
//Function definition
void printArray(int arrayVals[], int size)
{
  cout << "\nPrinted values: " << endl;
    for(int i = 0; i < size; i++)
{
  cout << arrayVals[i] << endl;
}

}