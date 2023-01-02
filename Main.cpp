#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>

//STL вектор
// vector - веткор массив

//forward_list - однонаправленный список
//list - двусвязный список ( двунаправленный )
//queue - очередь
//stack - стек
//map - мапа
//set - набор объектов ( сет ) 
// 
// unordered_map - несорированный мап
// unordered_set - несортированный сет
//priority_queue - очередь приоритетная 
//multiset - 
// multimap - 

//cppreference - сайт


int main() {
    //int arr[]{ 123, 54 };
    std::vector<int>arr = { 123, 54 };
    std::vector<int>vec;
    arr.push_back(670); // добавляем число в массив
    arr.reserve(20); //устанавливаем новую вместимость capacity

    arr.shrink_to_fit(); // ужать вместимость до size
    for (size_t i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }

    //std::vector<int>::iterator it;
    std::cout << "====================\n";
    for (std::vector<int>::const_iterator it = arr.begin(); it != arr.end(); it++) { // arr.begin - возвращает итератор начала вектора, iterator - итератор
        std::cout << *it << "";//итератор - путеводитель по векторв ( указывает на элементы вектора ), arr.end 
    }

    std::cout << "====================\n";
    std::vector<int> abc(10, 3); // здесь в векторе лежит 10 троек
    for (size_t i = 0; i < abc.size(); i++) {
        std::cout << abc[i] << " ";
    }

    std::cout << '\n';
    std::cout << "arr size " << arr.size() << std::endl; // размер массива
    std::cout << "arr capacity " << arr.capacity() << std::endl; //capacity - емкость массива

    std::cout << "====================\n";
    std::cout << "====================\n";
    std::cout << "====================\n";

    std::vector<int>my_vector = { 42, 65, 77 };
    std::cout << *my_vector.begin() << std::endl; // begin указывает на первый элемент ( выведет 42 ) , т.е. begin указывает на поле последнего элемента
    //std::cout << *my_vector.end() << std::endl;  // здесь ошибка, потому что end за пределами массива ( ошибка компиляции ) 
    my_vector.emplace(my_vector.begin() + 1, 33); //метод вставки элемента в середину вектора, т.е. в то место которое мы указываем в скобках
    for (size_t i = 0; i < my_vector.size(); i++) {
        std::cout << my_vector[i] << " ";
    }

    std::cout << std::endl;

    //my_vector.erase(my_vector.begin(), my_vector.end() + 1); // удаление элемента
    // Сложность во времени   - у любого алгоритма есть такая сложность, сколько он расходует времени на выполнение
    // random access ( случайный доступ ) O(1) - константное время ( const time ) ( время обращения клюбому элементу одинаковое )
    //вставка \удаление O(n), n == vectro.size() чем больше вектор тем больше времени занимает вставка и удаление. [][][][] вставляем[][][] переносим (memmove )
    //пример size(1) - 1mc, size(2) - 2 mc

    //существует сложность O(n^2) ( n - размер вектора ), O функция - квадратная зависимость времени от количества, критическая вещь, программа тормозит и зависает

    //двумерный вектор
    std::vector<std::vector<int>>vec2d(5, std::vector<int>(10, 5));   //ветора нужно инициализировать, потому что робращение  к неинициализированному элементу ведет к критической ошибке
    //10 - количество стандартныйх веrторов ( строк, в каждом из которых вектор ), 5 - значение в них
    std::cout << "====================\n";
    for (size_t i = 0; i < vec2d.size(); i++) {
        for (size_t j = 0; j < vec2d[i].size(); j++) {
            std::cout << vec2d[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //Очереди ( queue)

    std::queue<int>q; // очередь 
    //FIFO - первый вошел первый вышел
    q.push(5);
    q.push(3);
    q.push(1);
    std::cout << "q.front():" << q.front() << std::endl;
    q.pop(); // вытащил первый элемент из очереди
    std::cout << "q.front():" << q.front() << std::endl;

    q.push(4);
    q.push(8);
    q.push(55);

    //all operations of queue == O(1); - константное время
    while (!q.empty()) {
        std::cout << q.front() << " ";   // выводим первый элемент
        q.pop(); // удалит первый элемент
    }

    std::cout << std::endl;

    std::cout << q.empty();

    //стек  LIFO Last in first Out - последний зашел первый вышел
    std::stack<std::string > my_stack;

    my_stack.push("hello\n"); // добавляет элемент к стеку
    my_stack.push("how are u?\n");
    my_stack.push("goodbye\n");

    while (!my_stack.empty())
    {
        std::cout << my_stack.top() << " ";
        my_stack.pop(); // метод удаления последнего добавленного элемента
    }


    //MAP - ассоциативный контейнер, у которого каждый элемент это пара ( ключ и значение ) при этом ключ уникальный...
    std::map<int, std::string> my_map;
    my_map.insert({ 1, "Vadim" });
    my_map.insert({ 2, "Andrew" });
    my_map.insert({ 3, "Bob" });
    my_map.insert({ 42, "Alex" });
    std::cout << "====================\n";
    std::cout << my_map[1] << std::endl; // 1 - это ключ
    std::cout << my_map[42] << std::endl;// 42 это ключ, обращение идет через ключ
}