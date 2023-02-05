// 1. Write a function to swap values of two in variables of calling function.
// #include <stdio.h>
// void swap(int *a,int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int a = 4,b = 3;
//     swap(&a,&b);
//     printf("a = %d & b = %d",a,b);
//     return 0;
// }

// 2. Write a function to swap strings of two char arrays of calling functions.
// #include <stdio.h>
// void swap_string(char **str1_ptr, char **str2_ptr)
// {
//     char *temp = *str1_ptr;
//     *str1_ptr = *str2_ptr;
//     *str2_ptr = temp;
// }
// int main()
// {
//     char *a = "Good Boy";
//     char *b = "I am a";
//     swap_string(&a, &b);
//     printf("%s %s", a, b);
//     return 0;
// }

// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
// #include <stdio.h>
// void sort(int *a,int size)
// {
//     int temp;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             if (a[i]>a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int a[5] = {1,5,2,4,3};
//     sort(&a,5);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// 4. Write a program in C to demonstrate how to handle the pointers in the program.
// #include <stdio.h>
// int main()
// {
//    int a = 5;
//    int *ptr = &a;
//    //Value at a
//    printf("a = %d\n",a);
//    //Address of a
//    printf("&a = %d\n",&a);
//    //Address of a = ptr
//    printf("ptr = %d\n",ptr);
//    //Address of ptr = &ptr
//    printf("&ptr = %d\n",&ptr);
//    //Value at ptr = *ptr
//    printf("*ptr = %d",*ptr);
//    return 0;
// }

// 5. Write a program to find the maximum number between two numbers using a pointer
//  #include <stdio.h>
//  void max(int *x,int *y)
//  {
//      (*x>*y) ? printf("%d",*x) : printf("%d",*y);
//  }
//  int main()
//  {
//      int a = 2,b = 3;
//      max(&a,&b);
//      return 0;
//  }

// 6. Write a program to calculate the length of the string using a pointer
// #include <stdio.h>
// #include <string.h>
// void String_lenght(int *s)
// {
//   printf("%d",strlen(s));
// }
// int main()
// {
//     char str[] = "Ineuron";
//     String_lenght(str);
//     return 0;
// }

// 7. Write a program to count the number of vowels and consonants in a string using a
// pointer.
// #include <stdio.h>
// void count_vol_and_conso(char *p)
// {
//    int vCount = 0 , cCount = 0;
//         while(*p!='\0')
//     {
//         if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
//         		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
//             vCount++;
//         else
//             cCount++;
//         p++;
//     }
//     printf("No of vowels :: %d\n",vCount);
//     printf("No of consonents :: %d",cCount);
// }
// int main()
// {
//     char str[] ="ineuron";
//     count_vol_and_conso(str);
//     return 0;
// }

// 8. Write a program to compute the sum of all elements in an array using pointers.
// #include <stdio.h>
// int array_ele_sum(int *array,int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum = sum + array[i];
//     }
//     return sum;
// }
// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     printf("Element sum :: %d",array_ele_sum(a,5));
//     return 0;
// }

// 9. Write a program to print the elements of an array in reverse order.
// #include <stdio.h>
// void array_reverse(int *array,int size)
// {
//     for (int i = size-1; i >= 0; i--)
//     {
//         printf("%d\t",array[i]);
//     }
// }
// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     array_reverse(&a,5);
//     return 0;
// }

// 10. Write a program to print a string in reverse using a pointer
// #include <stdio.h>
// #include <string.h>
// void str_reverse(char* str1)
// {
//     int temp;
//     int len = strlen(str1);
//       for (int i = 0; i < len/2; i++)
//       {
//           temp = str1[i];
//           str1[i] = str1[len - i - 1];
//           str1[len - i - 1] = temp;
//       }
// }
// int main()
// {
//    char str[] = "DoG";
//    printf("String Before reverse :: %s\n",str);
//    str_reverse(str);
//    printf("String After reverse :: %s\n",str);
//    return 0;
// }
