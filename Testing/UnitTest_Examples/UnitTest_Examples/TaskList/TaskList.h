//
//  TaskList.h
//  UnitTest_Examples
//
//  Created by Rachel Susser on 05.09.25.
//

#pragma once

#include <functional>
#include <string>
#include <vector>

struct Task {
    std::string title;
    bool done;
};

class TaskList {

public:
    void add(const Task& task) {
        tasks.push_back(task);
    }
    
    void remove(std::string& title); // unused for this example
    
    void clear() {
        tasks.clear();
    }
    
    size_t count() {
        return tasks.size();
    }
    
    void callForTasks(std::function<void (const Task&)> func) const {
        for (const auto& task : tasks) {
            func(task);
        }
    }
    
private:
    std::vector<Task> tasks;
};
