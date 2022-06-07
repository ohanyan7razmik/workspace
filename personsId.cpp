#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>
#include <vector>

const size_t N = 9;

struct Person {

        int m_id;
        std::string m_name;

        Person()
            : m_id(-1)
        {
                std::cout << this << " " <<  func << " " << LINE << std::endl;
        }

        Person(int id, const std::string& name)
            : m_id(id)
            , m_name(name)
        {
                std::cout << this << " " << func << " " << LINE << std::endl;
        }


        ~Person()
        {
                std::cout << this << " " <<  func << " " << LINE << std::endl;
        }
};

int compare(const void* a, const void* b)
{
    assert(a != 0 && b != 0);

    const Person* x = (Person*) a;
    const Person* y = (Person*) b;
    return x->m_id - y->m_id;
}

int main() {
    Person teamOne[N];
    std::cout << LINE << std::endl;
/*  std::vector<Person> teamOne = {
                            {2, "aaa"},
                            {3, "aaa"},
                            {2, "aaa"},
                            {2, "aaa"},
                            {5, "aaa"},
                            {5, "aaa"},
                            {2, "aaa"},
                            {3, "aaa"},
                            {2, "aaa"}
                        };*/
    std::cout << LINE << std::endl;
    std::cout << sizeof(teamOne) << " " << sizeof(Person) << std::endl;

    teamOne[0] = Person(2, "Melo");
    teamOne[1] = Person(10, "Arman");
    teamOne[2] = Person(12, "Anna");
    teamOne[3] = Person(7, "Vardan");
    teamOne[4] = Person(15, "Hasmik");
    teamOne[5] = Person(18, "David");
    teamOne[6] = Person(21, "Anahit");
    teamOne[7] = Person(1, "Avet");
    teamOne[8] = Person(100, "Iveta");

    std::cout << LINE << std::endl;
    std::cout << "Before sorting" << std::endl;
    for (size_t i = 0; i < N; ++i){
        std::cout << teamOne[i].m_name << "  ID:  " << teamOne[i].m_id << std::endl;
    }
    std::cout << std::endl;

    qsort(teamOne,9,sizeof(Person),compare);

    std::cout << "After sorting" << std::endl;
    for (size_t i = 0; i < N; ++i){
        std::cout << teamOne[i].m_name << "  ID:  " << teamOne[i].m_id << std::endl;
    }
    std::cout << LINE << std::endl;
    std::cout << std::endl;

    return 0;
}