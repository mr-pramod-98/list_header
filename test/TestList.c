#include"src/list.h"
#include"../../src/unity.h"

void test_add_rear_function(struct list* head)
{
 int data = 5;
 head = add_rear(head, &data, sizeof(int));
 TEST_ASSERT_EQUAL_INT_MESSAGE(5, *(int*)(&(head->data)),"PASS");
 printf("PASS");
}

int main(void)
{
  struct list * head = NULL;
  test_add_rear_function(head);
}
