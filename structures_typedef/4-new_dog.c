#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 */
dog_t *new_dog(char *name, float age, char *owner)
{

  int lenowner, lenname, i, j;

  dog_t *newdog;

  newdog = malloc(sizeof(dog_t));
  if (newdog == NULL)
    return (NULL);

  lenowner = strlen(owner);
  lenname = strlen(name);

  newdog->name = malloc(lenname + 1);
  newdog->owner = malloc(lenowner + 1);

  if(newdog->name == NULL ||newdog->owner == NULL)
    {
      free(newdog);
      free(newdog->name);
      free(newdog->owner);

      return (NULL);
    }
  for(i = 0;i < lenname +1; i++)
    {
      newdog->name[i] = name[i];
    }
  newdog->age = age;

  for(j = 0;j < lenowner +1; j++)
     {
      newdog->owner[j] = owner[j];
    }

  return (newdog);
}




 
