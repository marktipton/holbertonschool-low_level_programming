/**
 *get_op_func - selects function to perform
 *
 *@s: operator passed as argument to program
 *
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i <  5)
	{
		if (ops[i] == s)
		{
			return (ops[i].f);	
		}
		i++;
	}
	return (NULL);
}
