#ifndef LIBFT_H
	#define LIBFT_H
#endif

#ifndef T_LIST_H
	#define T_LIST_H
typedef struct	s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}t_list;
#endif


void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(char *dest, const void *src, size_t n);
void	*ft_memccpy(char *dest, const void *src, int c, size_t n);
void	*ft_memmove(char *dest, const void *src, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strlcat(char *dest, const char *src, size_t n);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
char 	*ft_strstr(char *haystack, const char *needle);
char	*ft_strnstr(char *haystack, const char *needle, size_t n);
int	ft_strcmp(char *s1, char *s2);
int	ft_strncmp(char *s1, char *s2, size_t n);
int	ft_atoi(const char *str);
int	isalpha(int c);
int	isdigit(int c);
int	isalnum(int c);
int	isascii(int c);
int	isprint(int c);
int	toupper(int c);
int	tolower(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f) (char*));
void	ft_striteri(char *s, void (*f) (unsigned int, char *));
char	*ft_strmap(char const *s, char (*f) (char));
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
int	ft_strequ(char const *s1, char const *s2);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del) (void *, size_t));
void	ft_lstdel(t_list **alst, void (*del) (void *, size_t));
void	ft_lstadd(t_list **alstn t_list *new);
void	ft_lstiter(t_list *lst, void (*d) (t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list * (*f) (t_list *elem));


