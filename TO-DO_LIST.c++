#include <iostream>
#include <vector>
using namespace std;
class ToDoList
{
public:
    void addTask(string task)
    {
        tasks.push_back(task);
        cout << "Task \"" << task << "\" added successfully." << endl;
    }

    void viewTasks()
    {
        if (tasks.empty())
        {
            cout << "No tasks available." << endl;
        }
        else
        {
            cout << "Tasks:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i)
            {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
        }
    }

    void deleteTask(size_t taskIndex)
    {
        if (taskIndex >= 1 && taskIndex <= tasks.size())
        {
            string deletedTask = tasks[taskIndex - 1];
            tasks.erase(tasks.begin() + taskIndex - 1);
            cout << "Task \"" << deletedTask << "\" deleted successfully." << endl;
        }
        else
        {
            cout << "Invalid task index." << endl;
        }
    }

private:
    vector<string> tasks;
};

int main()
{
    ToDoList todoList;

    while (true)
    {
        cout << "\n===== To-Do List Manager =====" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Quit" << endl;

        int choice;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string task;
            cout << "Enter the task: ";
            cin.ignore();
            getline(cin, task);
            todoList.addTask(task);
            break;
        }
        case 2:
            todoList.viewTasks();
            break;
        case 3:
        {
            todoList.viewTasks();
            size_t taskIndex;
            cout << "Enter the task index to delete: ";
            cin >> taskIndex;
            todoList.deleteTask(taskIndex);
            break;
        }
        case 4:
            cout << "Exiting the program. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    }

    return 0;
}