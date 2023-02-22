#include <stdlib.h>
#include <string.h>

typedef struct program {
	struct program* pre;
	struct program* next;
	char name[10];
	char number[10];
} Program;

typedef struct programnode {
	struct program* first;
} Start;

int Display(void);
Program* Insert(Program* data);
Program* tempDel(Program* root);
Program* Delete(Program* data, char* name);
void PrintAll(Program* data);
void Search(Program* data, char* name);

int Display(void) {
	int choose;
	printf("***** MENU *****\n");
	printf("1. Insert\n");
	printf("2. Delete\n");
	printf("3. Search\n");
	printf("4. Print All\n");
	printf("5. Exit\n");
	printf("Choose the item: ");
	scanf("%d", &choose);

	return choose;
}

Program* Insert(Program* data) {
	data->next = (Program*)malloc(sizeof(Program));

	data->next->pre = data;
	data->next->next = NULL;
	printf("\t\tData Inserted\n\n");

	return data->next;
}

Program* Delete(Program* data, char* name) {
	Program* temp = NULL;

	if (data == NULL) return data;
	while (data->next != NULL) {
		if (!strcmp(data->name, name)) {
			if (data->pre != NULL) {
				temp = data->pre;
				
				temp->pre = data->pre->pre;
				temp->next = data->next;
				temp->next->pre = temp->next;
				
				return temp;
			}
			else {
				temp = data->next;
				temp->pre = NULL;

				return temp;
			}
		}
		else data = data->next;
	}
	return data;
}

void Search(Program* data, char* name) {
	while (data->next != NULL) {
		if (!strcmp(data->name, name)) {
			printf("Tel: %s\n", data->number);
			printf("\t\tData Searched\n\n");
			return;
		}
		else data = data->next;
	}
	printf("해당 정보가 없습니다.\n");
}

void PrintAll(Program* data) {
	printf("[ Print All Data ]\n");
	while (data->next != NULL) {
		printf("Name: %s\t Tel: %s\n", data->name, data->number);
		data = data->next;
	}
	printf("\n");
}
