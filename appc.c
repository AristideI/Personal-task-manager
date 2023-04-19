#include <stdio.h>
#include <stdlib.h>
#include <cgi.h>

int main() {
    s_cgi *cgi;
    s_var *var;

    cgi_init();
    cgi_process_form();
    cgi = cgi_init_struct();

    printf("Content-type: text/html\n\n");
    printf("<html><body>");

    for (var = cgi->variables; var != NULL; var = var->next) {
        printf("<p>%s: %s</p>", var->name, var->value);
    }

    // Implement code to save task data to a file or database

    printf("<p>Task added successfully</p>");
    printf("<a href=\"/index.html\">Back to Task Manager</a>");

    printf("</body></html>");

    cgi_free_struct(cgi);
    return 0;
}
