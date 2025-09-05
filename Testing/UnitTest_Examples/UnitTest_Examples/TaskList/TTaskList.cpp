//
//  TTaskList.cpp
//  UnitTest_Examples
//
//  Created by Rachel Susser on 05.09.25.
//

#include "TaskList.h"

#include <gtest/gtest.h>

namespace TTaskList {

bool TaskListContainsExactlyOnce(const TaskList& taskList,
                                 const std::string& taskName) {
    auto count = 0;
    taskList.callForTasks([&count, &taskName](const Task& task) {
        if (task.title == taskName) {
            ++count;
        }
    });
    return count == 1;
}


TEST(TaskList, AddTask) {
    TaskList tasks;
    tasks.add({"Do laundry", false});
    
    EXPECT_EQ(tasks.count(), 1lu); // does tasks.count() == 1 ?
    EXPECT_TRUE(TaskListContainsExactlyOnce(tasks, std::string("Do laundry")));
}


TEST(TaskList, AddEmptyTask) {
    TaskList tasks;
    tasks.add({"", false});
    
    EXPECT_EQ(tasks.count(), 1lu);
    EXPECT_TRUE(TaskListContainsExactlyOnce(tasks, std::string("")));
}


TEST(TaskList, AddMultipleTasks) {
    TaskList tasks;
    tasks.add({"Clean shower", false});
    tasks.add({"Study physics", true});
    
    EXPECT_EQ(tasks.count(), 2lu);
    EXPECT_TRUE(TaskListContainsExactlyOnce(tasks, std::string("Clean shower")));
    EXPECT_TRUE(TaskListContainsExactlyOnce(tasks, std::string("Study physics")));
}


TEST(TaskList, CheckDoneTasks) {
    TaskList tasks;
    tasks.add({"Clean shower", false});
    tasks.add({"Study physics", true});

    int doneCount = 0;
    tasks.callForTasks([&tasks, &doneCount](const Task& task) {
        if (task.done) {
            ++doneCount;
        }
    });

    EXPECT_EQ(doneCount, 1);
}

}
