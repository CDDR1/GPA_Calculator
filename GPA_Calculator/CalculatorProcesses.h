#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void ReadClasses();

double CalculateGPA(vector<string> grades, vector<int> credits);

void ShowReport(vector<string> names, vector<int> credits, vector<string> grades, double GPA);