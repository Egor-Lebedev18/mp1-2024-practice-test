// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить длину самого короткого слова в строке.
#include <limits.h>

int task3(char *s)
{
    int minLength = INT_MAX;  // Инициализируем минимальную длину максимальным значением
    int currentLength = 0;    // Текущая длина слова

    while (*s != '\0') {  // Пока не достигнем конца строки
        if (*s != ' ') {  // Если символ не пробел
            currentLength++;  // Увеличиваем длину текущего слова
        } else {  // Если символ пробел
            // Если слово завершено (length > 0), проверяем, нужно ли обновить минимальную длину
            if (currentLength > 0 && currentLength < minLength) {
                minLength = currentLength;
            }
            currentLength = 0;  // Сбрасываем текущую длину для следующего слова
        }
        s++;  // Переходим к следующему символу
    }

    // После окончания цикла проверяем последнее слово
    if (currentLength > 0 && currentLength < minLength) {
        minLength = currentLength;
    }

    // Если не было найдено ни одного слова, возвращаем 0
    return (minLength == INT_MAX) ? 0 : minLength;
}
