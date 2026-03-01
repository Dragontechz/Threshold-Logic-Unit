#include <stdio.h>
#include <stdbool.h>

struct ThresholdLogicUnit
{
    unsigned int threshold,
        number_of_weights;
    float *w;
};
bool fire(struct ThresholdLogicUnit *TLU, bool *X, int size_of_x)
{

    float T = 0;
    for (int i = 0; i < size_of_x; i++)
    {
        if (*(X + i))
        {
            T += *((TLU->w) + i) * (*(X + i));
            printf("%lf\n", T);
        }
    }
    if (T >= TLU->threshold)
    {
        return true;
    }
    return false;
}
int main(void)
{
    float w[] = {1, 1, 1};
    struct ThresholdLogicUnit TLU = {4, 3, w};

    bool list[] = {true, false, true};

    printf("%d\n", fire(&TLU, list, 3));
    return 0;
}