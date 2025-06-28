#include <iostream>
#include <string>
#include "ListSequence.h"
#include "ArraySequence.h"

int main() {
    int len;
    std::cout << "Enter the length: ";
    std::cin >> len;
    int* items = (int*)malloc(len * sizeof(int));
    for (int i = 0; i < len; i++) {
        std::cout << "Enter: ";
        std::cin >> items[i];
    }
    ArraySequence<int> arr(items, len);

    arr.Print();
    std::cout << arr.GetLength() << std::endl;
    arr.InsertAt(3, 2);
    arr.Print();
    arr.Append(4);
    arr.Print();
    arr.Prepend(0);
    arr.Print();
    arr.InsertAt(92, 5);
    arr.Print();
    std::cout << arr.Get(3) << std::endl;
    std::cout << arr.GetFirst() << std::endl;
    std::cout << arr.GetLast() << std::endl;
    arr.GetSubsequence(3, 7)->Print();
    arr.Concat(arr.GetSubsequence(0, 3))->Print();
    std::cout << arr.GetLength() << std::endl;
    return 0;
}

//int main() {
//
//	int len;
//	std::cout << "Enter the length: ";
//	std::cin >> len;
//	char* items = (char*)malloc(len * sizeof(char));
//	for (int i = 0; i < len; i++) {
//		std::cout << "Enter: ";
//		std::cin >> items[i];
//	}
//	ArraySequence<char> arr(items, len);
//
//	arr.print();
//	std::cout << arr.GetLength() << std::endl;
//	arr.InsertAt('t', 4);
//	arr.print();
//	arr.Append('w');
//	arr.print();
//	arr.Prepend('*');
//	arr.print();
//	arr.InsertAt('/', 5);
//	arr.print();
//	std::cout << arr.Get(3) << std::endl;
//	std::cout << arr.GetFirst() << std::endl;
//	std::cout << arr.GetLast() << std::endl;
//	arr.GetSubsequence(3, 7)->print();
//	arr.Concat(arr.GetSubsequence(0, 3))->print();
//	std::cout << arr.GetLength() << std::endl;
//	return 0;
//}

//int main() {
//
//	int len;
//	std::cout << "Enter the length: ";
//	std::cin >> len;
//	float* items = (float*)malloc(len * sizeof(float));
//	for (int i = 0; i < len; i++) {
//		std::cout << "Enter: ";
//		std::cin >> items[i];
//	}
//	ArraySequence<float> arr(items, len);
//
//	arr.print();
//	std::cout << arr.GetLength() << std::endl;
//	arr.InsertAt(3.45, 2);
//	arr.print();
//	arr.Append(4.89);
//	arr.print();
//	arr.Prepend(-0.42);
//	arr.print();
//	arr.InsertAt(9.54, 5);
//	arr.print();
//	std::cout << arr.Get(3) << std::endl;
//	std::cout << arr.GetFirst() << std::endl;
//	std::cout << arr.GetLast() << std::endl;
//	arr.GetSubsequence(3, 7)->print();
//	arr.Concat(arr.GetSubsequence(0, 3))->print();
//	std::cout << arr.GetLength() << std::endl;
//	return 0;
//}

//int main() {
//
//	std::string* items;
//	std::string* arr2;
//	int count;
//	std::string s;
//	char buf[80];
//	std::cout << "Enter strings:" << std::endl;
//	count = 0;
//	items = nullptr;
//	do
//	{
//		std::cout << "=> ";
//		std::cin.getline(buf, 80, '\n');
//		s = buf;
//		if (s != "")
//		{
//			count++;
//			arr2 = new std::string[count];
//			for (int i = 0; i < count - 1; i++)
//				arr2[i] = arr2[i];
//			arr2[count - 1] = s;
//			if (items != nullptr)
//				delete[] items;
//			items = arr2;
//		}
//	} while (s != "");
//
//	ArraySequence<std::string*> arr(items, len);
//
//	arr.print();
//	std::cout << arr.GetLength() << std::endl;
//	arr.InsertAt("hello", 2);
//	arr.print();
//	arr.Append("world");
//	arr.print();
//	arr.Prepend("goodbye");
//	arr.print();
//	arr.InsertAt("coding", 5);
//	arr.print();
//	std::cout << arr.Get(3) << std::endl;
//	std::cout << arr.GetFirst() << std::endl;
//	std::cout << arr.GetLast() << std::endl;
//	arr.GetSubsequence(3, 7)->print();
//	arr.Concat(arr.GetSubsequence(0, 3))->print();
//	std::cout << arr.GetLength() << std::endl;
//	return 0;
//}