#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool completed;
};

void addTask(vector<Task>& tasks) {
    cout << "Enter task description: ";
    string desc;
    getline(cin, desc);
    tasks.push_back({desc, false});
    cout << "Task added!\n";
}

void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks in the list.\n";
        return;
    }
    cout << "To-Do List:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". [" << (tasks[i].completed ? "X" : " ") << "] "
                  << tasks[i].description << "\n";
    }
}

void markCompleted(vector<Task>& tasks) {
    viewTasks(tasks);
    if (tasks.empty()) return;
    cout << "Enter task number to mark as completed: ";
    size_t num;
    cin >> num;
    cin.ignore();
    if (num < 1 || num > tasks.size()) {
        cout << "Invalid task number.\n";
        return;
    }
    tasks[num - 1].completed = true;
    cout << "Task marked as completed!\n";
}

void removeTask(vector<Task>& tasks) {
    viewTasks(tasks);
    if (tasks.empty()) return;
    cout << "Enter task number to remove: ";
    size_t num;
    cin >> num;
    cin.ignore();
    if (num < 1 || num > tasks.size()) {
        cout << "Invalid task number.\n";
        return;
    }
    tasks.erase(tasks.begin() + num - 1);
    cout << "Task removed!\n";
}

int main() {
    vector<Task> tasks;
    while (true) {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        int choice;
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1: addTask(tasks); break;
            case 2: viewTasks(tasks); break;
            case 3: markCompleted(tasks); break;
            case 4: removeTask(tasks); break;
            case 5: cout << "Goodbye!\n"; return 0;
            default: cout << "Invalid option. Try again.\n";
        }
    }
}