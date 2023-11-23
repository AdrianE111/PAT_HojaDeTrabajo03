#include "Ejercicio02.h"
#include <unordered_map>
#include <vector>
#include <algorithm>

vector<vector<string>>* Ejercicio02::groupAnagrams(vector<string>& strings)
{
    // Mapa para almacenar los grupos de anagramas
    std::unordered_map<string, vector<string>> anagramGroups;

    // Iterar sobre cada palabra en el vector de strings
    for (const string& word : strings)
    {
        // Crear una copia de la palabra y ordenar sus caracteres
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());

        // Agregar la palabra al grupo correspondiente en el mapa
        anagramGroups[sortedWord].push_back(word);
    }

    // Crear el resultado final a partir de los grupos del mapa
    vector<vector<string>>* result = new vector<vector<string>>;
    for (auto& group : anagramGroups)
    {
        result->push_back(group.second);
    }

    return result;
}

