#include "HengList.h"
#include <cstdlib>
#include <cstdio>

void test_push(int argc, char *argv[])
{
    HengList<int> li;
    for (int i = 1; i < argc; ++i) {
        li.push_back(atoi(argv[i]));
    }
    for (int i = 1; i < argc; ++i) {
        li.push_front(atoi(argv[i]));
    }

    printf("size: %u\n", li.size());
    for (HengList<int>::iterator it = li.begin(); it != li.end(); ++it) {
        printf("%d ", *it);
    }
    printf("\n");
}

void test_init()
{
    HengList<int> li {10, 20, 30, 40};

    printf("size: %u\n", li.size());
    for (HengList<int>::iterator it = li.begin(); it != li.end(); ++it) {
        printf("%d ", *it);
    }
    printf("\n");
}

void test_pop(int argc, char *argv[])
{
    HengList<int> li;
    for (int i = 1; i < argc; ++i) {
        li.push_back(atoi(argv[i]));
    }

    printf("before pop size: %u\n", li.size());
    for (HengList<int>::iterator it = li.begin(); it != li.end(); ++it) {
        printf("%d ", *it);
    }
    printf("\n");

    li.pop_front();
    li.pop_back();

    printf("after pop size: %u\n", li.size());
    for (HengList<int>::iterator it = li.begin(); it != li.end(); ++it) {
        printf("%d ", *it);
    }
    printf("\n");
}

void test_find(int argc, char *argv[])
{
    HengList<int> li;
    for (int i = 1; i < argc-1; ++i) {
        li.push_back(atoi(argv[i]));
    }
    printf("size: %u\n", li.size());
    for (HengList<int>::iterator it = li.begin(); it != li.end(); ++it) {
        printf("%d ", *it);
    }
    printf("\n");

    auto it = li.find(atoi(argv[argc-1]));
    if (it != li.end())
        printf("found: %d\n", *it);
    else
        printf("not found: %s\n", argv[argc-1]);
}

void test_insert(int argc, char *argv[])
{
    HengList<int> li;
    for (int i = 1; i < argc-1; ++i) {
        li.push_back(atoi(argv[i]));
    }
    printf("size: %u\n", li.size());
    for (HengList<int>::iterator it = li.begin(); it != li.end(); ++it) {
        printf("%d ", *it);
    }
    printf("\n");

    li.insert(li.begin(), atoi(argv[argc-1]));
    li.insert(++++li.begin(), atoi(argv[argc-1]));
    auto it = li.insert(li.end(), atoi(argv[argc-1]));
    printf("%d\n", *it);
    printf("after insert size: %u\n", li.size());
    for (HengList<int>::iterator it = li.begin(); it != li.end(); ++it) {
        printf("%d ", *it);
    }
    printf("\n");
}

void test_remove(int argc, char *argv[])
{
    HengList<int> li;
    for (int i = 1; i < argc-1; ++i) {
        li.push_back(atoi(argv[i]));
    }
    printf("size: %u\n", li.size());
    for (HengList<int>::iterator it = li.begin(); it != li.end(); ++it) {
        printf("%d ", *it);
    }
    printf("\n");

    li.remove(atoi(argv[argc-1]));
    //li.insert(++++li.begin(), atoi(argv[argc-1]));
    //auto it = li.insert(li.end(), atoi(argv[argc-1]));
    //printf("*it: %d\n", *it);
    printf("after insert size: %u\n", li.size());
    for (HengList<int>::iterator it = li.begin(); it != li.end(); ++it) {
        printf("%d ", *it);
    }
    printf("\n");
}

void test_for()
{
    HengList<int> li {10, 20, 30, 40};

    printf("size: %u\n", li.size());
    for (auto &&v : li) {
        printf("%d ", v);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    //test_push(argc, argv);
    //test_init();
    //test_pop(argc, argv);
    //test_find(argc, argv);
    //test_insert(argc, argv);
    //test_remove(argc, argv);
    test_for();
}
