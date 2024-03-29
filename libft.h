/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dkrecisz <dkrecisz@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:10:15 by dkrecisz      #+#    #+#                 */
/*   Updated: 2021/10/25 20:39:05 by dkrecisz      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/** 
 * Character checking functions 
 * **/
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isspace(int c);
int				ft_issign(int c);

/** 
 * String functions 
 * **/
size_t			ft_strlen(const char *s);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *haystack, \
				const char *needle, size_t len);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strldup(const char *s1, size_t len);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			**ft_split(char const *s, char c);
char			**ft_tokenize(char const *s, const char *delim);

/** 
 * Memory manipulating functions 
 * **/
void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);

void			*ft_calloc(size_t count, size_t size);

/** 
 * Printing functions 
 * **/
ssize_t			ft_putchar_fd(char c, int fd);
ssize_t			ft_putstr_fd(const char *s, int fd);
ssize_t			ft_putendl_fd(const char *s, int fd);
ssize_t			ft_putnbr_fd(int n, int fd);
ssize_t			ft_putnbr_unsigned_fd(unsigned int n, int fd);
ssize_t			ft_write(int fd, const void *buf, size_t count);

/** 
 * Misc 
 * **/
int				ft_atoi(const char *str);
long			ft_atol(const char *str);
int				ft_atoi_base(const char *str, int base);
char			*ft_itoa(int n);
char			*ft_utoa(unsigned int n);
char			*ft_utoa_base(unsigned int n, int base);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			*ft_malloc_wrap(void *dest, size_t len);
int				ft_numlen(long n);

/** Bonus Part
 * Linked Lists 
 * **/
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
size_t			ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), \
				void (*del)(void *));

#endif
