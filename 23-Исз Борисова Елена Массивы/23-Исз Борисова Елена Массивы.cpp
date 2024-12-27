
#include <iostream>


class Задание1A
{
public:
    void input_data(int array[], int size) //ввод одномерного массива
    {

        for (int i = 0; i < size; i++)
        {
            array[i] = rand() % 100;
        }
    }
    void print_data(int array[], int size) //вывод одномерного массива
    {

        for (int i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }
    }
    void Задание()
    {
        printf("Задание 1 (а): Создать одномерный числовой массив, заполнить его, вывести значения на экран.\n");
        const int size = 5;
        int array[size];
        input_data(array, size);
        print_data(array, size);
        printf("\n");
    }
};

class Задание1Б
{
public:
    static const int count_row = 3;
    static const int count_column = 2;
    void input_data(int array [count_row][count_column]) //ввод двумерного массива
    {
        for (int i = 0; i < count_row; i++)
        {
            for (int j = 0; j < count_column; j++)
            {
                array[i][j] = rand() % 100;
            }
        }
    }
    void print_data(int array[count_row][count_column]) //вывод двумерного массива
    {
        for (int i = 0; i < count_row; i++)
        {
            for (int j = 0; j < count_column; j++)
            {
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }
    }
    void Задание()
    {
        printf("Задание 1 (б): Создать двумерный числовой массив, заполнить его, вывести значения на экран.\n");
        int array_B[count_row][count_column];
        input_data(array_B);
        print_data(array_B);
    }
};

class Задание1В
{
public:
    void Задание()
    {
        printf("Задание 1 (в): Создать строку (массив символов), заполнить его, вывести значения на экран.\n");
        char str[101] = "";
        printf("Введите строку: ");
        fgets(str, 100, stdin);
        fflush(stdin);
        printf("Строка: ");
        puts(str);
    }
};

class Задание2
{
public:
    void input_data(int array[], int size) //ввод одномерного массива
    {

        for (int i = 0; i < size; i++)
        {
            array[i] = rand() % 100;
        }
    }
    void print_data(int array[], int size) //вывод одномерного массива
    {

        for (int i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }
    }
    int search(int array[], int size, int number) //поиск введенного пользователем числа
    {
        for (int i = 0; i < size; i++)
        {
            if (array[i] == number)
            {
                return 1;
            }
        }
        return 0;
    }

    int sum(int array[], int size) //подсчет суммы элементов массива
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += array[i];
        }
        return sum;
    }
    void Задание()
    {
        printf("Задание 2 (а): Осуществить ввод одномерного массива целых чисел. Написать функцию реализующую поиск заданного значения.\n");
        const int size = 5;
        int array[size];
        input_data(array, size);
        printf("Ваш массив: \n");
        print_data(array, size);
        int number = 0;
        printf("\nКакое число найти? ");
        scanf_s("%d", &number);
        int result_search = search(array, size, number);
        if (result_search == 1)
        {
            printf("\nЭлемент %d найден", number);
        }
        else
        {
            printf("\nЭлемент %d не найден", number);
        }

        printf("\n");

        printf("\nЗадание 2 (б): Написать функцию реализующую определение суммы элементов массива.\n");
        print_data(array, size);
        int sumEl = sum(array, size);
        printf("\nСумма элементов = %d\n", sumEl);

    }
};

class Задание3
{
public:
    static const int count = 5;
    void input_data(int array[count]) //ввод одномерного массива
    {
        for (int i = 0; i < count; i++)
        {
            array[i] = rand() % 100;
        }
    }
    void print_data(int array[count]) //вывод одномерного массива
    {
        for (int i = 0; i < count; i++)
        {
            printf("%d ", array[i]);
        }
    }

    void sort(int array[count]) // сортировка массива
    {
        int end = count / 2;
        for (int n = 0; n < end; n++)
        {
            int min = array[n];
            int min_pos = n;
            for (int i = n; i < count - n; i++)
            {
                if (array[i] < min)
                {
                    min = array[i];
                    min_pos = i;
                }
            }
            int dop = array[min_pos];
            array[min_pos] = array[n];
            array[n] = dop;

            int max = array[n];
            int max_pos = n;
            for (int i = n; i < count - n; i++)
            {
                if (array[i] > max)
                {
                    max = array[i];
                    max_pos = i;
                }
            }
            dop = array[max_pos];
            array[max_pos] = array[count - n - 1];
            array[count - n - 1] = dop;

            printf("\n");
            print_data(array);
        }
        printf("\n");
    }

    void Задание()
    {
        printf("Задание 3: Написать  программу, реализующую сортировку массива. Сортировка должна происходить следующим образом: программа просматривает все элементы массива и находит максимальный и минимальный элементы. Максимальныйменяет местами с последним элементом, а минимальный – с первым. Далее просматривает все элементы кроме первого и последнего, находит максимум и минимум и меняет их соответственно с предпоследним и вторым элементами. И.т.д. пока массив не будет отсортирован.\n");
        int array[count];
        input_data(array);
        print_data(array);
        sort(array);
    }
};

