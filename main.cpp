//PassingArraysToFunctions
//Dr_T 2-17-2020

#include <iostream>
using namespace std;

void printArray(int[], int); //Prototype
void sortArrAsc(int[], int);


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


//Using Bubble Sort to sort array Asc
void sortArrAsc(int arrayVals[], int size)
{
  int temp = 0; //needed for swap process
  for(int left = 0; left < size; left++) //number on left
{
  //the number on the right
  for(int right = left+1; right < size; right++)
 {
  //the swap magic happens here
  //Bubble sort: compare the left num to the right num
  //swap, if neccessary
  if(arrayVals[left] > arrayVals[right])
{
    temp = arrayVals[left];
    arrayVals[left] = arrayVals[right];
    arrayVals[right] = temp;
    }
  }
}
  //call the printArray function here
  printArray(arrayVals, size);
}