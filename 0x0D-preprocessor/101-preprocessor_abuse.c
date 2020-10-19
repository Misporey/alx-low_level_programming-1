/**
 *main-entry
 *
 *Return:a
 */
int main(void)
{
	char c[] = "Hello, Holberton\n";

	setenv("ShellVar", c, 1);
	system("echo $ShellVar");
}
