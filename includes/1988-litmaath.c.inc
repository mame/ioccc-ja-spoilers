main(argc, argv)
int	argc;
char	**argv;
{
	while (*argv != argv[1] &amp;&amp; (*argv = argv[1]) &amp;&amp; (argc = 0) || (*++argv
		&amp;&amp; (**argv &amp;&amp; ((++argc)[*argv] &amp;&amp; (**argv &lt;= argc[*argv] ||
		(**argv += argc[*argv] -= **argv = argc[*argv] - **argv)) &amp;&amp;
		--argv || putchar(**argv) &amp;&amp; ++*argv--) || putchar(10))))
		;
}