/**
 *main-entry
 *
 *Return:a
 */
int main(void)
{
	char c[] = "Hello, Holberton\n";

	setenv("a", c, 1);
	system("echo $a");
}
