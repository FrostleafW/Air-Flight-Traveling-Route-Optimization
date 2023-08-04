#pragma once

void PromptWindow(Graph& graph);
void GraphWindow(Graph& graph, std::string& from, std::string& to, bool& new_path);

std::pair<unsigned int, unsigned int> coord2pixel(std::pair<double, double>& coordinates);
void airportCreate(std::pair<unsigned int, unsigned int>& pixels);
void pathCreate(std::pair<unsigned int, unsigned int>& from, std::pair<unsigned int, unsigned int>& to);