class Задание4
{
public:
    static const int count_row = 3;
    static const int count_column = 2;
    void input_data(int array[count_row][count_column]) //ввод двумерного массива
    {
        for (int i = 0; i < count_row; i++)
        {
            for (int j = 0; j < count_column; j++)
            {
                array[i][j] = rand() % 100;
            }
        }
    }
    void print_data(int array[count_row][count_column]) //вывод двумерного массива
    {
        for (int i = 0; i < count_row; i++)
        {
            for (int j = 0; j < count_column; j++)
            {
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }
    }
    void search(int array[count_row][count_column]) //поиск минимального и максимального значения
    {
        int min = array[0][0];
        int max = array[0][0];
        for (int i = 0; i < count_row; i++)
        {
            for (int j = 0; j < count_column; j++)
            {
                if (array[i][j] < min)
                {
                    min = array[i][j];
                }
                if (array[i][j] > max)
                {
                    max = array[i][j];
                }
            }
        }
        printf("Минимальное значение = %d. Максимальное значение = %d\n", min, max);
    }

    void Задание()
    {
        printf("Задание 4: Осуществить ввод двумерного массива целых чисел. Реализовать поиск Максимального и минимального значений массива.\n");
        int array[count_row][count_column];
        input_data(array);
        print_data(array);
        search(array);
    }
};

class Задание5
{
public:
    static const int count_row = 3;
    static const int count_column = 3;
    void input_data(int array[count_row][count_column]) //ввод двумерного массива змейкой
    {
        for (int i = 0; i < count_row; i++)
        {
            if (i % 2 != 0)
            {
                for (int j = count_column - 1; j > -1; j--)
                {
                    printf("Введите элемент [%d][%d] : ", i, j);
                    scanf_s("%d", &array[i][j]);
                }
            }
            else
            {
                for (int j = 0; j < count_column; j++)
                {
                    printf("Введите элемент [%d][%d] : ", i, j);
                    scanf_s("%d", &array[i][j]);
                }
            }
        }
    }
    void print_data(int array[count_row][count_column]) //вывод двумерного массива
    {
        for (int i = 0; i < count_row; i++)
        {
            for (int j = 0; j < count_column; j++)
            {
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }
    }
    void Задание()
    {
        printf("Задание 5: Реализовать заполнение массива змейкой.\n");
        int array[count_row][count_column];
        input_data(array);
        print_data(array);
    }
};

class Задание6
{
public:
    int count_sumbols(char str[]) //подсчет длины строки
    {
        int i = 0;
        while (str[i] != '\0')
        {
            i++;
        }
        return i;
    }
    void Задание()
    {
        printf("Задание 6: Написать функцию, считающую длину строки.\n");
        char str[100] = "Привет, мир!";
        int count = 0;
        puts(str);
        count = count_sumbols(str);
        printf("Длина строки = %d\n", count);

    }
};

class Задание7
{
public:
    void ddelete(char str[]) //удаление повторяющихся символов
    {
        int i = 0, count = 0;
        char mas[100] = "";
        while (str[i] != '\0')
        {
            int j = 0, p = 0;
            while (mas[j] != '\0')
            {
                if (str[i] == mas[j])
                {
                    p = 1;
                    break;
                }
                j++;
            }
            if (p == 0)
            {
                mas[count] = str[i];
                count++;
            }
            i++;
        }
        puts(mas);
    }

    void Задание()
    {
        printf("Задание 7: Написать функцию, удаляющую из строки повторяющиеся символы.\n");
        char str[100] = "Привет, мир!";
        int count = 0;
        puts(str);
        ddelete(str);
    }
};

class Задание8
{
public:
    void coding(char str[]) //шифрование
    {
        int i = 0;
        char mas_coding[13] = "";
        while (str[i] != '\0')
        {
            mas_coding[i] = str[i] + 3;
            i++;
        }
        puts(mas_coding);
    }

    void uncoding(char str[]) //дешифрование
    {
        int i = 0;
        char mas_uncoding[20] = "";
        while (str[i] != '\0')
        {
            mas_uncoding[i] = str[i] - 3;
            i++;
        }
        puts(mas_uncoding);
    }
    void Задание()
    {
        printf("Задание 8: Написать программу, реализующую шифрование/дешифрование шифром Цезаря (сдвиг 3).\n");
        char s[13] = "Привет, мир!";
        puts(s);
        coding(s);
        char str[13] = "Тулеих/#плу$";
        uncoding(str);
    }
};

int main()
{
    system("chcp 1251>null");

    Задание1В n13;
    n13.Задание();

    Задание1A n11;
    n11.Задание();

    printf("\n");

    Задание1Б n12;
    n12.Задание();

    printf("\n");

    Задание2 n2;
    n2.Задание();

    printf("\n");

    Задание3 n3;
    n3.Задание();

    printf("\n");

    Задание4 n4;
    n4.Задание();

    printf("\n");

    Задание5 n5;
    n5.Задание();

    printf("\n");

    Задание6 n6;
    n6.Задание();

    printf("\n");

    Задание7 n7;
    n7.Задание();

    printf("\n");

    Задание8 n8;
    n8.Задание();

    return 0;
}

