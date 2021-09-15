#ifndef UTILS_H
# define UTILS_H

# include "main.h"

void	*malloc_or_terminate(void *data_to_free_if_error, size_t size);
int	ft_isdigit(int c);
int	is_in_range_long(long value, long min, long max);
//long long	get_current_time(t_data *data);

#endif
