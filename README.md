C Basics
========

Getting the files:
------------------

If git is installed, you can just use:
<pre><code>
git clone git@github.com:cwru-eecs338/c_basics.git
</code></pre>

Otherwise, you can download and extract the tarball using:
<pre><code>
wget --no-check-certificate -q -O - https://github.com/cwru-eecs338/c_basics/tarball/master | tar -xzvf -
</code></pre>

Lessons:
--------

### Booleans ###
* There is no boolean type
* You can handle errors using <code>if</code>
* Be careful about using <code>==</code> for comparison, not <code>=</code> (the
  compiler should warn you)

### Strings ###
* Strings are character arrays
* Strings are terminated with the NULL character '\0'
* There are several ways to express string literals
* Special library functions help with determining length, concatenating, etc.

### Memory Allocation ###
* Pay attention to whether things are allocated on the stack or the heap,
  especially if you are returning pointers
* Heap allocation is performed using <code>malloc()</code>.
* You must manually <code>free()</code> any allocated memory.
