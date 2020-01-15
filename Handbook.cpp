#include <bits/stdc++.h> //вызов всех стандартных библиотек

using namespace std;

/*typedef string str; //сокращает названия типов данных
typedef long long ll;*/

/*#define PB push_back //переименовывает методы
#define S second*/

    vector<int> permutation, arr;
    bool chosen[n+1];
    }
    void search() { //перестановки в массиве arr
        if (permutation.size() == n) {
                // обработать перестановку
        } else {
            for (int i : arr) {
                if (chosen[i]) continue;
                chosen[i] = true;
                permutation.push_back(i);
                search();
                chosen[i] = false;
                permutation.pop_back();
            }
        }
    }

    for (int i = 1; i <= n; i++) { //дргой вариант перебора массива {1, ... n}
        permutation.push_back(i);
    }
    do {
	 	 // обработать перестановку
    } while (next_permutation(permutation.begin(), permutation.end()));



    int best = 0, sum = 0;
    for (int k = 0; k < n; k++) { //поиск подмножества с максимальной суммой
            /*Рассмотрим подзадачу нахождения подмассива с максимальной суммой, заканчивающегося в позиции k. Есть две возможности:
    1. Подмассив состоит из единственного элемента в позиции k.
    2. Подмассив состоит из подмассива, заканчивающегося в позиции
    k − 1, за которым следует элемент в позиции k.
    Во втором случае, поскольку мы ищем подмассив с максимальной суммой, сумма подмассива, заканчивающегося в позиции k – 1, также должна
    быть максимальной. Таким образом, задачу можно решить эффективно,
    если вычислять сумму максимального подмассива для каждой позиции
    последнего элемента слева направо.*/
        sum = max(array[k],sum+array[k]);
        best = max(best,sum);
    }
    cout << best << "\n";


    int a = 0, b = n-1; //двоичный поиск для упорядоченного массива
    while (a <= b) {
        int k = (a+b)/2;
        if (array[k] == x) {
                     // x найден в позиции с индексом k
        }
        if (array[k] < x) a = k+1;
        else b = k-1;
    }

    /*Более полезный пример: функция lower_bound возвращает итератор на
    первый элемент отсортированного диапазона, значение которого не меньше x, а функция upper_bound – итератор на первый элемент, значение которого не больше x:
    vector<int> v = {2,3,3,5,7,8,8,8};
    auto a = lower_bound(v.begin(),v.end(),5);
    auto b = upper_bound(v.begin(),v.end(),5);
    cout << *a << " " << *b << "\n"; // 5 7*/

    /*deque<int> d;
    d.push_back(5); // [5]
    d.push_back(2); // [5,2]
    d.push_front(3); // [3,5,2]
    d.pop_back(); // [3,5]
    d.pop_front(); // [5]*/


    /*#include <ext/pb_ds/assoc_container.hpp>
    using namespace __gnu_pbds;
    После этого можно определить структуру данных indexed_set, которая
    похожа на множество, но допускает индексирование как массив. Для значений типа int определение выглядит так:
    typedef tree<int,null_type,less<int>, rb_tree_tag,
     tree_order_statistics_node_update> indexed_set;
    А создается множество так:
    indexed_set s;
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(9);
    Особенность этого множества состоит в том, что доступ можно осуществлять по индексу, который элемент имел бы в отсортированном массиве.
    Функция find_by_order возвращает итератор, указывающий на элемент в
    заданной позиции:
    5.3. Эксперименты  77
    auto x = s.find_by_order(2);
    cout << *x << "\n"; // 7
    А функция order_of_key возвращает позицию заданного элемента:
    cout << s.order_of_key(7) << "\n"; // 2
    Если элемент отсутствует во множестве, то мы получим позицию, в которой он находился бы, если бы присутствовал:
    cout << s.order_of_key(6) << "\n"; // 2
    cout << s.order_of_key(8) << "\n"; // 3*/

    /*По умолчанию элементы очереди с приоритетом в C++ отсортированы в
    порядке убывания, так что поддерживаются поиск и удаление наибольшего элемента, что и продемонстрировано в следующем коде:
    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);
    cout << q.top() << "\n"; // 7
    q.pop();
    cout << q.top() << "\n"; // 5
    q.pop();
    q.push(6);
    cout << q.top() << "\n"; // 6
    q.pop();
    Для создания очереди с приоритетом, поддерживающей поиск и удаление наименьшего элемента, нужно поступить так:
    priority_queue<int,vector<int>,greater<int>> q;*/




    //ДП
        //Задача про набирание суммы минимальнвм кол-вом элементов массива
        /*bool ready[N];
        int value[N];
        где ready[x] – признак, показывающий, было ли вычислено значение
        solve(x), а value[x] – само значение, если оно было вычислено. Константа N
        выбирается так, чтобы все необходимые значения уместились в массив.
        Теперь функцию можно реализовать эффективно:
        int solve(int x) {
         if (x < 0) return INF;
         if (x == 0) return 0;
         if (ready[x]) return value[x];
         int best = INF;
         for (auto c : coins) {
         best = min(best, solve(x-c)+1);
         }
         ready[x] = true;
        value[x] = best;
         return best;
        }*/
        //Другой метод заполнения value
        /*value[0] = 0;
        for (int x = 1; x <= n; x++) {
        value[x] = INF;
         for (auto c : coins) {
         if (x-c >= 0) {
          value[x] = min(value[x], value[x-c]+1);
         }
         }
        }*/

        //Задача о максимальной сумме пути из верхней левой клетки до нижней правой
        /*Пронумеруем строки и столбцы сетки числами от 1 до n, и пусть value[y][x]
        равно значению в клетке (y, x). Обозначим sum(y, x) максимальную сумму
        на пути из левого верхнего угла в клетку square(y, x). Тогда sum(n, n) – максимальная сумма на путях из левого верхнего в правый нижний угол. Так,
        в нашем примере сетки sum(5, 5) = 67. Справедлива формула
        sum(y, x) = max(sum(y, x − 1), sum(y − 1, x)) + value[y][x],
        основанная на наблюдении, что путь, заканчивающийся в клетке (y, x),
        может приходить в нее либо из клетки (y, x − 1), либо из клетки (y − 1, x)
        (рис. 6.3). Поэтому мы выбираем направление, доставляющее максимум
        сумме. Положим sum(y, x) = 0, если y = 0 или x = 0, чтобы рекуррентная формула была справедлива также для клеток, примыкающих к левому и верхнему краю.
        Рис. 6.3. Два возможных способа дойти до клетки
        Поскольку у функции два параметра, массив в методе динамического
        программирования тоже должен быть двумерным, например:
        int sum[N][N];
        а суммы вычисляются следующим образом:
        for (int y = 1; y <= n; y++) {
         for (int x = 1; x <= n; x++) {
         sum[y][x] = max(sum[y][x-1],sum[y-1][x])+value[y][x];
         }
        }*/


        //Задача о рюкзаке: пожно ли набрать сумму данным набором весов
        /*possible[0] = true;
        for (int k = 1; k <= n; k++) {
         for (int x = m-w[k]; x >= 0; x--) {
         possible[x+w[k]] |= possible[x];
         }
        }*/


        //имеется лифт с
            //максимальной грузоподъемностью x и n человек, желающих подняться с
            //первого на последний этаж. Пассажиры пронумерованы от 0 до n – 1, вес
            //i-го пассажира равен weight[i]. За какое минимальное количество поездок
            //удастся перевезти всех на верхний этаж?
        /*Обозначим rides(S) минимальное число поездок для подмножества S, а
        last(S) – минимальный вес последней группы в решении с минимальным
        числом поездок. Так, в примере выше
        rides({3, 4}) = 2 и last({3, 4}) = 5,
        поскольку оптимальный способ поднять пассажиров 3 и 4 на последний
        этаж – везти их по отдельности, включив пассажира 4 в первую группу, тогда будет минимизирован вес второй группы. Понятно, что наша конечная
        цель – вычислить значение rides({0 … n − 1}).
        Мы можем вычислять значения функций рекурсивно, а затем применить динамическое программирование. Чтобы вычислить значения для
        подмножества S, мы перебираем всех пассажиров, принадлежащих S, и
        производим оптимальный выбор последнего пассажира p, который входит в лифт. Каждый такой выбор порождает подзадачу с меньшим под­
        множеством пассажиров. Если last(S \ p) + weight[p] ≤ x, то мы можем включить p в последнюю группу. В противном случае придется выполнить еще
        одну поездку специально для p.
        Вычисление по методу динамического программирования удобно реализовать с помощью поразрядных операций. Сначала объявим массив
        pair<int,int> best[1<<N];
        в котором для каждого подмножества S хранится пара (rides(S), last(S)).
        Для пустого подмножества поездки не нужны:
        best[0] = {0,0};
        Заполнить массив можно следующим образом:
        for (int s = 1; s < (1<<n); s++) {
                 // начальное значение: необходимо n+1 поездок
        best[s] = {n+1,0};
         for (int p = 0; p < n; p++) {
         if (s&(1<<p)) {
         auto option = best[s^(1<<p)];
         if (option.second+weight[p] <= x) {
                                         // добавить p в существующую группу пассажиров
         option.second += weight[p];
         } else {
                                         // предусмотреть для p отдельную поездку
         option.first++;
         option.second = weight[p];
         }
         best[s] = min(best[s], option);
         }
         }
        }*/

    //ГРАФЫ
        //DFS
        /*vector<int> adj[N];
        bool visited[N];
        void dfs(int s) {
         if (visited[s]) return;
         visited[s] = true;
                         // обработать вершину s
         for (auto u: adj[s]) {
         dfs(u);
         }
        }*/

        //BFS
        /*queue<int> q;
        bool visited[N];
        int distance[N];
        visited[x] = true;
        distance[x] = 0;
        q.push(x);
        while (!q.empty()) {
         int s = q.front(); q.pop();
                 // обработать вершину s
         for (auto u : adj[s]) {
         if (visited[u]) continue;
         visited[u] = true;
         distance[u] = distance[s]+1;
         q.push(u);
         }
        }*/

        //Алгоритм Форда-Беллмана
        /* Приведенная ниже реализация алгоритма Беллмана–Форда определяет кратчайшие расстояния от вершины x до всех вершин графа. Предполагается, что граф представлен списком ребер, содержащим
        кортежи вида (a,b,w); каждый такой кортеж означает, что существует ребро веса w, соединяющее вершины a и b.
        Алгоритм состоит из n − 1 раундов. На каждом раунде алгоритм перебирает все ребра графа и пытается уменьшить расстояния. Строится массив
        distance, в котором хранятся расстояния от вершины x до каждой вершины графа. Константа INF обозначает бесконечное расстояние.
        for (int i = 1; i <= n; i++) {
        distance[i] = INF;
        }
        distance[x] = 0;
        for (int i = 1; i <= n-1; i++) {
         for (auto e : edges) {
         int a, b, w;
         tie(a, b, w) = e;
         distance[b] = min(distance[b], distance[a]+w);
         }
        }*/

        //Алгоритм Дейкстры
        /*Граф представлен в
        виде списков смежности, так что adj[a] содержит пару (b, w), если существует ребро веса w, соединяющее вершины a и b. Очередь с приоритетом
        priority_queue<pair<int,int>> q;
        содержит пары вида (−d, x), означающие, что текущее расстояние до вершины x равно d. Массив distance содержит расстояния до всех вершин, а
        массив processed позволяет узнать, была ли вершина обработана.
        Отметим, что в очереди с приоритетом хранятся расстояния до вершин
        со знаком минус. Дело в том, что по умолчанию реализация очереди в стандартной библиотеке C++ находит максимальный элемент, а нам нужен минимальный. Изменив знак расстояния, мы сможем воспользоваться имеющейся реализацией очереди без каких-либо изменений2
        . Отметим также,
        что в очереди может находиться несколько экземпляров вершины, но обработан будет только тот экземпляр, в котором расстояние минимально.
        Код приведен ниже:
        for (int i = 1; i <= n; i++) {
        distance[i] = INF;
        }
        distance[x] = 0;
        q.push({0,x});
        while (!q.empty()) {
         int a = q.top().second; q.pop();
         if (processed[a]) continue;
         processed[a] = true;
         for (auto u : adj[a]) {
         int b = u.first, w = u.second;
         if (distance[a]+w < distance[b]) {
         distance[b] = distance[a]+w;
         q.push({-distance[b],b});
         }
         }
        }  */

        //Адгоритм Флойда-Уоршила
        /*Приведенная ниже реализация строит матрицу расстояний, в которой элемент dist[a][b] равен кратчайшему расстоянию между вершинами a и b.
        Вначале алгоритм инициализирует dist на основе матрицы смежности
        графа adj:
        for (int i = 1; i <= n; i++) {
         for (int j = 1; j <= n; j++) {
         if (i == j) dist[i][j] = 0;
         else if (adj[i][j]) dist[i][j] = adj[i][j];
         else dist[i][j] = INF;
         }
        }
        После этого кратчайшие расстояния можно найти следующим образом:
        for (int k = 1; k <= n; k++) {
         for (int i = 1; i <= n; i++) {
         for (int j = 1; j <= n; j++) {
         dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
         }
         }
        }*/


        //Поиск минимального остовного дерева
        /*При реализации алгоритма Краскала удобно использовать
        представление графа в виде списка ребер. На первом этапе мы сортируем
        этот список за время O(m log m), а на втором этапе строим минимальное
        остовное дерево:
        for (...) {
         if (!same(a,b)) unite(a,b);
        }
        Цикл перебирает находящиеся в списке ребра и обрабатывает каждое
        ребро (a, b), соединяющее вершины a и b. Нам необходимы две функции:
        same определяет, принадлежат ли вершины a и b одной связной компоненте, а unite объединяет компоненты, содержащие a и b.*/


        //Непересекающиеся множества, алгоритм Краскала
        /*Систему непересекающихся множеств удобно реализовать
        с помощью массивов. Для каждого элемента в массиве link хранится следующий элемент пути или сам этот элемент, если он является представителем, а в массиве size для каждого представителя хранится размер соответствующего множества.
        Вначале каждое множество состоит из одного элемента:
        for (int i = 1; i <= n; i++) link[i] = i;
        for (int i = 1; i <= n; i++) size[i] = 1;
        Функция find возвращает представителя элемента x. Его можно найти,
        проследовав по пути, начинающемуся в x.
        int find(int x) {
         while (x != link[x]) x = link[x];
         return x;
        }
        Функция same проверяет, принадлежат ли элементы a и b одному множеству. Это легко сделать, воспользовавшись функцией find:
        124  Глава 7. Алгоритмы на графах
        bool same(int a, int b) {
         return find(a) == find(b);
        }
        Функция unite объединяет множества, содержащие элементы a и b (они
        должны принадлежать разным множествам). Сначала функция находит
        представителей множеств, а затем соединяет представителя меньшего
        множества с представителем большего.
        void unite(int a, int b) {
        a = find(a);
        b = find(b);
         if (size[a] < size[b]) swap(a,b);
        size[a] += size[b];
        link[b] = a;
        }*/

        //ДЛЯ ДЕРЕВЬЕВ
            //обход дерева
            /*void dfs(int s, int e) {
                     // обработать вершину s
             for (auto u : adj[s]) {
             if (u != e) dfs(u, s);
             }
            }



        //Дерево Фенвика
        /*Нам понадобится следующий
        факт: значение p(k) можно вычислить по формуле:
        p(k) = k & −k,
        которая выделяет самый младший единичный бит k.
        Следующая функция вычисляет sum
        q
        (1, k):
        int sum(int k) {
         int s = 0;
         while (k >= 1) {
         s += tree[k];
         k -= k&-k;
         }
         return s;
        }
        А эта функция увеличивает значение k-го элемента массива на x (x может иметь любой знак):
        void add(int k, int x) {
         while (k <= n) {
         tree[k] += x;
         k += k&-k;
         }
        }*/


        //ДЕРЕВО ОТРЕЗКОВ
        /*Итак, дерево отрезков мы храним просто в виде массива t[], размера вчетверо больше размера n входных данных:

        int n, t[4*MAXN];
        Процедура построения дерева отрезков по заданному массиву a[] выглядит следующим образом: это рекурсивная функция, ей передаётся сам массив a[], номер v текущей вершины дерева, и границы tl и tr отрезка, соответствующего текущей вершине дерева. Из основной программы вызывать эту функцию следует с параметрами v=1, tl=0, tr=n-1.

        void build (int a[], int v, int tl, int tr) {
            if (tl == tr)
                t[v] = a[tl];
            else {
                int tm = (tl + tr) / 2;
                build (a, v*2, tl, tm);
                build (a, v*2+1, tm+1, tr);
                t[v] = t[v*2] + t[v*2+1];
            }
        }
        Далее, функция для запроса суммы представляет из себя также рекурсивную функцию, которой таким же образом передаётся информация о текущей вершине дерева (т.е. числа v, tl, tr, которым в основной программе следует передавать значения 1, 0, n-1 соответственно), а помимо этого — также границы l и r текущего запроса. В целях упрощения кода эта фукнция всегда делает по два рекурсивных вызова, даже если на самом деле нужен один — просто лишнему рекурсивному вызову передастся запрос, у которого l > r, что легко отсекается дополнительной проверкой в самом начале функции.

        int sum (int v, int tl, int tr, int l, int r) {
            if (l > r)
                return 0;
            if (l == tl && r == tr)
                return t[v];
            int tm = (tl + tr) / 2;
            return sum (v*2, tl, tm, l, min(r,tm))
                + sum (v*2+1, tm+1, tr, max(l,tm+1), r);
        }
        Наконец, запрос модификации. Ему точно так же передаётся информация о текущей вершине дерева отрезков, а дополнительно указывается индекс меняющегося элемента, а также его новое значение.

        void update (int v, int tl, int tr, int pos, int new_val) {
            if (tl == tr)
                t[v] = new_val;
            else {
                int tm = (tl + tr) / 2;
                if (pos <= tm)
                    update (v*2, tl, tm, pos, new_val);
                else
                    update (v*2+1, tm+1, tr, pos, new_val);
                t[v] = t[v*2] + t[v*2+1];
            }
        }*/

    //Решето Эратосфена
    /*for (int x = 2; x <= n; x++) {
        if (sieve[x]) continue;
            for (int u = 2*x; u <= n; u += x) {
                sieve[u] = 1;
        }
    }*/

    //Алгоритм Евклида
    /*int gcd(int a, int b) {
     if (b == 0) return a;
     return gcd(b, a%b);
    }*/

    //Возведение в степень по модулю
    /*int modpow(int x, int n, int m) {
     if (n == 0) return 1%m;
     long long u = modpow(x,n/2,m);
    u = (u*u)%m;
     if (n%2 == 1) u = (u*x)%m;
     return u;
    }*/


int main (){
    ios::sync_with_stdio(0); //ускорение ввода/вывода
    cin.tie(0);
    //код
    return 0;
}*/
