void ns_shell_start();
int ns_grand(char *line);
int ns_is_both(char* line);
int ns_is_pipe(char *line);
int ns_is_redirection(char* line);
char ** ns_split_pipe(char *line);
char** ns_split_redirection(char* line);
char** ns_split_both(char *line);
int ns_execute_both(char**cmds,int pipe_count);

//to be removed
int ns_execute_pipe(char **cmds,int pipe_count);
int ns_check_infile(char *last_cmd);
char* ns_pure_last_cmd(char *last_cmd);

char* ns_read_line(void);
char **ns_split_line(char *line);
int ns_just_exec(char **args);
int ns_execute(char **args);

//builtin
int ns_exit(char **args);
int ns_help(char **args);
int ns_cd(char **args);
int ns_history(char** args);

//new
char** ns_substitute_with_alias(char **cmds);
char * ns_do_alias_maping(char *line);
int ns_is_source_cmd(char *line);
void ns_sourcing();
int ns_execute_redirection(char **cmds);

char *ns_custom(char *line);