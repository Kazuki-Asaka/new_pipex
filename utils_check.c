#include "./include/utils.h"

bool	check_in_type(t_words *words, t_token_type word_type)
{
	while (words->word != NULL)
	{
		if (words->token_type == word_type)
			return (true);
		words = words->next;
	}
	return (false);
}
