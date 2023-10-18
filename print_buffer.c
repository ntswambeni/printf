#include "main.h"

/**
 * flush_reset_buffer - fxn flushes and reset buffer
 * @buffer: pointer to the buffer
 * @buffer_index: pointrer to the buffer index
 */
void flush_reset_buffer(char *buffer, int *buffer_index)
{
	write(1, buffer, *buffer_index);

	*buffer_index = 0;
}
