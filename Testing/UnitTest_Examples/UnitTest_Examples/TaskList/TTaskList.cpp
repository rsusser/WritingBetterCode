//
//  TTaskList.cpp
//  UnitTest_Examples
//
//  Created by Rachel Susser on 05.09.25.
//

#include "TaskList.h"

#include <gtest/gtest.h>

namespace TTaskList {

TaskList tasks;


TEST(TaskList, AddTask) {
    tasks.add({"Do laundry", false});
    
    EXPECT_EQ(tasks.count(), 1lu); // does tasks.count() == 1 ?
    EXPECT_EQ(tasks.getAtIndex(0).title, std::string("Do laundry"));
}


TEST(TaskList, AddEmptyTask) {
    tasks.add({"", false});
    
    EXPECT_EQ(tasks.count(), 2lu);
    EXPECT_EQ(tasks.getAtIndex(1).title, std::string(""));
}


TEST(TaskList, AddMultipleTasks) {
    tasks.add({"Clean shower", false});
    tasks.add({"Study physics", true});
    
    EXPECT_EQ(tasks.count(), 3lu);
    EXPECT_EQ(tasks.getAtIndex(1).title, std::string("Clean shower"));
    EXPECT_EQ(tasks.getAtIndex(2).title, std::string("Study physics"));
}


TEST(TaskList, CheckDoneTasks) {
    int doneCount = 0;
    for (auto i = 0; i < tasks.count(); ++i) {
        if (tasks.getAtIndex(i).done) ++doneCount;
    }
    EXPECT_EQ(doneCount, 1);
}

}
