<h1 class="gap">0x1B. C - Sorting algorithms &amp; Big O</h1>
<h2>Background Context</h2>

<p>This project is meant to be done by groups of two students. Each group of two should <a href="/rltoken/QcXizPyNa4DTAMLNzCwdHg" title="pair program" target="_blank">pair program</a> for at least the mandatory part.</p>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/tmzgO7xhCpNgPUxVhLKibw" title="Sorting algorithm" target="_blank">Sorting algorithm</a> </li>
<li><a href="/rltoken/XrLMaOhUMHfwsFEz15TVow" title="Big O notation" target="_blank">Big O notation</a> </li>
<li><a href="/rltoken/kJ7rgWoqdLnxSnSEoAiFCQ" title="Sorting algorithms animations" target="_blank">Sorting algorithms animations</a> </li>
<li><a href="/rltoken/RdvoGNMTJ6Hq34aJ_HmCqA" title="15 sorting algorithms in 6 minutes" target="_blank">15 sorting algorithms in 6 minutes</a> (<em><b>WARNING</b>: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms</em>)</li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/NwGzC3ck-xCcOmVIIbZn9Q" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>At least four different sorting algorithms</li>
<li>What is the Big O notation, and how to evaluate the time complexity of an algorithm</li>
<li>How to select the best sorting algorithm for a given input</li>
<li>What is a stable sorting algorithm</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like <em>printf, puts, &hellip;</em> is totally forbidden.</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>sort.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>A list/array does not need to be sorted if its size is less than 2.</li>
</ul>

<h3>GitHub</h3>

<p><strong>There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.</strong></p>

<h2>More Info</h2>

<h3>Data Structure and Functions</h3>

<ul>
<li>For this project you are given the following <code>print_array</code>, and <code>print_list</code> functions:</li>
</ul>

<pre><code>#include &lt;stdlib.h&gt;
#include &lt;stdio.h&gt;

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array &amp;&amp; i &lt; size)
	{
		if (i &gt; 0)
			printf(&quot;, &quot;);
		printf(&quot;%d&quot;, array[i]);
		++i;
	}
	printf(&quot;\n&quot;);
}
</code></pre>

<pre><code>#include &lt;stdio.h&gt;
#include &quot;sort.h&quot;

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i &gt; 0)
			printf(&quot;, &quot;);
		printf(&quot;%d&quot;, list-&gt;n);
		++i;
		list = list-&gt;next;
	}
	printf(&quot;\n&quot;);
}
</code></pre>

<ul>
<li>Our files <code>print_array.c</code> and <code>print_list.c</code> (containing the <code>print_array</code> and <code>print_list</code> functions) will be compiled with your functions during the correction.</li>
<li>Please declare the prototype of the functions <code>print_array</code> and <code>print_list</code> in your <code>sort.h</code> header file</li>
<li>Please use the following data structure for doubly linked list:</li>
</ul>

<pre><code>/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
</code></pre>

<p>Please, note this format is used for Quiz and Task questions.</p>

<ul>
<li><code>O(1)</code></li>
<li><code>O(n)</code></li>
<li><code>O(n!)</code></li>
<li>n square -&gt; <code>O(n^2)</code></li>
<li>log(n) -&gt; <code>O(log(n))</code></li>
<li>n * log(n) -&gt; <code>O(nlog(n))</code></li>
<li>n + k -&gt; <code>O(n+k)</code></li>
<li>&hellip;</li>
</ul>

<p>Please use the &ldquo;short&rdquo; notation (don&rsquo;t use constants). Example: <code>O(nk)</code> or <code>O(wn)</code> should be written <code>O(n)</code>.
If an answer is required within a file, all your answers files must have a newline at the end.</p>

<h3>Tests</h3>

<p>Here is a quick tip to help you test your sorting algorithms with big sets of random integers: <a href="/rltoken/KkFXByKWf55lTK32JnY62w" title="Random.org" target="_blank">Random.org</a></p>

  </div>
</div>
<h2 class="gap">Tasks</h2>

<h3 class="panel-title">0. Bubble sort</h3>

<p><iframe width="560" height="315" src="https://www.youtube.com/embed/lyZQPjUT5B4" frameborder="0" allowfullscreen></iframe><br />
<br /></p>

