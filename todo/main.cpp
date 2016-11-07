//
//  main.cpp
//  todo
//
//  Created by nathan on 11/6/16.
//  Copyright © 2016 nathan. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, const char * argv[]) {
    // insert code here...
    
  std::string add = "add";
  std::string a = "a";
  
  std::string list = "list";
  std::string l = "l";
  
  std::string first_arg;
  std::string second_arg;
    
  if (argc > 1) {
    
    first_arg = argv[1];
    
    
    if (argc == 2) {
      if (first_arg.compare(list) == 0 || first_arg.compare(l) == 0) {
        std::ifstream todo;
        std::string line;
        todo.open("todo.txt");
        if (todo.is_open()) {
          while (std::getline(todo, line)) {
            std::cout << line << "\n";
          }
        }
        todo.close();
        std::cout << "\n" << "end of list\n";
      }
    }
    else if (argc == 3) {
      second_arg = argv[2];
      
      if (first_arg.compare(add) == 0 || first_arg.compare(a) == 0) {
        std::ofstream todo;
        todo.open("todo.txt");
        todo << "+ " << second_arg << "\n";
        todo.close();
        std::cout << "added item " << second_arg << "\n";
      }
      
    }
    if (argc > 3) {
      std::cout << "too many arguments" << "\n";
    }
  }
  return 0;
}

void createFile() {
    if (true) {
    
    }
}
