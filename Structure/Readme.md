# C Structs and Unions

In C programming, a struct (or structure) is a collection of variables (of different types) under a single name. A union, on the other hand, is a user-defined type similar to structs, with a key difference - it can only hold one member value at a time.

## Define Structures

Before creating structure variables, define its data type using the `struct` keyword.

### Syntax of struct

```c
struct structureName {
  dataType member1;
  dataType member2;
  // ...
};
```

### Example

```c
struct Person {
  char name[50];
  int citNo;
  float salary;
};
```

## Create Struct Variables

After defining a struct, create variables using the following syntax:

```c
struct Person {
  // code
};

int main() {
  struct Person person1, person2, p[20];
  return 0;
}
```

Another way to create struct variables:

```c
struct Person {
  // code
} person1, person2, p[20];
```

Access members of a structure using the `.` operator.

### Keyword typedef

Use `typedef` to create an alias name for data types. It simplifies the syntax of declaring variables.

### Nested Structures

Create structures within a structure. Example:

```c
struct complex {
  int imag;
  float real;
};

struct number {
  struct complex comp;
  int integers;
} num1, num2;
```

## Why Structs in C?

Structs help organize and store related information under a single name. They are useful when dealing with multiple instances of similar data.

## C Structs and Pointers

You can create pointers to structs. Learn more about pointers in C.

## Dynamic Memory Allocation of Structs

Allocate memory during runtime for structs using dynamic memory allocation. Example:

```c
#include <stdio.h>
#include <stdlib.h>

struct person {
   int age;
   float weight;
   char name[30];
};

int main()
{
   struct person *ptr;
   int i, n;

   printf("Enter the number of persons: ");
   scanf("%d", &n);

   // allocating memory for n numbers of struct person
   ptr = (struct person*) malloc(n * sizeof(struct person));

   for(i = 0; i < n; ++i)
   {
       printf("Enter first name and age respectively: ");
       scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
   }

   printf("Displaying Information:\n");
   for(i = 0; i < n; ++i)
       printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);

   return 0;
}
```

## C Unions

A union can only hold one member value at a time. Define and create union variables similarly to structs. Access members with the `.` operator.

### Difference between Unions and Structures

Unions allocate memory only enough to store their largest member, unlike structures which allocate space for all members.

```c
#include <stdio.h>

union unionJob {
   char name[32];
   float salary;
   int workerNo;
} uJob;

struct structJob {
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
   printf("size of union = %d bytes\n", sizeof(uJob));
   printf("size of structure = %d bytes\n", sizeof(sJob));
   return 0;
}
```

In this example, the size of the union is 32 bytes, while the size of the structure is 40 bytes.
