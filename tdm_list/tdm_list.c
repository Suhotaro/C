#include <stdio.h>
#include <stdlib.h>

#include "tdm_list.h"

typedef struct
{
	struct list_head bbb_list;

	int num;

	void *mem;
} AAA;

typedef struct
{
    char *name;

    int age;

    struct list_head link;

    int number;

    void* mem;


} BBB;



int main()
{
	AAA *aaa = calloc(1, sizeof(AAA));

	BBB *bbb_1 = calloc(1, sizeof(BBB));
	bbb_1->name = "Tom";
	bbb_1->age = 11;
	bbb_1->number = 7;
	bbb_1->mem = (void *)calloc(10, sizeof(int));;

	BBB *bbb_2 = calloc(1, sizeof(BBB));
	bbb_2->name = "Alice";
	bbb_2->age = 44;
	bbb_2->number = 12;
	bbb_2->mem = (void *)calloc(20, sizeof(int));;

	BBB *bbb_3 = calloc(1, sizeof(BBB));
	bbb_3->name = "Jo";
	bbb_3->age = 100;
	bbb_3->number = 5;
	bbb_3->mem = (void *)calloc(50, sizeof(int));;

	LIST_INITHEAD(&aaa->bbb_list);

	BBB *bbb_4 = NULL;
	LIST_FOR_EACH_ENTRY(bbb_4, &aaa->bbb_list, link)
	{
		printf("%s %d \n", bbb_4->name, bbb_4->age);
	}

	LIST_FOR_EACH_ENTRY(bbb_4, &aaa->bbb_list, link)
	{
		printf("%s %d \n", bbb_4->name, bbb_4->age);
	}

	LIST_FOR_EACH_ENTRY(bbb_4, &aaa->bbb_list, link)
	{
		printf("%s %d \n", bbb_4->name, bbb_4->age);
	}

	LIST_ADDTAIL(&bbb_1->link, &aaa->bbb_list);
	LIST_ADDTAIL(&bbb_2->link, &aaa->bbb_list);
	LIST_ADDTAIL(&bbb_3->link, &aaa->bbb_list);

	bbb_4 = NULL;
	LIST_FOR_EACH_ENTRY(bbb_4, &aaa->bbb_list, link)
	{
		printf("%s %d \n", bbb_4->name, bbb_4->age);
	}


	LIST_DEL(&bbb_3->link);

	bbb_4 = NULL;
	LIST_FOR_EACH_ENTRY(bbb_4, &aaa->bbb_list, link)
	{
		printf("%s %d \n", bbb_4->name, bbb_4->age);
	}


    return 0;
}
