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
void PrintAll(Program* data);

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

Program* tempDel(Program* root) {
	Program* tmp = root;
	while (tmp->pre != NULL)
		tmp = tmp->pre;

	return tmp;
}

Program* Delete(Program* data, char* name) {
	Program* temp = NULL;

	if (data == NULL) return data;
	if (!strcmp(data->name, name)) {
		if (data->pre != NULL && data->next != NULL) {
			temp = tempDel(data->next);

			strcpy(data->name, temp->name);
			strcpy(data->number, temp->number);
			data->next = Delete(data->next, temp->name);
		}
		else {
			temp = (data->pre == NULL) ? data->next : data->pre;
			free(data);

			return temp;
		}
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
	printf("해당 정보가 없습니다\n.");
}

void PrintAll(Program* data) {
	printf("[ Print All Data ]\n");
	while (data->next != NULL) {
		printf("Name: %s\t Tel: %s\n", data->name, data->number);
		data = data->next;
	}
}
