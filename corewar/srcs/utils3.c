/*
** utils3.c for corware in /home/metz_a/rendu/Prog elem/CPE_2014_corewar/corewar
** 
** Made by Aurélien Metz
** Login   <metz_a@epitech.net>
** 
** Started on  Sun Apr 12 16:42:11 2015 Aurélien Metz
** Last update Sun Apr 12 22:15:18 2015 huy le
*/

#include "instruction.h"

int		alive(t_champ champions[NBR_CHAMP])
{
  unsigned char	i;
  unsigned char	alive;

  i = 0;
  alive = 0;
  while (i < NBR_CHAMP)
    if (champions[i++].id)
      alive++;
  return (alive);
}