<p>Write a function that sorts an array of integers in ascending order using the <a href="/rltoken/fCItpIfgmE07fFbHBUToeg" title="Bubble sort" target="_blank">Bubble sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void bubble_sort(int *array, size_t size);</code></li>
<li>You&rsquo;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>0-O</code>, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>

<pre><code>alex@/tmp/sort$ cat 0-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf(&quot;\n&quot;);
    bubble_sort(array, n);
    printf(&quot;\n&quot;);
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
alex@/tmp/sort$ ./bubble
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$ 
</code></pre>

  </div>

  <div class="list-group">
<h3 class="panel-title">
	  1. Insertion sort
	</h3>


<p>Write a function that sorts a doubly linked list of integers in ascending order using the <a href="/rltoken/4ueB1I1MkNypoTBXR0YX3g" title="Insertion sort" target="_blank">Insertion sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void insertion_sort_list(listint_t **list);</code></li>
<li>You are not allowed to modify the integer <code>n</code> of a node. You have to swap the nodes themselves.</li>
<li>You&rsquo;re expected to print the <code>list</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>1-O</code>, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>

<pre><code>alex@/tmp/sort$ cat 1-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&amp;node-&gt;n;
		*tmp = array[size];
		node-&gt;next = list;
		node-&gt;prev = NULL;
		list = node;
		if (list-&gt;next)
			list-&gt;next-&gt;prev = list;
	}
	return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf(&quot;\n&quot;);
	insertion_sort_list(&amp;list);
	printf(&quot;\n&quot;);
	print_list(list);
	return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
alex@/tmp/sort$ ./insertion
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 13, 71, 99, 52, 96, 73, 86, 7
19, 13, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 52, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 96, 99, 73, 86, 7
13, 19, 48, 52, 71, 96, 73, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 86, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 7, 99
13, 19, 48, 52, 71, 73, 86, 7, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>

<h3 class="panel-title">2. Selection sort</h3>

<p><iframe width="560" height="315" src="https://www.youtube.com/embed/Ns4TPTC8whw" frameborder="0" allowfullscreen></iframe><br />
<br /></p>

<p>Write a function that sorts an array of integers in ascending order using the <a href="/rltoken/_DodgdySm5bPerpQm1LhwQ" title="Selection sort" target="_blank">Selection sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void selection_sort(int *array, size_t size);</code></li>
<li>You&rsquo;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>2-O</code>, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>

<pre><code>alex@/tmp/sort$ cat 2-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf(&quot;\n&quot;);
	selection_sort(array, n);
	printf(&quot;\n&quot;);
	print_array(array, n);
	return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 
2-main.c 2-selection_sort.c print_array.c -o select
alex@/tmp/sort$ ./select
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 48, 71, 52, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 73, 96, 86, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>

<h3 class="panel-title">3. Quick sort</h3>
<p><iframe width="560" height="315" src="https://www.youtube.com/embed/ywWBy6J5gz8" frameborder="0" allowfullscreen></iframe><br />
<br /></p>

<p>Write a function that sorts an array of integers in ascending order using the <a href="/rltoken/VoeZ2Hwp4Q0piTJ3OODY3w" title="Quick sort" target="_blank">Quick sort</a> algorithm</p>

<ul>
<li>Prototype: <code>void quick_sort(int *array, size_t size);</code></li>
<li>You must implement the <code>Lomuto</code> partition scheme.</li>
<li>The pivot should always be the last element of the partition being sorted.</li>
<li>You&rsquo;re expected to print the <code>array</code> after each time you swap two elements (See example below)</li>
</ul>

<p>Write in the file <code>3-O</code>, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:</p>

<ul>
<li>in the best case</li>
<li>in the average case</li>
<li>in the worst case</li>
</ul>

<pre><code>alex@/tmp/sort$ cat 3-main.c
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;sort.h&quot;

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf(&quot;\n&quot;);
	quick_sort(array, n);
	printf(&quot;\n&quot;);
	print_array(array, n);
	return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick
alex@/tmp/sort$ ./quick
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 73, 96, 86, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 48, 71, 52, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
</code></pre>

