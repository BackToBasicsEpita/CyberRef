#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <string.h>

#include "basics.h"

Test(FizzBuzz, negative)
{
    cr_redirect_stdout();
    int n = -1;
    fizzbuzz(n);
    fflush(NULL);
    cr_expect_stdout_eq_str("");
}

Test(FizzBuzz, zero)
{
    cr_redirect_stdout();
    int n = 0;
    fizzbuzz(n);
    fflush(NULL);
    cr_expect_stdout_eq_str("");
}

Test(FizzBuzz, one)
{
    cr_redirect_stdout();
    int n = 1;
    fizzbuzz(n);
    fflush(NULL);
    cr_expect_stdout_eq_str("1\n");
}

Test(FizzBuzz, five)
{
    cr_redirect_stdout();
    int n = 5;
    fizzbuzz(n);
    fflush(NULL);
    cr_expect_stdout_eq_str("1\n2\nFizz\n4\nBuzz\n");
}

Test(FizzBuzz, fifteen)
{
    cr_redirect_stdout();
    int n = 15;
    fizzbuzz(n);
    fflush(NULL);
    cr_expect_stdout_eq_str("1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\nBuzz\n11\nF"
                            "izz\n13\n14\nFizzBuzz\n");
}

Test(MyStrlen, empty)
{
    char *s = "";
    size_t expected = strlen(s);
    size_t actual = my_strlen(s);
    cr_expect_eq(expected, actual, "Expected: %zu. Actual: %zu", expected,
                 actual);
}

Test(MyStrlen, null)
{
    char *s = NULL;
    size_t expected = 0;
    size_t actual = my_strlen(s);
    cr_expect_eq(expected, actual, "Expected: %zu. Actual: %zu", expected,
                 actual);
}

Test(MyStrlen, hello_world)
{
    char *s = "Hello, World!";
    size_t expected = strlen(s);
    size_t actual = my_strlen(s);
    cr_expect_eq(expected, actual, "Expected: %zu. Actual: %zu", expected,
                 actual);
}

Test(MyStrlen, back_to_basics)
{
    char *s = "BackToBasics";
    size_t expected = strlen(s);
    size_t actual = my_strlen(s);
    cr_expect_eq(expected, actual, "Expected: %zu. Actual: %zu", expected,
                 actual);
}

Test(MyStrlen, apprentis_sorcers)
{
    char *s = "Pour jouer les apprentis sorciers...";
    size_t expected = strlen(s);
    size_t actual = my_strlen(s);
    cr_expect_eq(expected, actual, "Expected: %zu. Actual: %zu", expected,
                 actual);
}

Test(MyStrlen, barbra_streisand)
{
    char *s = "Barbra Streisand";
    size_t expected = strlen(s);
    size_t actual = my_strlen(s);
    cr_expect_eq(expected, actual, "Expected: %zu. Actual: %zu", expected,
                 actual);
}

Test(MyStrlen, lorem)
{
    char *s =
        "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus "
        "tempor id erat in vehicula. Nam faucibus urna quam, id euismod leo "
        "commodo at. Quisque pretium risus metus, ut fermentum nulla accumsan "
        "ac. In leo sapien, posuere sed pretium ac, finibus ac ex. Cras eu dui "
        "sed dui dapibus dictum. Morbi tempus eleifend nibh, eu blandit nibh "
        "ultrices sit amet. Fusce mollis molestie turpis, vitae posuere dui "
        "pellentesque vel. Pellentesque habitant morbi tristique senectus et "
        "netus et malesuada fames ac turpis egestas. Vivamus eget ligula eros. "
        "Class aptent taciti sociosqu ad litora torquent per conubia nostra, "
        "per inceptos himenaeos. Phasellus maximus, quam id convallis lacinia, "
        "nulla magna finibus turpis, a faucibus tortor tellus non justo. Donec "
        "eros mi, venenatis id vehicula eget, efficitur semper elit. Morbi id "
        "ligula semper sem sollicitudin suscipit eu vitae enim. Ut vel dapibus "
        "erat.\nProin tempus eleifend tincidunt. Interdum et malesuada fames "
        "ac ante ipsum primis in faucibus. Praesent viverra, lectus in "
        "placerat vehicula, est augue efficitur libero, pretium pharetra ante "
        "lectus tempor ipsum. Vestibulum ante ipsum primis in faucibus orci "
        "luctus et ultrices posuere cubilia curae; Duis vel nisl fermentum, "
        "dictum ligula vitae, rutrum enim. Morbi porta justo ut justo maximus "
        "venenatis. Mauris maximus odio aliquet arcu facilisis, ac volutpat "
        "metus volutpat. Donec non scelerisque massa, vitae iaculis augue. "
        "Cras tincidunt, mi eu sagittis pellentesque, purus metus interdum "
        "nisi, eu euismod enim enim ac mauris. Sed non velit lorem.\nAliquam "
        "fringilla vulputate erat non blandit. Duis eros justo, fringilla in "
        "scelerisque et, tincidunt vel enim. Donec finibus elit quis sodales "
        "gravida. Vivamus pharetra urna urna, nec vehicula justo commodo et. "
        "Vestibulum nec iaculis lacus. Donec rhoncus ante sapien, quis "
        "scelerisque velit ullamcorper id. Nunc arcu odio, semper ut molestie "
        "at, tincidunt nec sapien. Morbi orci mi, tincidunt vitae vestibulum "
        "nec, mollis vitae nisl. Integer quis pharetra ex, ac consequat est. "
        "Duis fringilla metus.";

    size_t expected = strlen(s);
    size_t actual = my_strlen(s);
    cr_expect_eq(expected, actual, "Expected: %zu. Actual: %zu", expected,
                 actual);
}

