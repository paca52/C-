#include <iostream>
#include <vector>
#include <algorithm>


void ispis(std::vector <int> v){
    for(int i=0; i<v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << '\n';
}

int main()
{
    std::vector <int> v;
    std::vector <int> v2;
    std::vector <int> v3;
    std::vector <int> v4;
    std::vector <int> v5;

    int a;
    do{
        std::cin >> a;
        if(a == 0) break;
        if(a%2==0)
            v2.push_back(a);
        v.push_back(a);
    }while(1);

    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        v4.push_back(v[i]);
    }

    for(int i=0; i<v.size(); i++){
        if(i == 0 || v[i-1] != v[i])
            v3.push_back(v[i]);
    }

    std::cout << "v1: ";
    ispis(v);

    std::cout << "v2: ";
    ispis(v2);

    std::cout << "v3: ";
    ispis(v3);

    std::cout << "v4: ";
    ispis(v4);

    std::cout << "\nkoji treba izbaciti iz v1: ";
    std::cin >> a;

    std::vector <int>::iterator it;
    it = v.begin();
    for(auto it = v.begin(); it != v.end(); it++){
        if(*it == a)
            v.erase(it);

    }

    std::cout << "v1: ";
    ispis(v);
    v.clear();
    return 0;
}
