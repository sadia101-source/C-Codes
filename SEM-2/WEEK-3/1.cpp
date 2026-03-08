#include <stdio.h>
#define N 25

int arr[N], size;

void create_array(){
	int i=0;
	printf("Enter the number of elements (max 25): ");
	scanf("%d", &size);
	for (i=0; i<size; i++){
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
}
void insert(int arr[]) {
	int pos, num, i;
	if (size==25){
		printf("No space left.\n");
	} else{
		size += 1;
		printf("Enter the number to be inserted: ");
		scanf("%d", &num);
		printf("Enter the position to be inserted at: ");
		scanf("%d", &pos);
	}
	for (i=size; i>=pos; i--){
		arr[i]=arr[i-1];
	}
	arr[i]=num;
}
void del(int arr[]){
	int pos, i;
	printf("Enter the postition to be deleted at: ");
	scanf ("%d", &pos);
	if (size<pos){
		printf("Invalid input.");
	} else {
		for (i=pos-1; i<size; i++){
			arr[i]=arr[i+1];
		}
		size -= 1;
	}
}
void display(int arr[]){
    int i;
	printf("\nArray is:\n");
	for (i=0; i<size; i++){
		printf("%d", arr[i]);
	}
}

int main(){
	create_array();
	display(arr);
	int choice;
	do{
		printf("\nPress 1 for INSERT\n2 for DELETION\n3 for DISPLAY\n4 to exit");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				insert(arr);
				break;
			case 2:
				del(arr);
				break;
			case 3:
				display(arr);
				break;
			case 4:
				printf("Program ended.");
				break;
			default:
				printf("Invalid choice.");
				break;
		}
	}
	while (choice!=4);
	
	return 0;
}

