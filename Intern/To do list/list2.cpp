#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Task structure
struct Task {
    string description;
    bool completed;

    Task(string desc) {
        description = desc;
        completed = false;
    }
};

void showMenu() {
    cout << "\n===== TO-DO LIST MANAGER =====\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Completed\n";
    cout << "4. Remove Task\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "\nNo tasks available.\n";
        return;
    }
    cout << "\nYour Tasks:\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].description
             << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
    }
}

int main() {
    vector<Task> tasks;
    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore(); // To handle newline character

        switch (choice) {
            case 1: {
                string desc;
                cout << "Enter task description: ";
                getline(cin, desc);
                tasks.push_back(Task(desc));
                cout << "Task added successfully!\n";
                break;
            }
            case 2:
                viewTasks(tasks);
                break;
            case 3: {
                int index;
                viewTasks(tasks);
                if (!tasks.empty()) {
                    cout << "Enter task number to mark as completed: ";
                    cin >> index;
                    if (index > 0 && index <= tasks.size()) {
                        tasks[index - 1].completed = true;
                        cout << "Task marked as completed!\n";
                    } else {
                        cout << "Invalid task number!\n";
                    }
                }
                break;
            }
            case 4: {
                int index;
                viewTasks(tasks);
                if (!tasks.empty()) {
                    cout << "Enter task number to remove: ";
                    cin >> index;
                    if (index > 0 && index <= tasks.size()) {
                        tasks.erase(tasks.begin() + index - 1);
                        cout << "Task removed successfully!\n";
                    } else {
                        cout << "Invalid task number!\n";
                    }
                }
                break;
            }
            case 5:
                cout << "Exiting To-Do List Manager. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
