#include <stdio.h>
#include <string.h>
#include <windows.h>

void ins(char* s, char* s1, int centr)// void тк сама функция ничего не возвращает
{
    char tmpp[100];
    int i, j;
    for (i = centr, j = 0; i < 100; i++, j++) {//копируем элементы из s стоящие правее середины
        tmpp[j] = s[i];

    }
    for (i = centr, j = 0; i < 100; i++, j++)//заменяем все элементы в s стоящие правее середины на элементы из s1
        s[i] = s1[j];
    for (i = (centr + strlen(s1)), j = 0; i < 100; i++, j++)//восстанавливаем заменённые правее середины(центральный+количество заменённых элементов) элементы в s
        s[i] = tmpp[j];
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char s[100], s1[50];
    int centr, l;
    printf("Введите строку s(максимум-49 символов)\n");// из-за нуль символа
    gets_s(s, 100);// длина 100 тк здесь будет размещаться ещё 1 строка длинной до 49 элементов
    printf("Введите строку s1(максимум-49 символов)\n");
    gets_s(s1, 50);
    l = strlen(s);
    centr = l / 2;
    ins(s, s1, centr);
    printf("%s\n", s);
    return 0;
}