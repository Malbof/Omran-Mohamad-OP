#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void ArrayOutput(int* arr, int size); 
void sortArray(int* arr, int size); 
string removeStartAndEndSpaces(string s);
void FromStringToArray(string s, int* a, int size);
int sizeArray(string s); 

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Enter a string of numbers and spaces: ";
    string str;
    getline(cin, str); 
    str = removeStartAndEndSpaces(str);
    int numbersCounter = sizeArray(str); 
    int* a = new int[numbersCounter]; 
    FromStringToArray(str, a, numbersCounter);
    sortArray(a, numbersCounter);
    cout << "Sorted numbers: ";
    ArrayOutput(a, numbersCounter);
}

string removeStartAndEndSpaces(string s)
{  
    while (isspace(s[0])) {   
        s.erase(0, 1);
    }
    
    int pos = s.size() - 1;
    while (isspace(s[pos])) {  
        s.pop_back();
        pos--;
    }
    return s;
}

int sizeArray(string s)
{
    int counter = 0, size = 0;
    while (counter < s.size())
    { 
        if (s[counter] != ' ')
        {
            size++;
            while (s[counter] != ' ' && counter < s.size()) {
                counter++;
            }
        }
        else {
            while (s[counter] == ' ' && counter < s.size()) {
                counter++;
            }
        }
    }
    return size;
}

void FromStringToArray(string s, int* a, int size)
{   
    string rez; 
    int pos; 
    for (int i = 0; i < size; ++i) {
        pos = s.rfind(' '); 
        if (pos == -1) 
        {  
            a[i] = atoi(s.c_str()); 
        }
        else
        {
            rez = s.substr(pos + 1);  
            a[i] = atoi(rez.c_str()); 
            for (int j = pos+1; j < s.size(); ++j) 
            {  
                s.erase(j);
            }
            while (s[pos] == ' ') 
            {  
                s.erase(pos);
                pos--;
            }
        }
    }
}

void sortArray(int* arr, int size)
{ 
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void ArrayOutput(int* arr, int size)
{
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
}