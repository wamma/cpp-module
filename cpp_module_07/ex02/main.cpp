#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10

int main(int, char**) // 42intra에서 제공한 main문
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// int main(int, char**) // const 없을 시 에러 발생
// {
//     const Array<int> numbers(MAX_VAL);

//     // 숫자를 출력합니다. 이 부분은 정상적으로 작동해야 합니다.
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         std::cout << numbers[i] << std::endl;
//     }

//     return 0;
// }

// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL); // 비상수 배열 생성
//     for (int i = 0; i < MAX_VAL; i++) {
//         numbers[i] = i; // 배열 요소에 값 할당
//     }

//     // 배열 요소 출력
//     for (int i = 0; i < MAX_VAL; i++) {
//         std::cout << numbers[i] << std::endl;
//     }

//     // 상수 참조를 통한 읽기
//     const Array<int>& constNumbers = numbers;
//     for (int i = 0; i < MAX_VAL; i++) {
//         std::cout << constNumbers[i] << std::endl;
//     }
//     return 0;
// }