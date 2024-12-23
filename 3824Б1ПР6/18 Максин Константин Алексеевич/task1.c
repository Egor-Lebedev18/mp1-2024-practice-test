// Задача 1. Дан непустой массив A из N элементов.
// Сформировать новый массив, в котором вначале расположены элементы массива A
// с четными индексами, а затем – с нечетными. 
int* task1(int A[], size_t N)
{
    // Создаем новый массив того же размера
    int* result = new int[N];
    
    // Индекс для записи в новый массив
    size_t index = 0;
    
    // Добавляем элементы с четными индексами
    for (size_t i = 0; i < N; i += 2)
    {
        result[index] = A[i];
        index++;
    }
    
    // Добавляем элементы с нечетными индексами
    for (size_t i = 1; i < N; i += 2)
    {
        result[index] = A[i];
        index++;
    }
    
    return result;
}
