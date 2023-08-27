#include "rush02.h"

char *file_to_buff()
{
	char buff;
	
	int file = open("numbers.dict", O_RDONLY);
	
	int i = 0;

	while (read(file, &buff, 1) != 0)
	{
		i++;
	}
	close(file);
	
	file = open("numbers.dict", O_RDONLY);
	char *buff2 = malloc(sizeof(char) * i + 1);
	i = 0;
	while (read(file, &buff, 1) != 0)
	{
		buff2[i] = buff;
		i++;
	}
	close(file);
	buff2[i] = '\0';
	return buff2;
}

int dynamic_array(char ***key, char ***value)
{	
	int i;
	int count_n;
	int key_count;
	int value_count;
	char *str = file_to_buff();

	i = 0;
	count_n = 0;
	key_count = 0;
	value_count = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count_n++;
		if (str[i] >= '0' && str[i] <= '9')
			key_count++;
		if (str[i] >= 'a' && str[i] <= 'z')
			value_count++;
		i++;
	}
	*key = malloc((count_n)* sizeof(char*));
	*value = malloc((count_n) * sizeof(char*));

	i = 0;
	int j = 0;
	while (i < count_n)
	{		
		key_count = 0;
		value_count = 0;
		while(str[j] && str[j] != '\n')
		{
			if (str[j] != ':')
				key_count++;
			j += 2;
			if (str[j] && str[j] != '\n')
				value_count++;
			if (str[j])
				j++;
		}
		(*key)[i] = malloc ((key_count + 1) * sizeof(char));
		(*key)[i][key_count] = '\0';
		(*value)[i] = malloc ((value_count + 1) * sizeof(char));
		(*value)[i][value_count] = '\0';
		i++;
	}

	i = 0;
	int k = 0;
	j = 0;
	while (i < count_n)
	{
		j = 0;
		while (str[k] != ':')
		{
			if (str[k] != '\n')
			{
				(*key)[i][j] = str[k];
				j++;
			}
			k++;
		}
		k += 2;
		j = 0;
		while (str[k] != '\n')
		{
			(*value)[i][j] = str[k];
			j++;
			k++;
		}
		i++;
	}
	return (count_n);
}