#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>

//STL ������
// vector - ������ ������

//forward_list - ���������������� ������
//list - ���������� ������ ( ��������������� )
//queue - �������
//stack - ����
//map - ����
//set - ����� �������� ( ��� ) 
// 
// unordered_map - �������������� ���
// unordered_set - ��������������� ���
//priority_queue - ������� ������������ 
//multiset - 
// multimap - 

//cppreference - ����


int main() {
    //int arr[]{ 123, 54 };
    std::vector<int>arr = { 123, 54 };
    std::vector<int>vec;
    arr.push_back(670); // ��������� ����� � ������
    arr.reserve(20); //������������� ����� ����������� capacity

    arr.shrink_to_fit(); // ����� ����������� �� size
    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }

    //std::vector<int>::iterator it;
    std::cout << "====================\n";
    for (std::vector<int>::const_iterator it = arr.begin(); it != arr.end(); it++) { // arr.begin - ���������� �������� ������ �������, iterator - ��������
        std::cout << *it << "";//�������� - ������������ �� ������� ( ��������� �� �������� ������� ), arr.end 
    }

    std::cout << "====================\n";
    std::vector<int> abc(10, 3); // ����� � ������� ����� 10 �����
    for (size_t i = 0; i < abc.size(); i++) {
        std::cout << abc[i] << " ";
    }

    std::cout << '\n';
    std::cout << "arr size " << arr.size() << std::endl; // ������ �������
    std::cout << "arr capacity " << arr.capacity() << std::endl; //capacity - ������� �������

    std::cout << "====================\n";
    std::cout << "====================\n";
    std::cout << "====================\n";

    std::vector<int>my_vector = { 42, 65, 77 };
    std::cout << *my_vector.begin() << std::endl; // begin ��������� �� ������ ������� ( ������� 42 ) , �.�. begin ��������� �� ���� ���������� ��������
    //std::cout << *my_vector.end() << std::endl;  // ����� ������, ������ ��� end �� ��������� ������� ( ������ ���������� ) 
    my_vector.emplace(my_vector.begin() + 1, 33); //����� ������� �������� � �������� �������, �.�. � �� ����� ������� �� ��������� � �������
    for (size_t i = 0; i < my_vector.size(); i++) {
        std::cout << my_vector[i] << " ";
    }

    std::cout << std::endl;

    //my_vector.erase(my_vector.begin(), my_vector.end() + 1); // �������� ��������
    // ��������� �� �������   - � ������ ��������� ���� ����� ���������, ������� �� ��������� ������� �� ����������
    // random access ( ��������� ������ ) O(1) - ����������� ����� ( const time ) ( ����� ��������� ������� �������� ���������� )
    //������� \�������� O(n), n == vectro.size() ��� ������ ������ ��� ������ ������� �������� ������� � ��������. [][][][] ���������[][][] ��������� (memmove )
    //������ size(1) - 1mc, size(2) - 2 mc

    //���������� ��������� O(n^2) ( n - ������ ������� ), O ������� - ���������� ����������� ������� �� ����������, ����������� ����, ��������� �������� � ��������

    //��������� ������
    std::vector<std::vector<int>>vec2d(5, std::vector<int>(10, 5));   //������ ����� ����������������, ������ ��� ����������  � ��������������������� �������� ����� � ����������� ������
    //10 - ���������� ������������ ��r����� ( �����, � ������ �� ������� ������ ), 5 - �������� � ���
    std::cout << "====================\n";
    for (size_t i = 0; i < vec2d.size(); i++) {
        for (size_t j = 0; j < vec2d[i].size(); j++) {
            std::cout << vec2d[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //������� ( queue)

    std::queue<int>q; // ������� 
    //FIFO - ������ ����� ������ �����
    q.push(5);
    q.push(3);
    q.push(1);
    std::cout << "q.front():" << q.front() << std::endl;
    q.pop(); // ������� ������ ������� �� �������
    std::cout << "q.front():" << q.front() << std::endl;

    q.push(4);
    q.push(8);
    q.push(55);

    //all operations of queue == O(1); - ����������� �����
    while (!q.empty()) {
        std::cout << q.front() << " ";   // ������� ������ �������
        q.pop(); // ������ ������ �������
    }

    std::cout << std::endl;

    std::cout << q.empty();

    //����  LIFO Last in first Out - ��������� ����� ������ �����
    std::stack<std::string > my_stack;

    my_stack.push("hello\n"); // ��������� ������� � �����
    my_stack.push("how are u?\n");
    my_stack.push("goodbye\n");

    while (!my_stack.empty())
    {
        std::cout << my_stack.top() << " ";
        my_stack.pop(); // ����� �������� ���������� ������������ ��������
    }


    //MAP - ������������� ���������, � �������� ������ ������� ��� ���� ( ���� � �������� ) ��� ���� ���� ����������...
    std::map<int, std::string> my_map;
    my_map.insert({ 1, "Vadim" });
    my_map.insert({ 2, "Andrew" });
    my_map.insert({ 3, "Bob" });
    my_map.insert({ 42, "Alex" });
    std::cout << "====================\n";
    std::cout << my_map[1] << std::endl; // 1 - ��� ����
    std::cout << my_map[42] << std::endl;// 42 ��� ����, ��������� ���� ����� ����
}