#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts the number of words in a string
 * @str: string to count words in
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int count, i, in_word;

	count = 0;
	in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
	}
	return (count);
}

/**
 * word_length - calculates the length of a word starting at given position
 * @str: string to analyze
 * @start: starting position of the word
 *
 * Return: length of the word
 */
int word_length(char *str, int start)
{
	int length = 0;

	while (str[start + length] != '\0' && str[start + length] != ' ')
	{
		length++;
	}
	return (length);
}

/**
 * free_words - frees array of strings on failure
 * @words: array of strings to free
 * @count: number of strings already allocated
 *
 * Return: void
 */
void free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		free(words[i]);
	}
	free(words);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, k, word_count, word_len, word_index;

	/* Check for NULL or empty string */
	if (str == NULL || *str == '\0')
		return (NULL);

	/* Count words in the string */
	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	/* Allocate array for word pointers + NULL terminator */
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	/* Extract each word */
	word_index = 0;
	i = 0;
	while (str[i] != '\0' && word_index < word_count)
	{
		/* Skip spaces */
		while (str[i] == ' ')
			i++;

		if (str[i] != '\0')
		{
			/* Calculate word length */
			word_len = word_length(str, i);

			/* Allocate memory for the word */
			words[word_index] = malloc(sizeof(char) * (word_len + 1));
			if (words[word_index] == NULL)
			{
				free_words(words, word_index);
				return (NULL);
			}

			/* Copy the word */
			for (k = 0; k < word_len; k++)
			{
				words[word_index][k] = str[i + k];
			}
			words[word_index][word_len] = '\0';

			/* Move to next word */
			i += word_len;
			word_index++;
		}
	}

	/* NULL terminate the array */
	words[word_index] = NULL;

	return (words);
}
