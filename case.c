/*
   Case mutates strings with random upper and lowercase.
   Input: string as first argument

   Output: random mutated upper/lowercase string
   Example: case hereitmustbegood --> HErEitmuStBEGood

   Caveat: Case is completely ignorant of locales, so only works with
   one byte character string languages, i.e. "C" LOCALE. 
   In languages, generally, the concept of case must be generallized.  

   Copyright (C) 2019 Nicholas C. Strauss <nicks@nick-strauss.com>

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <math.h>
#include <sys/time.h>

int
main(int argc, char **argv)
{
  int      index, slen, ch, seed;
  double   randome;
  char    *string;
  struct timeval start;

  string = strdup(argv[1]);
  gettimeofday(&start, NULL);
  seed = start.tv_usec;
  slen = strlen(string);
  srand(seed);
  for (index=0;index<slen;index++){
    ch = string[index];
    randome = (double)rand()/(double)RAND_MAX;
    if (randome < 0.5){
      if (isupper(ch))
	string[index] = tolower(ch);
      else
	string[index] = toupper(ch);
    }
  }
  printf("%s\n", string);
}
