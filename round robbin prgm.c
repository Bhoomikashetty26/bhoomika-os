#include&lt;stdio.h&gt;  
1. #include&lt;conio.h&gt;  
2.   
3. void main()  
4. {  
5.     // initlialize the variable name  
6.     int i, NOP, sum=0,count=0, y, quant, wt=0, tat=0, at[10], bt[10], temp[10];  
7.     float avg_wt, avg_tat;  
8.     printf(&quot; Total number of process in the system: &quot;);  
9.     scanf(&quot;%d&quot;, &amp;NOP);  
10.     y = NOP; // Assign the number of process to variable y  
11.   
12.
// Use for loop to enter the details of the process like Arrival time and the Burst Time 
 
13. for(i=0; i&lt;NOP; i++)  
14. {  
15. printf(&quot;\n Enter the Arrival and Burst time of the Process[%d]\n&quot;, i+1);  
16. printf(&quot; Arrival time is: \t&quot;);  // Accept arrival time  
17. scanf(&quot;%d&quot;, &amp;at[i]);  
18. printf(&quot; \nBurst time is: \t&quot;); // Accept the Burst time  

19. scanf(&quot;%d&quot;, &amp;bt[i]);  
20. temp[i] = bt[i]; // store the burst time in temp array  
21. }  
22. // Accept the Time qunat  
23. printf(&quot;Enter the Time Quantum for the process: \t&quot;);  
24. scanf(&quot;%d&quot;, &amp;quant);  
25. // Display the process No, burst time, Turn Around Time and the waiting time  
26. printf(&quot;\n Process No \t\t Burst Time \t\t TAT \t\t Waiting Time &quot;);  
27. for(sum=0, i = 0; y!=0; )  
28. {  
29. if(temp[i] &lt;= quant &amp;&amp; temp[i] &gt; 0) // define the conditions   
30. {  
31.     sum = sum + temp[i];  
32.     temp[i] = 0;  
33.     count=1;  
34.     }     
35.     else if(temp[i] &gt; 0)  
36.     {  
37.         temp[i] = temp[i] - quant;  
38.         sum = sum + quant;    
39.     }  
40.     if(temp[i]==0 &amp;&amp; count==1)  
41.     {  
42.         y--; //decrement the process no.  
43.         printf(&quot;\nProcess No[%d] \t\t %d\t\t\t\t %d\t\t\t %d&quot;, i+1, bt[i], sum-at[i], sum-at[i]-
bt[i]);  
44.         wt = wt+sum-at[i]-bt[i];  
45.         tat = tat+sum-at[i];  
46.         count =0;     
47.     }  
48.     if(i==NOP-1)  
49.     {  
50.         i=0;  
51.     }  
52.     else if(at[i+1]&lt;=sum)  
53.     {  
54.         i++;  

55.     }  
56.     else  
57.     {  
58.         i=0;  
59.     }  
60. }  
61. // represents the average waiting time and Turn Around time  
62. avg_wt = wt * 1.0/NOP;  
63. avg_tat = tat * 1.0/NOP;  
64. printf(&quot;\n Average Turn Around Time: \t%f&quot;, avg_wt);  
65. printf(&quot;\n Average Waiting Time: \t%f&quot;, avg_tat);  
66. getch();  
67. }

/*output:
Total number of process in the system: 5

 Enter the Arrival and Burst time of the Process[1]
 Arrival time is:       0
 
Burst time is:  5

 Enter the Arrival and Burst time of the Process[2]
 Arrival time is:       1
 
Burst time is:  3

 Enter the Arrival and Burst time of the Process[3]
 Arrival time is:       2
 
Burst time is:  1

 Enter the Arrival and Burst time of the Process[4]
 Arrival time is:       3
 
Burst time is:  2

 Enter the Arrival and Burst time of the Process[5]
 Arrival time is:       4
 
Burst time is:  3
Enter the Time Quantum for the process:         2

 Process No              Burst Time              TAT             Waiting Time
Process No[3]            1                               3                       2
Process No[4]            2                               4                       2
Process No[2]            3                               11                      8
Process No[5]            3                               9                       6
Process No[1]            5                               14                      9
 Average Turn Around Time:      5.400000
 Average Waiting Time:  8.200000[1] + Done           */