Test(BinaryNumber, zero)
{
    char s[] = "0";
    long expected = 0;
    long actual = binary_number(s);
    cr_expect_eq(expected, actual, "Expected: %ld. Actual: %ld", expected,
                 actual);
}

Test(BinaryNumber, incorrect)
{
    char s[] = "a";
    long expected = -1;
    long actual = binary_number(s);
    cr_expect_eq(expected, actual, "Expected: %ld. Actual: %ld", expected,
                 actual);
}

Test(BinaryNumber, two)
{
    char s[] = "10";
    long expected = 2;
    long actual = binary_number(s);
    cr_expect_eq(expected, actual, "Expected: %ld. Actual: %ld", expected,
                 actual);
}

Test(BinaryNumber, three)
{
    char s[] = "11";
    long expected = 3;
    long actual = binary_number(s);
    cr_expect_eq(expected, actual, "Expected: %ld. Actual: %ld", expected,
                 actual);
}

Test(BinaryNumber, forty_two)
{
    char s[] = "101010";
    long expected = 42;
    long actual = binary_number(s);
    cr_expect_eq(expected, actual, "Expected: %ld. Actual: %ld", expected,
                 actual);
}

Test(BinaryNumber, long)
{
    char s[] = "1100000100";
    long expected = 772;
    long actual = binary_number(s);
    cr_expect_eq(expected, actual, "Expected: %ld. Actual: %ld", expected,
                 actual);
}

Test(BinaryNumber, too_long)
{
    char s[] = "10100011111";
    long expected = 1311;
    long actual = binary_number(s);
    cr_expect_eq(expected, actual, "Expected: %ld. Actual: %ld", expected,
                 actual);
}

