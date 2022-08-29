

int	main(void)
{
		char	src[] = "ABCDEFGH";
		char	dest[] = "123456";
		unsigned int	n = 10;

		printf("Retour = %d\ndest = %s", ft_strlcat(dest, src, n), dest);
}
