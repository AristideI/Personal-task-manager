# Personal Task Manager

A simple web-based personal task manager application that allows users to add, edit, and delete tasks with a title, description, due date, and priority level.

## Features

- Add tasks with title, description, due date, and priority level
- (To be implemented) Edit tasks
- (To be implemented) Delete tasks
- (To be implemented) Sort tasks by due date, priority, or alphabetical order
- (To be implemented) Save tasks to a file

## Technologies

- HTML
- CSS
- C (with Common Gateway Interface - CGI)

## Installation & Setup

1. Install a web server with CGI enabled, such as Apache.

2. Place the `index.html` and `styles.css` files in the document root directory (e.g., `/var/www/html`).

3. Compile the `add_task.c` file using the following command:

gcc -o add_task.cgi add_task.c -lcgi

markdown
Copy code

4. Place the compiled `add_task.cgi` file in the `cgi-bin` directory (e.g., `/usr/lib/cgi-bin`).

5. Ensure the web server is running and visit the application in your browser.

## Future Enhancements

- Implement task editing
- Implement task deletion
- Implement task sorting
- Implement task persistence (saving tasks to a file)
- Add more advanced features like reminders, calendar integration, and collaboration

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

## License