Test(HammingDistance, equal)
{
    char *dna1 = "CAGTCAGT";
    char *dna2 = "CAGTCAGT";

    int expected = 0;
    int actual = hamming_distance(dna1, dna2);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(HammingDistance, size_not_equal)
{
    char *dna1 = "CAGTCAGT";
    char *dna2 = "CAGTC";

    int expected = -1;
    int actual = hamming_distance(dna1, dna2);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(HammingDistance, incorrect)
{
    char *dna1 = "ABC";
    char *dna2 = "XYZ";

    int expected = -1;
    int actual = hamming_distance(dna1, dna2);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(HammingDistance, short_one)
{
    char *dna1 = "CAAT";
    char *dna2 = "CAGT";

    int expected = 1;
    int actual = hamming_distance(dna1, dna2);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(HammingDistance, short_multiple)
{
    char *dna1 = "GCAT";
    char *dna2 = "CAGT";

    int expected = 3;
    int actual = hamming_distance(dna1, dna2);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(HammingDistance, aaaaa)
{
    char *dna1 = "AAAAA";
    char *dna2 = "GTACC";

    int expected = 4;
    int actual = hamming_distance(dna1, dna2);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(HammingDistance, long)
{
    char *dna1 = "CAGTCAGTCAGTCAGTCAGTCAGTCAGTCAGT";
    char *dna2 = "GTACCAGTTTCAACATGTATCGATGTCATGCA";

    int expected = 24;
    int actual = hamming_distance(dna1, dna2);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, alphabet)
{
    char *s = "abcdefghijklmopqrstuvwxyz";
    int expected = 1;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, alphabet_spaces)
{
    char *s = "abc  def   ghi;  jkl..mop^^qrsétuv/wxyz";
    int expected = 1;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, spaces)
{
    char *s = "                                              ";
    int expected = 1;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, empty)
{
    char *s = "";
    int expected = 1;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, woody)
{
    char *s = "lumberjacks";
    int expected = 1;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, bg)
{
    char *s = "background";
    int expected = 1;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, twitch)
{
    char *s = "dowNStReam";
    int expected = 1;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, birthday)
{
    char *s = "six-year-old";
    int expected = 1;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, alone)
{
    char *s = "Seul dans ma tete";
    int expected = 0;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, cat)
{
    char *s = "chaTton";
    int expected = 0;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, test)
{
    char *s = "Test.";
    int expected = 0;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Isogram, bateauuu)
{
    char *s = "naVigAtIon";
    int expected = 0;
    int actual = is_isogram(s);
    cr_expect_eq(expected, actual, "Expected: %d. Actual: %d", expected,
                 actual);
}

Test(Robot, empty)
{
    char *directions = "";
    struct pair current = { 2, 3 };

    struct pair expected = { 2, 3 };
    struct pair actual = move_robot(current, directions);

    cr_expect_eq(expected.x, actual.x, "Expected: %d. Actual: %d", expected.x,
                 actual.x);
    cr_expect_eq(expected.y, actual.y, "Expected: %d. Actual: %d", expected.y,
                 actual.y);
}

Test(Robot, basic)
{
    char *directions = "UUL";
    struct pair current = { 2, 3 };

    struct pair expected = { 1, 5 };
    struct pair actual = move_robot(current, directions);

    cr_expect_eq(expected.x, actual.x, "Expected: %d. Actual: %d", expected.x,
                 actual.x);
    cr_expect_eq(expected.y, actual.y, "Expected: %d. Actual: %d", expected.y,
                 actual.y);
}

Test(Robot, loop)
{
    char *directions = "ULDR";
    struct pair current = { 2, 3 };

    struct pair expected = { 2, 3 };
    struct pair actual = move_robot(current, directions);

    cr_expect_eq(expected.x, actual.x, "Expected: %d. Actual: %d", expected.x,
                 actual.x);
    cr_expect_eq(expected.y, actual.y, "Expected: %d. Actual: %d", expected.y,
                 actual.y);
}

Test(Robot, left)
{
    char *directions = "LL";
    struct pair current = { 2, 3 };

    struct pair expected = { 0, 3 };
    struct pair actual = move_robot(current, directions);

    cr_expect_eq(expected.x, actual.x, "Expected: %d. Actual: %d", expected.x,
                 actual.x);
    cr_expect_eq(expected.y, actual.y, "Expected: %d. Actual: %d", expected.y,
                 actual.y);
}

Test(Robot, right)
{
    char *directions = "RR";
    struct pair current = { 2, 3 };

    struct pair expected = { 4, 3 };
    struct pair actual = move_robot(current, directions);

    cr_expect_eq(expected.x, actual.x, "Expected: %d. Actual: %d", expected.x,
                 actual.x);
    cr_expect_eq(expected.y, actual.y, "Expected: %d. Actual: %d", expected.y,
                 actual.y);
}

Test(Robot, up)
{
    char *directions = "UU";
    struct pair current = { 2, 3 };

    struct pair expected = { 2, 5 };
    struct pair actual = move_robot(current, directions);

    cr_expect_eq(expected.x, actual.x, "Expected: %d. Actual: %d", expected.x,
                 actual.x);
    cr_expect_eq(expected.y, actual.y, "Expected: %d. Actual: %d", expected.y,
                 actual.y);
}

Test(Robot, down)
{
    char *directions = "DD";
    struct pair current = { 2, 3 };

    struct pair expected = { 2, 1 };
    struct pair actual = move_robot(current, directions);

    cr_expect_eq(expected.x, actual.x, "Expected: %d. Actual: %d", expected.x,
                 actual.x);
    cr_expect_eq(expected.y, actual.y, "Expected: %d. Actual: %d", expected.y,
                 actual.y);
}

Test(Robot, long)
{
    char *directions = "UDRRULDLRLDUUU";
    struct pair current = { 2, 3 };

    struct pair expected = { 2, 5 };
    struct pair actual = move_robot(current, directions);

    cr_expect_eq(expected.x, actual.x, "Expected: %d. Actual: %d", expected.x,
                 actual.x);
    cr_expect_eq(expected.y, actual.y, "Expected: %d. Actual: %d", expected.y,
                 actual.y);
}
