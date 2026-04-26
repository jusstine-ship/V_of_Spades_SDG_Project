// FoodManager.cpp - shared manager template
#include "FoodManager.h"
#include "InputValidator.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int FoodManager::findIndexById(int id) const {
    // TODO Domingo: loop through foods and return index if ID matches.
    return -1;
}

int FoodManager::generateNextId() const {
    // TODO Domingo: find highest ID and return highest + 1.
    return 1;
}

bool FoodManager::loadFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: Cannot open file.\n";
        return false;
    }

    foods.clear();
    string line;

    while (getline(file, line)) {
        stringstream ss(line);

        int id, price;
        string name, weather, budget, restaurant, healthNote, temp;

        getline(ss, temp, '|'); id = stoi(temp);
        getline(ss, name, '|');
        getline(ss, weather, '|');
        getline(ss, budget, '|');
        getline(ss, temp, '|'); price = stoi(temp);
        getline(ss, restaurant, '|');
        getline(ss, healthNote);

        foods.push_back(FoodItem(id, name, weather, budget, price, restaurant, healthNote));
    }

    file.close();
    return true;
}

void FoodManager::viewAllFoods() const {
    // TODO Domingo
}

void FoodManager::searchFood() const {
    // TODO Domingo
}

void FoodManager::addFood() {
    // TODO Domingo
}

void FoodManager::updateFood() {
    // TODO Domingo
}

void FoodManager::deleteFood() {
    // TODO Domingo
}

void FoodManager::recommendByWeather(const string& weather) const {
    // TODO Paulino
}

void FoodManager::recommendByWeatherAndBudget(const string& weather) const {
    // TODO Paulino
}

void FoodManager::saveFavoriteFood(const string& weather) {
    // TODO Paulino
}

void FoodManager::viewFavorites() const {
    // TODO Paulino
}

void FoodManager::generateSummaryReport(const string& currentWeather) const {
    // TODO Paulino
}
