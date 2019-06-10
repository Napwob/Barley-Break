#define CTEST_MAIN
#define CTEST_COLOR_OK
#include <ctest.h>
#include <gafu.h>

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(win__test1(win), result_test)
{
    // Given
    int n[4][4];
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
CTEST(win__test2(loose), result_test)
{
    // Given
    int n[4][4];
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            numb[j][i] = nu;
            nu++;
        }
    }
    n[1][1]=100;
    // When
    const int result = wich(numb);

    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(move__test(down), result_test)
{
    // Given
    int numb[4][4];
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
    pr=pdown;
    c = mv(numb, c, pr);
    ASSERT_EQUAL(1, c.y0);
}
CTEST(move__test(right), result_test)
{
    // Given
    int numb[4][4];
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
    pr=pright;
    c = mv(numb, c, pr);
    ASSERT_EQUAL(1, c.x0);
}
CTEST(move__test(left), result_test)
{
    // Given
    int numb[4][4];
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
    pr=pright;
    c = mv(numb, c, pr);
    pr=pleft;
    c = mv(numb, c, pr);
    ASSERT_EQUAL(0, c.x0);
}
CTEST(move__test(left), result_test)
{
    // Given
    int numb[4][4];
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
    pr=pup;
    c = mv(numb, c, pr);
    pr=pdown;
    c = mv(numb, c, pr);
    ASSERT_EQUAL(0, c.x0);
}

