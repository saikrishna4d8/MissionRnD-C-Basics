/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/
int isOlder(char *dob1, char *dob2) {
	int j=0,k=0,i = 0,l=0,m=0;
	if (dob1 == 0 || dob2 == 0)
		return -1;
	while (dob1[j+1] != '\0')
		j++;
	while (dob2[k+1] != '\0')
		k++;
	if (j != k)
		return -1;
	while (i <= k)
	{
		if (( (dob1[i]>'9') ||  (dob2[i]>'9')))
			return -1;
		if ((dob1[1]>'2' || dob2[1]>'2'))
		i++;
	}
	i = k - 3;
	while (i<=k){
		if (dob1[i] > dob2[i])
			return 1;
		else if (dob1[i] > dob2[i])
			return 2;
		else
			i++;
		if (dob1[i] == 0)
			l++;
		if (dob2[i] == 0)
			m++;
	}
	if (m == 4 || l == 4)
		return -1;
	i = k - 6;
	while (i<=(k-4)){
		if (dob1[i] > dob2[i])
			return 1;
		else if (dob1[i] > dob2[i])
			return 2;
		else
			i++;
		i++;
		if (dob1[i] == 0)
			l++;
		if (dob2[i] == 0)
			m++;
	}
	if (m == 4 || l == 4)
		return -1;
	i = 0;
	while (i < 2){
		if (dob1[i] > dob2[i])
			return 1;
		else if (dob1[i] > dob2[i])
			return 2;
		else
			i++;
		i++;
		if (dob1[i] == 0)
			l++;
		if (dob2[i] == 0)
			m++;
	}
	if (m == 4 || l == 4)
		return -1;
	return 0;
}
