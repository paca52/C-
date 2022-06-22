#include <iostream>
#include <algorithm>
#include <vector>
//Dat je vektor trkaca koji imaju startni broj i vreme trcanja, ispisati njihove poz. i vreme i obrisati vektor
struct trkac{
    float vreme;
    int startni_broj;
};

bool cmp_time(trkac a, trkac b){
    return (a.vreme < b.vreme);
}

int main()
{
    trkac tmp;
    std::vector <trkac> a;
    int n;
    std::cin >> n;
    while(n--){
        std::cout << "Unesite startni broj trkaca: ";
        std::cin >> tmp.startni_broj;
        std::cout << "Unesite vreme trkaca: ";
        std::cin >> tmp.vreme;

        a.push_back(tmp);
    }

    sort(a.begin(), a.end(), cmp_time);

    std::cout << "Rezultati:\n";
    for(auto i=0; i<a.size(); i++)
        std::cout << i+1 << ". " << a[i].startni_broj << " " << a[i].vreme << '\n';

    a.clear();

    return 0;
}
