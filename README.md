# Libft
42 Libft for all ``.c`` projects


| Libft functions | Prototype | Definition |
|--|--|--|
| [ft_isalpha](https://github.com/MarJC5/Libft/blob/main/libft/ft_isalpha.c) |```int  ft_isalpha(int  c);```| Tests for any character for which ```a-z``` or ```A-Z``` is true |
| [ft_isdigit](https://github.com/MarJC5/Libft/blob/main/libft/ft_isdigit.c) | ```int  ft_isdigit(int  c);``` | Tests for any character for which ```0-9``` is true |
| [ft_isalnum](https://github.com/MarJC5/Libft/blob/main/libft/ft_isalnum.c) | ```int  ft_isalnum(int  c);``` | Tests for any character for which ```az-AZ``` or ```0-9``` is true |
| [ft_isascii](https://github.com/MarJC5/Libft/blob/main/libft/ft_isascii.c) | ```int  ft_isascii(int  c);``` | Tests for any character for which in the ```ascii table``` is true |
| [ft_isprint](https://github.com/MarJC5/Libft/blob/main/libft/ft_isprint.c) | ```int  ft_isprint(int  c);``` | Tests for any printing character, including space ```(` ')``` |
| [ft_strlen](https://github.com/MarJC5/Libft/blob/main/libft/ft_strlen.c) | ```size_t  ft_strlen(const  char  *str);``` | Counts the length of the string |
| [ft_memset](https://github.com/MarJC5/Libft/blob/main/libft/ft_memset.c) | ```void  *ft_memset(void  *buf, int  c, size_t  n);``` | Fills a block of memory with a particular value |
| [ft_bzero](https://github.com/MarJC5/Libft/blob/main/libft/ft_bzero.c) | ```void  ft_bzero(void  *buf, size_t  n);``` | Erases the data in the ```n``` bytes of the memory starting at the location pointed to by ```buf```, by writing ```0``` |
| [ft_memcpy](https://github.com/MarJC5/Libft/blob/main/libft/ft_memcpy.c) | ```void  *ft_memcpy(void  *dst, const  void  *src, size_t  n);``` | Copies ```n``` bytes from memory area ```src``` to memory area ```dest``` |
| [ft_memmove](https://github.com/MarJC5/Libft/blob/main/libft/ft_memmove.c) | ```void  *ft_memmove(void  *dst, const  void  *src, size_t  n);``` | Copies the data first to an intermediate buffer, then from the buffer to destination |
| [ft_strlcpy](https://github.com/MarJC5/Libft/blob/main/libft/ft_strlcpy.c) | ```size_t  ft_strlcpy(char  *dst, const  char  *src, size_t  n);``` | Copies the data in the ```n``` bytes and concatenate strings respectively with allow support |
| [ft_strlcat](https://github.com/MarJC5/Libft/blob/main/libft/ft_strlcat.c) | ```size_t  ft_strlcat(char  *dst, const  char  *src, size_t  n);``` | Copies the data in the ```n``` bytes and concatenate strings respectively |
| [ft_toupper](https://github.com/MarJC5/Libft/blob/main/libft/ft_toupper.c) | ```int  ft_toupper(int  c);``` | Converts a lower-case letter to the corresponding upper-case letter |
| [ft_tolower](https://github.com/MarJC5/Libft/blob/main/libft/ft_tolower.c) | ```int  ft_tolower(int  c);``` | Converts a upper-case letter to the corresponding lower-case letter |
| [ft_strchr](https://github.com/MarJC5/Libft/blob/main/libft/ft_strchr.c) | ```char  *ft_strchr(const  char  *str, int  c);``` | Returns a pointer to the first occurrence of the character ```c``` in the string ```str``` |
| [ft_strrchr](https://github.com/MarJC5/Libft/blob/main/libft/ft_strrchr.c) | ```char  *ft_strrchr(const  char  *str, int  c);``` | Returns a pointer to the last occurrence of the character ```c``` in the string ```str``` (begin the search by the end) |
| [ft_strncmp](https://github.com/MarJC5/Libft/blob/main/libft/ft_strncmp.c) | ```int  ft_strncmp(const  char  *s1, const  char  *s2, size_t  n);``` | Compares the two strings ```s1``` and ```s2``` and returns an integer less than, equal to, or greater than zero if ```s1``` is found |
| [ft_memchr](https://github.com/MarJC5/Libft/blob/main/libft/ft_memchr.c) | ```void  *ft_memchr(const  void  *str, int  c, size_t  n);``` | Locates the first occurrence of the character ```c``` (converted to an unsigned char) in string ```str``` and return the string from it |
| [ft_memcmp](https://github.com/MarJC5/Libft/blob/main/libft/ft_memcmp.c) | ```int  ft_memcmp(const  void  *s1, const  void  *s2, size_t  n);``` | Compares the data in the ```n``` bytes form string ```s1``` against byte string ```s2```, the function does not stop comparing after finding a null character |
| [ft_strnstr](https://github.com/MarJC5/Libft/blob/main/libft/ft_strnstr.c) | ```char  *ft_strnstr(const  char  *big, const  char  *little, size_t  n);``` |  |
| [ft_atoi](https://github.com/MarJC5/Libft/blob/main/libft/ft_atoi.c) | ```int  ft_atoi(const  char  *str);``` | Converts the string pointed to by ```str``` to ```int``` |
| [ft_calloc](https://github.com/MarJC5/Libft/blob/main/libft/ft_calloc.c) | ```void  *ft_calloc(size_t  ecount, size_t  esize);``` | Allocates a block of memory for an array of num elements, each of them size bytes long, and initializes all its bits to zero |
| [ft_strdup](https://github.com/MarJC5/Libft/blob/main/libft/ft_strdup.c) | ```char  *ft_strdup(const  char  *str);``` | Duplicate a string a dynamic memory using malloc |
| [ft_substr](https://github.com/MarJC5/Libft/blob/main/libft/ft_substr.c) |  |  |
| [ft_strjoin](https://github.com/MarJC5/Libft/blob/main/libft/ft_strjoin.c) |  |  |
| [ft_strtrim](https://github.com/MarJC5/Libft/blob/main/libft/ft_strtrim.c) |  |  |
| [ft_split](https://github.com/MarJC5/Libft/blob/main/libft/ft_split.c) |  |  |
| [ft_itoa](https://github.com/MarJC5/Libft/blob/main/libft/ft_itoa.c) | ```char  *ft_itoa(int  n);``` | Converts the ```int``` to a string ```char *``` |
| [ft_strmapi](https://github.com/MarJC5/Libft/blob/main/libft/ft_strmapi.c) |  |  |
| [ft_striteri](https://github.com/MarJC5/Libft/blob/main/libft/ft_striteri.c) |  |  |
| [ft_putchar_fd](https://github.com/MarJC5/Libft/blob/main/libft/ft_putchar_fd.c) | ```void  ft_putchar_fd(char  c, int  fd);``` | Writes the character ```c``` on the file descriptor given |
| [ft_putstr_fd](https://github.com/MarJC5/Libft/blob/main/libft/ft_putstr_fd.c) | ```void	ft_putstr_fd(char *str, int fd);``` | Writes the string ```str``` on the file descriptor given |
| [ft_putendl_fd](https://github.com/MarJC5/Libft/blob/main/libft/ft_putendl_fd.c) | ```void  ft_putendl_fd(char  *str, int  fd);``` | Writes the string ```str``` on the file descriptor given with a new line a the end |
| [ft_putnbr_fd](https://github.com/MarJC5/Libft/blob/main/libft/ft_putnbr_fd.c) | ```void  ft_putnbr_fd(int  n, int  fd);``` | Write the integer ```n``` to the given file descriptor given |
