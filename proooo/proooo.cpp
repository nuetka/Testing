#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale>

int main() {
	setlocale(LC_ALL, "Rus");
	int x, passwort, f, k1, k2, k3, k4, k5, otv1, sum, bal1, bal2, bal3, bal4, bal5;
	bal1 = bal2 = bal3 = bal4 = bal5 = 3;
	k1 = k2 = k3 = k4 = k5 = 0;
	do {
		printf("Для выбора режима администратора введите 1\nДля выбора режима пользователя введите 2\n");
		scanf("%d", &x);
		if ((x != 1) && (x != 2)) printf("Ошибка ввода. Попробуйте снова\n");


	} while ((x != 1) && (x != 2));

	system("cls");

	if (x == 1) {
		do {
			printf("Введите пароль:");
			scanf("%d", &passwort);
			if (passwort != 1234567) {
				do {
					printf("Неверный пароль.Поменять режим?\nЕсли да, то введите 1\nЕсли нет, то введите 2\n");
					scanf("%d", &f);
					if (f == 1) {
						x = 2;
					}
					if (f == 2) continue;

					if ((f != 1) && (f != 2)) {
						printf("Ошибка ввода. Попробуйте снова\n");
					}
				} while ((f != 1) && (f != 2));
			}


		} while ((passwort != 1234567) && (x != 2));
		system("cls");
	}

	printf("Тестирование по программированию\nВведите верный ответ\nДля ответа на вопрос у Вас есть не более трёх попыток\nВсего в тесте пять вопросов\nЖелаем удачи!\n\n");


	do {
		printf("Вопрос№1\nint y;\ny=(y=1)+1;\ny=?\n");
		if (x == 1) {
			printf("Ответ:2\n");
		}
		printf("Введите ответ:");
		scanf("%d", &otv1);
		if (otv1 != 2) {
			printf("Неверный ответ\n\n");
			bal1 = bal1 - 1;
		}
		else {
			printf("Верный ответ\n\n");
		}
		k1++;
	} while ((otv1 != 2) && (k1 != 3));

	do {
		printf("Вопрос№2\nint y;\ny=7/3;\ny=?\n");
		if (x == 1) {
			printf("Ответ:2\n");
		}
		printf("Введите ответ:");
		scanf("%d", &otv1);
		if (otv1 != 2) {
			printf("Неверный ответ\n\n");
			bal2 = bal2 - 1;
		}
		else {
			printf("Верный ответ\n\n");
		}
		k2++;
	} while ((otv1 != 2) && (k2 != 3));

	do {
		printf("Вопрос№3\nint y;\ny=1;\ny+=y;\ny=?\n");
		if (x == 1) {
			printf("Ответ:2\n");
		}
		printf("Введите ответ:");
		scanf("%d", &otv1);
		if (otv1 != 2) {
			printf("Неверный ответ\n\n");
			bal3 = bal3 - 1;
		}
		else {
			printf("Верный ответ\n\n");
		}
		k3++;
	} while ((otv1 != 2) && (k3 != 3));

	do {
		printf("Вопрос№4\nint y;\ny=1;\ny++;y++;\ny=?\n");
		if (x == 1) {
			printf("Ответ:3\n");
		}
		printf("Введите ответ:");
		scanf("%d", &otv1);
		if (otv1 != 3) {
			printf("Неверный ответ\n\n");
			bal4 = bal4 - 1;
		}
		else {
			printf("Верный ответ\n\n");
		}
		k4++;
	} while ((otv1 != 3) && (k4 != 3));

	do {
		printf("Вопрос№5\nint y;\ny=7;\ny--;\ny=?\n");
		if (x == 1) {
			printf("Ответ:6\n");
		}
		printf("Введите ответ:");
		scanf("%d", &otv1);
		if (otv1 != 6) {
			printf("Неверный ответ\n\n");
			bal5 = bal5 - 1;
		}
		else {
			printf("Верный ответ\n\n");
		}
		k5++;
	} while ((otv1 != 6) && (k5 != 3));

	system("cls");

	sum = bal1 + bal2 + bal3 + bal4 + bal5;
	printf("Тест завершён!\nВы набрали %d/15 баллов\n", sum);
}