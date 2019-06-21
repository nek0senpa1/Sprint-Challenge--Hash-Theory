#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"
#include "ex1.h"
#include <string.h>

// I prefer when the instructs are in the code part, but sure, fine, go ahead and make a full readme ;p

Answer *get_indices_of_item_weights(int *weights, int length, int limit)
{
  HashTable *ht = create_hash_table(16);
  // 16 huh... guess it's just a good hexy number
  HashTable *index = create_hash_table(16);

  Answer *ansy;

  /* YOUR CODE HERE */
  // my code is here... but compiler hates 'undefined references to'... everything...

  for (int i =0; i <length; i++) {
    int maxybigdaforce = limit - weights[i];

    hash_table_insert(ht, weights[i], maxybigdaforce);

    hash_table_insert(index, weights[i], i);

    int stuff = hash_table_retrieve(ht, weights[i]);
    int thecheck = hash_table_retrieve(ht, stuff);

    printf("the stuff %i \n", stuff);
    printf("thecheck %d \n", thecheck);

    if (thecheck > -1) {
      ansy->index_1 = hash_table_retrieve(index, stuff);
      ansy->index_2 = hash_table_retrieve(index, (limit - stuff));

      return ansy;
    }

  }

  return NULL;
}

void print_answer(Answer *answer)
{
  if (answer != NULL) {
    printf("Answers: %d %d\n", answer->index_1, answer->index_2);
  } else {
    printf("NULL\n");
  }
}

#ifndef TESTING
int main(void)
{
  // TEST 1
  int weights_1 = {9};
  Answer *answer_1 = get_indices_of_item_weights(&weights_1, 1, 9);
  print_answer(answer_1);  // NULL

  // TEST 2
  int weights_2[] = {4, 4};
  Answer* answer_2 = get_indices_of_item_weights(weights_2, 2, 8);
  print_answer(answer_2);  // {1, 0}

  // TEST 3
  int weights_3[] = {4, 6, 10, 15, 16};
  Answer* answer_3 = get_indices_of_item_weights(weights_3, 5, 21);
  print_answer(answer_3);  // {3, 1}

  // TEST 4
  int weights_4[] = {12, 6, 7, 14, 19, 3, 0, 25, 40};
  Answer* answer_4 = get_indices_of_item_weights(weights_4, 9, 7);
  print_answer(answer_4);  // {6, 2}

  return 0;
}

#endif
