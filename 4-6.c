#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "func.h"

int main(void) {
	Start* node;
	Program *data;
	char* name;
	int choose;
	
	node = (Start*)malloc(sizeof(Start));
	node->first = (Program*)malloc(sizeof(Program));
	data = (Program*)malloc(sizeof(Program));
	data->pre = (Program*)malloc(sizeof(Program));

	data = NULL;
	node->first->pre = NULL;
	while (1) {
		choose = Display();

		switch (choose) {
		case 1:
			printf("[ INSERT ]\n");
			getchar();
			if (data == NULL) {
				printf("Input Name: ");
				gets_s(node->first->name, 10);
				printf("Input Tel Number: ");
				gets_s(node->first->number, 10);

				data = Insert(node->first);
			}
			else {
				printf("Input Name: ");
				gets_s(data->name, 10);
				printf("Input Tel Number: ");
				gets_s(data->number, 10);

				data = Insert(data);
			}
			break;

		case 2:
			printf("[ Delete ]\n");
			getchar();

			name = (char*)malloc(sizeof(char) * 10);
			printf("Delete Name? ");
			gets_s(name, 10);

			node->first = Delete(node->first, name);
			free(name);
			break;

		case 3:
			printf("[ Search ]\n");
			getchar();
			
			name = (char*)malloc(sizeof(char) * 10);
			printf("Search Name? ");
			gets_s(name, 10);

			Search(node->first, name);
			free(name);
			break;

		case 4:
			PrintAll(node->first);
			break;

		case 5:
			printf("���α׷��� �����մϴ�.\n");
			exit(1);

		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}

	}
}