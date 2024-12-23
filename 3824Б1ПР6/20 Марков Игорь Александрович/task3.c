// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и зашифровать ее,
// заменяя каждую букву на следующую за ней в алфавите 
// (считать, что за ‘z’ следует ‘a’), сохраняя регистр.
#include <string.h>

char* task3(char *s)
{
    char *h = s;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (s[i] != 'z')h [i] += 1;
            else h[i] = 'a';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            if (s[i] != 'Z') h[i] += 1;
            else h[i] = 'A';
        }
    }
    return h;
}
