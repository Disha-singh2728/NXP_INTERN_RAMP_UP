#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void addition(int x,int y){
printf("Addition of two numbers %d & %d is %d \n",x,y,x+y);
}
void subtraction(int x,int y){
printf("Subtraction of two numbers %d & %d is %d \n",x,y,x-y);
}
void multipication(int x,int y){
printf("Multipication of two numbers %d & %d is %d \n",x,y,x*y);
}
int main() {
	int x=5,y=20;
	int temp;
	printf(" Enter your choice out of 0(addition),1(subtraction),2(multipication) \n");
	scanf("%d",&temp);
	void (*function[])(int,int)={addition,subtraction,multipication};
    (*function[temp])(x,y);
	return 0;
}