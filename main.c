#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float train[][2] = {
    {0, 0},
    {1, 2},
    {2, 4},
    {3, 6},
    {4, 8},
};

#define train_count sizeof(train) / sizeof(train[0]) // train_count is the number of lines that there are in train

float rand_float(void)
{
    return (float)rand() / (float)RAND_MAX;
}

int main()
{
    srand(time(0));

    // y = x * w -> mult of parameters

    float w = rand_float() * 10.0f;

    printf("Tha weith 'w': %f\n", w);

    float acumulate_of_distance_between_y_e_trainoutputs = 0.0f;
    for (size_t i = 0; i < train_count; ++i)
    {
        float x = train[i][0];
        float y = x * w; // on this case, y is equals train[i][1] (the output of train)?

        // before, we need to look to the perfomance of this model rigth now, so we'll cacth the distance between y and the outputs from train (train[i][0]):
        float distance = y - train[i][1];
        acumulate_of_distance_between_y_e_trainoutputs += distance * distance;

        // To know that, we'll compare y and the outputs of train:
        printf("actual: %f | expected: %f\n", y, train[i][1]);
    }

    return 0;
}