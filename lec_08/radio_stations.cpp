#include <iostream>
#include <unordered_set>
#include <unordered_map>

using namespace std;

unordered_set<string> operator & (const unordered_set<string>&, 
                                const unordered_set<string>&);
void operator -= (unordered_set<string>&, 
                const unordered_set<string>&);

int main() {
    unordered_set<string> statesNeeded({ "mt", "wa", "or", "id", "nv", "ut", "ca", "az" });

    unordered_map<string, unordered_set<string>> stations;
    stations.insert({ "kone", {"id", "nv", "ut"} });
    stations.insert({ "ktwo", {"wa", "id", "mt" } });
    stations.insert({ "kthree", {"or", "nv", "ca" } });
    stations.insert({ "kfour", {"nv", "ut" } });
    stations.insert({ "kfive", {"ca", "az" } });

    unordered_set<std::string> finalStations;

    while (!statesNeeded.empty()) {
        string bestStation;
        unordered_set <string> statesCovered;
        for (const auto &i : stations) {
            unordered_set<string> coverage = i.second & statesNeeded;
            if (coverage.size() > statesCovered.size()) {
                bestStation = i.first;
                statesCovered = coverage;
            }
        }
        statesNeeded -= statesCovered;
        finalStations.insert(bestStation);
    }
    
    for (const auto &i : finalStations)
        cout << i << '\n';

    return 0;
}

unordered_set<string> operator & (const std::unordered_set<std::string>& a,
                        const unordered_set<std::string>& b) {
    unordered_set<string> result;
    for (const auto &i : a)
        for (const auto &j : b)
            if (i == j)
                result.insert(i);
    return result;
}

void operator -= (unordered_set<string> &a,
        const unordered_set<string> &b) {
    for (auto j = b.begin(); j != b.end(); j++)
        for (auto i = a.begin(); i != a.end();)
            if (*i == *j) 
                i = a.erase(i);
            else
                i++;
}