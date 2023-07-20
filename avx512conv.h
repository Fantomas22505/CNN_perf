#ifndef AVX512CONV_H
#define AVX512CONV_H

#include "baseconv.h"

// Класс c SSE оптимизацией расчёта свёртки
class AVX512Conv : public BaseConv
{
public:
    AVX512Conv(ConvData *conv);

    AVX512Conv(CONV_TYPE type, int tensor_height, int tensor_width, int height, int width, int inputs = 1,
               int outputs = 1, int stride_vert = 1, int stride_horiz = 1, bool padding_vert = false, bool padding_horiz = false);

    // Расчёт свёртки
    // Возвращает число рассчитанных за секунду свёрток
    float RunConv();

private:
    // Выполнение свёртки с расчётом времени
    // cmpdata [in] - выходные данные для проверки результатов
    template<typename T>
    float Convolution();

    // Расчёт свёртки
    template<typename T>
    int MakeConv(T *res, T *tensor, T *kernel) {return MakeConv(res, tensor, kernel, dummyidentity<T>());};

    // Расчёт свёртки для всех типов кроме int8
    template<typename T>
    int MakeConv(T *res, T *tensor, T *kernel, dummyidentity<T>);

    // Временный массив для хранения данных умножения матриц
    std::shared_ptr<aligned_char> temptensor_;

    // Результат верификации
    float verify_result_;
};

#endif // AVX512CONV_H
