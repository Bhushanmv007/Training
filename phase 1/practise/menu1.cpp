#include <stdio.h>

#define MAX_SIZE 5

int arr[MAX_SIZE];
int size = 0;  // Tracks the number of elements in the array

void display() {
  if (size == 0) {
    printf("Array is empty!\n");
    return;
  }

  printf("Array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void insert() {
  if (size == MAX_SIZE) {
    printf("Array Full!\n");
    return;
  }

  int element;
  printf("Enter element to insert: ");
  scanf("%d", &element);

  arr[size] = element;
  size++;
  printf("Element inserted\n");
}

void delete() {
  if (size == 0) {
    printf("Array is empty!\n");
    return;
  }

  int element;
  printf("Enter element to delete: ");
  scanf("%d", &element);

  int found = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == element) {
      found = 1;
      // Shift elements one position back to overwrite (simple approach)
      for (int j = i; j < size - 1; j++) {
        arr[j] = arr[j + 1];
      }
      size--;
      break;
    }
  }

  if (found) {
    printf("Element deleted\n");
  } else {
    printf("Element not found!\n");
  }
}

int main() {
  int choice;

  while (1) {
    printf("\nMenu:\n");
    printf("1. Display\n");
    printf("2. Insert\n");
    printf("3. Delete\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        display();
        break;
      case 2:
        insert();
        break;
      case 3:
        delete();
        break;
      case 4:
        printf("Exiting...\n");
        return 0;
      default:
        printf("Invalid choice!\n");
    }
  }

  return 0;
}