#include "source.h"




//Function Prototype No.1
char string_reverser(char string[], int size)
{
if(size == 0){return 1;}
else{
char temp;
int start = size - size; 
temp = string[size]; string[start]; string[size] = temp;}
return string_reverser(string, size -1);
}
//Function Prototype No.2
int sum_digit(int num, int num1, int num3)
{
num3 = 1;
num1 = num/num3;
return sum_digit(num, num1, num3 * 10);
}
//Function Prototype No.3
char Maze(char arru[8][8],int i ,int j)
{
if(i == 7 && j == 7){return 1;}
if(arru[i + 1][j] == ' '){++i;}
if(arru[i][j + 1] == ' '){++j;}
if(arru[i - 1][j] == ' '){--i;}
if(arru[i][j - 1] == ' '){--j;}
return Maze(arru, i, j);
}