   Case mutates strings with random upper and lowercase.
  
   Input: string as first argument

   Output: random mutated upper/lowercase string
   
   Examples: 
        caser hereitmustbegood --> HErEitmuStBEGood
        output a random case string.
 
        cat README.md   | xargs -I {} ./caseu {}
        pipe a file to uppercase 
        
   Caveat: Case is completely ignorant of locales, so only works with
   one byte character string languages, i.e. "C" LOCALE. 
   In languages, generally, the concept of case must be generallized.  

   This builds as an GNU/Linux executable, and is intended as a utility level
   program. For more information, contact nicks@nick-strauss.com
