#include <stdio.h>
typedef struct node{
int y;
float temp;
char s;
}node;
int main() {
   node*ptr1=(node*)malloc(sizeof(node));
	node*ptr2=(node*)malloc(sizeof(node));
	// creating object of structures via pointers
	// initiaize structure  first pointer 
	ptr1->y=70;
	ptr1->temp=56.9;
	ptr1->s='g';
	// initiaize structure second pointer 
	ptr2->y=65;
	ptr2->temp=34.8;
	ptr2->s='f';
	// creating 1-D array with pointers
	// declaration of structure pointer array 
	node*arr[2];
	// intializing array with structure pointers
	arr[0]=ptr1;
	arr[1]=ptr2;
	//printing variable values of structure
	printf("%d \t %f \t %c \n",arr[0]->y,arr[0]->temp,arr[0]->s);
	printf("%d \t %f \t %c \n",arr[1]->y,arr[1]->temp,arr[1]->s);

    return 0;
}