//
//  TTaskList.cpp
//  UnitTest_Examples
//
//  Created by Rachel Susser on 05.09.25.
//

#include "TaskList.h"

#include <gtest/gtest.h>

namespace TTaskList {


TEST(TaskList, AddTask) {
    TaskList tasks;
    tasks.add({"Do laundry", false});
    
    EXPECT_EQ(tasks.count(), 1lu); // does tasks.count() == 1 ?
    EXPECT_EQ(tasks.getAtIndex(0).title, std::string("Do laundry"));
}


TEST(TaskList, AddEmptyTask) {
    TaskList tasks;
    tasks.add({"", false});
    
    EXPECT_EQ(tasks.count(), 1lu);
    EXPECT_EQ(tasks.getAtIndex(0).title, std::string(""));
}


TEST(TaskList, AddMultipleTasks) {
    TaskList tasks;
    tasks.add({"Clean shower", false});
    tasks.add({"Study physics", true});
    
    EXPECT_EQ(tasks.count(), 2lu);
    EXPECT_EQ(tasks.getAtIndex(0).title, std::string("Clean shower"));
    EXPECT_EQ(tasks.getAtIndex(1).title, std::string("Study physics"));
}


TEST(TaskList, CheckDoneTasks) {
    TaskList tasks;
    tasks.add({"Clean shower", false});
    tasks.add({"Study physics", true});

    int doneCount = 0;
    for (auto i = 0; i < tasks.count(); ++i) {
        if (tasks.getAtIndex(i).done) ++doneCount;
    }
    EXPECT_EQ(doneCount, 1);
}

}
