#include "cub3d.h"

void	ft_tfree(void **ptr)
{
    if (*ptr != NULL)
        free(*ptr);
    *ptr = NULL;
}

void    ft_free_texture(t_texture *text)
{
    free(text->path);
    //free(text->extract);
}

void    ft_free_map(char **map)
{
    int y;

    y = 0;
    while (map[y])
    {
        free(map[y]);
        y++;
    }
    map = NULL;
}

void    ft_free_all(t_map **map)
{
    printf("Test\n");
    ft_free_texture((*map)->north);
    ft_free_texture((*map)->south);
    ft_free_texture((*map)->east);
    ft_free_texture((*map)->west);
    free((*map)->north);
    free((*map)->south);
    free((*map)->east);
    free((*map)->west);
    free((*map)->tab_floor);
    free((*map)->tab_ceiling);
    ft_free_map((*map)->map);
    ft_free_map((*map)->play_map);
    free(*map);
}