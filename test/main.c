#define CTEST_MAIN
#define CTEST_COLOR_OK
#include <ctest.h>
#include <gafu.h>

struct c {
    int x0;
    int y0;
};

enum keyboard { pup = 65, pdown = 66, pleft = 68, pright = 67 };

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(errortext__test1, result_test)
{
    // Given
    int numb[4][4];
    int nu = 0, i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            numb[j][i] = nu;
            nu++;
        }
    }

    // When
    const int result = wich(numb);

    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(errortext__test2, result_test)
{
    // Given
    int numb[4][4];
    int nu = 0, i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            numb[j][i] = nu;
            nu++;
        }
    }
    numb[1][1] = 100;
    // When
    const int result = wich(numb);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(errortext__test3, result_test)
{
    // Given
    int numb[4][4];
    int nu = 0, i, j;
    enum keyboard pr;
    struct c c;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            numb[j][i] = nu;
            nu++;
        }
    }
    c.x0 = 0;
    c.y0 = 0;
    pr = pdown;
    c = mv(numb, c, pr);
    ASSERT_EQUAL(1, c.y0);
}
CTEST(errortext__test4, result_test)
{
    // Given
    int numb[4][4];
    int nu = 0, i, j;
    enum keyboard pr;
    struct c c;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            numb[j][i] = nu;
            nu++;
        }
    }
    c.x0 = 0;
    c.y0 = 0;
    pr = pright;
    c = mv(numb, c, pr);
    ASSERT_EQUAL(1, c.x0);
}
CTEST(errortext__test5, result_test)
{
    // Given
    int numb[4][4];
    int nu = 0, i, j;
    enum keyboard pr;
    struct c c;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            numb[j][i] = nu;
            nu++;
        }
    }
    c.x0 = 0;
    c.y0 = 0;
    pr = pright;
    c = mv(numb, c, pr);
    pr = pleft;
    c = mv(numb, c, pr);
    ASSERT_EQUAL(0, c.x0);
}
CTEST(errortext__test6, result_test)
{
    // Given
    int numb[4][4];
    int nu = 0, i, j;
    enum keyboard pr;
    struct c c;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            numb[j][i] = nu;
            nu++;
        }
    }
    c.x0 = 0;
    c.y0 = 0;
    pr = pup;
    c = mv(numb, c, pr);
    pr = pdown;
    c = mv(numb, c, pr);
    ASSERT_EQUAL(0, c.x0);
}

