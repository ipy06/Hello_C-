#include<iostream>
#include<chrono>
#include<thread>
#include<stdlib.h>

#include<windows.h>
using namespace std;
int main ()
{
	int i;
	for (i=0 ; i<100; i++){ 
	
	     for (i=0 ; i<2; i++){ 
		     system ("color 01");
	         this_thread :: sleep_for (chrono :: milliseconds (500));
	         cout << "\n\t* * *" << "     " << "* * *" << "   " << "* * * * * * * *   " << "* * *             "  << "* * *             " << "* * * * * * * *\n"; 
	         system ("color 02");
	         this_thread :: sleep_for (chrono :: milliseconds (250));
	         cout << "\t* * *" << "     " << "* * *" << "   " << "* * * * * * * *   " << "* * *             "  << "* * *             " << "* * * * * * * *\n" ; 
        	 system ("color 03"); 
             this_thread :: sleep_for (chrono :: milliseconds (250));
         	 cout << "\t* * *" << "     " << "* * *" << "   " << "* * *             " << "* * *             "  << "* * *             " << "* * *     * * *\n" ;
	         system ("color 04");
             this_thread :: sleep_for (chrono :: milliseconds (250));
	         cout << "\t* * *" << " * * " << "* * *" << "   " << "* * * * * * * *   " << "* * *             "  << "* * *             " << "* * *     * * *\n" ;
	         system ("color 05");
             this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\t* * *" << " * * " << "* * *" << "   " << "* * * * * * * *   " << "* * *             "  << "* * *             " << "* * *     * * *\n" ;
     	     system ("color 06");
             this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\t* * *" << "     " << "* * *" << "   " << "* * *             " << "* * *             "  << "* * *             " << "* * *     * * *\n" ;
           	 system ("color 07");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\t* * *" << "     " << "* * *" << "   " << "* * *             " << "* * *             "  << "* * *             " << "* * *     * * *\n" ;
    	     system ("color 08");
             this_thread :: sleep_for (chrono :: milliseconds (250));
     	     cout << "\t* * *" << "     " << "* * *" << "   " << "* * * * * * * *   " << "* * * * * * * *   "  << "* * * * * * * *   " << "* * * * * * * *\n" ;
    	     system ("color 09");
             this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\t* * *" << "     " << "* * *" << "   " << "* * * * * * * *   " << "* * * * * * * *   "  << "* * * * * * * *   " << "* * * * * * * *\n\n" ;
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     system("CLS")	;
    	     system ("color 0a");
	
	         cout << "\n\t* * *" << "     " << "* * *" << "   " << "* * * * * * * *   " << "* * *             "  << "* * *             " << "* * * * * * * *\n"; 
         	 system ("color 0b");
        	 this_thread :: sleep_for (chrono :: milliseconds (250));
        	 cout << "\t* * *" << "     " << "* * *" << "   " << "* * * * * * * *   " << "* * *             "  << "* * *             " << "* * * * * * * *\n" ; 
        	 system ("color 0c"); 
             this_thread :: sleep_for (chrono :: milliseconds (250));
         	 cout << "\t* * *" << "     " << "* * *" << "   " << "* * *             " << "* * *             "  << "* * *             " << "* * *     * * *\n" ;
        	 system ("color 0d");
             this_thread :: sleep_for (chrono :: milliseconds (250));
         	 cout << "\t* * *" << " * * " << "* * *" << "   " << "* * * * * * * *   " << "* * *             "  << "* * *             " << "* * *     * * *\n" ;
    	     system ("color 0e");
             this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\t* * *" << " * * " << "* * *" << "   " << "* * * * * * * *   " << "* * *             "  << "* * *             " << "* * *     * * *\n" ;
    	     system ("color 0f");
             this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\t* * *" << "     " << "* * *" << "   " << "* * *             " << "* * *             "  << "* * *             " << "* * *     * * *\n" ;
    	     system ("color 01");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\t* * *" << "     " << "* * *" << "   " << "* * *             " << "* * *             "  << "* * *             " << "* * *     * * *\n" ;
    	     system ("color 02");
             this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\t* * *" << "     " << "* * *" << "   " << "* * * * * * * *   " << "* * * * * * * *   "  << "* * * * * * * *   " << "* * * * * * * *\n" ;
    	     system ("color 03");
             this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\t* * *" << "     " << "* * *" << "   " << "* * * * * * * *   " << "* * * * * * * *   "  << "* * * * * * * *   " << "* * * * * * * *\n\n" ;
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     system("CLS")	;
    	    
    }
         
		 
		 system("pause");
    
    
         for (i=0 ; i<2; i++){ 
             system("color 04");
             this_thread :: sleep_for (chrono :: milliseconds (500));
             cout << "\n\t* * *" << "     " << "* * *"  ;
             system("color 05");
			 this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *" << "     " << "* * *"    ;
    	     system("color 06");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *" << "     " << "* * *"    ;
		     system("color 07");
      	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *" << " * * " << "* * *"    ;
             system("color 08");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *" << " * * " << "* * *"    ;
    	     system("color 09");
	         this_thread :: sleep_for (chrono :: milliseconds (250));
	         cout << "\n\t* * *" << "     " << "* * *"    ;
	         system("color 0a");
	         this_thread :: sleep_for (chrono :: milliseconds (250));
	         cout << "\n\t* * *" << "     " << "* * *"    ; 
	         system("color 0b");
	         this_thread :: sleep_for (chrono :: milliseconds (250));
	         cout << "\n\t* * *" << "     " << "* * *"    ;
	         system("color 0c");
	         this_thread :: sleep_for (chrono :: milliseconds (250));
	         cout << "\n\t* * *" << "     " << "* * *"    ;
	         system("color 0d");
	         system("CLS")	;
	
	
	         cout << "\n\t* * * * * * * *   " ;
	         system("color 0e");
             this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * * * * * * *   " ;
    	     system("color 0f");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *             " ;
    	     system("color 01");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
      	     cout << "\n\t* * * * * * * *   " ;
      	     system("color 02");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
          	 cout << "\n\t* * * * * * * *   " ;
          	 system("color 03");
        	 this_thread :: sleep_for (chrono :: milliseconds (250));
     	     cout << "\n\t* * *             " ;
     	     system("color 04");
        	 this_thread :: sleep_for (chrono :: milliseconds (250));  
     	     cout << "\n\t* * * * * * * *   " ; 
     	     system("color 05");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * * * * * * *   " ; 
    	     system("color 06");
    	     system("CLS")	;
	
	
    	     cout << "\n\t* * *             " ; 
    	     system("color 07");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
     	     cout << "\n\t* * *             " ;
     	     system("color 08");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *             " ;
    	     system("color 09");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *             " ;
    	     system("color 0a");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *             " ;
    	     system("color 0b");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *             " ;
    	     system("color 0c");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *             " ;
    	     system("color 0d");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * * * * * * *   " ;
             system("color 0e");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * * * * * * *   " ;
             system("color 0f");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             system("CLS")	;
    
    
	
     	     cout << "\n\t* * *             " ;
     	     system("color 01");
     	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *             " ;
    	     system("color 02");
     	     this_thread :: sleep_for (chrono :: milliseconds (250));
     	     cout << "\n\t* * *             " ;
     	     system("color 03");
     	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *             " ;
    	     system("color 04");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *             " ;
    	     system ("color 05");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
     	     cout << "\n\t* * *             " ;
     	     system("color 06");
        	 this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t* * *             " ;
    	     system("color 07");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * * * * * * *   " ;
             system("color 08");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * * * * * * *   " ; 
             system("color 09");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             system("CLS")	;
    
    
    
    	     cout << "\n\t* * * * * * * *" ;
			 system("color 0a"); 
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * * * * * * *" ;
             system("color 0b");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * *     * * *" ;
             system("color 0c");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * *     * * *" ;
             system("color 0d");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * *     * * *" ;
             system("color 0e");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * *     * * *" ;
             system("color 0f");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * *     * * *" ;
             system("color 01");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * * * * * * *" ;
             system("color 02");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t* * * * * * * *" ;
             system("color 03");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             system("CLS")	;     
             
             
              system("color 04");
             this_thread :: sleep_for (chrono :: milliseconds (500));
             cout << "\n* * *" << "     " << "* * *"  ;
             system("color 05");
			 this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n* * *" << "     " << "* * *"    ;
    	     system("color 06");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n* * *" << "     " << "* * *"    ;
		     system("color 07");
      	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n* * *" << " * * " << "* * *"    ;
             system("color 08");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n* * *" << " * * " << "* * *"    ;
    	     system("color 09");
	         this_thread :: sleep_for (chrono :: milliseconds (250));
	         cout << "\n* * *" << "     " << "* * *"    ;
	         system("color 0a");
	         this_thread :: sleep_for (chrono :: milliseconds (250));
	         cout << "\n* * *" << "     " << "* * *"    ; 
	         system("color 0b");
	         this_thread :: sleep_for (chrono :: milliseconds (250));
	         cout << "\n* * *" << "     " << "* * *"    ;
	         system("color 0c");
	         this_thread :: sleep_for (chrono :: milliseconds (250));
	         cout << "\n* * *" << "     " << "* * *"    ;
	         system("color 0d");
	         system("CLS")	;
	
	
	         cout << "\n\t\t* * * * * * * *   " ;
	         system("color 0e");
             this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t* * * * * * * *   " ;
    	     system("color 0f");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t* * *             " ;
    	     system("color 01");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
      	     cout << "\n\t\t* * * * * * * *   " ;
      	     system("color 02");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
          	 cout << "\n\t\t* * * * * * * *   " ;
          	 system("color 03");
        	 this_thread :: sleep_for (chrono :: milliseconds (250));
     	     cout << "\n\t\t* * *             " ;
     	    system("color 04");
        	 this_thread :: sleep_for (chrono :: milliseconds (250));  
     	     cout << "\n\t\t* * * * * * * *   " ; 
     	     system("color 05");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t* * * * * * * *   " ; 
    	     system("color 06");
    	     system("CLS")	;
	
	
    	     cout << "\n\t\t\t\t* * *             " ; 
    	     system("color 07");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
     	     cout << "\n\t\t\t\t* * *             " ;
     	     system("color 08");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t\t\t* * *             " ;
    	     system("color 09");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t\t\t* * *             " ;
    	     system("color 0a");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t\t\t* * *             " ;
    	     system("color 0b");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t\t\t* * *             " ;
    	     system("color 0c");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t\t\t* * *             " ;
    	     system("color 0d");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t* * * * * * * *   " ;
             system("color 0e");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t* * * * * * * *   " ;
             system("color 0f");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             system("CLS")	;
    
    
	
     	     cout << "\n\t\t\t\t\t\t* * *             " ;
     	     system("color 01");
     	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t\t\t\t\t* * *             " ;
    	     system("color 02");
     	     this_thread :: sleep_for (chrono :: milliseconds (250));
     	     cout << "\n\t\t\t\t\t\t* * *             " ;
     	     system("color 03");
     	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t\t\t\t\t* * *             " ;
    	     system("color 04");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t\t\t\t\t* * *             " ;
    	     system ("color 05");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
     	     cout << "\n\t\t\t\t\t\t* * *             " ;
     	     system("color 06");
        	 this_thread :: sleep_for (chrono :: milliseconds (250));
    	     cout << "\n\t\t\t\t\t\t* * *             " ;
    	     system("color 07");
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t\t\t* * * * * * * *   " ;
             system("color 08");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t\t\t* * * * * * * *   " ; 
             system("color 09");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             system("CLS")	;
    
    
    
    	     cout << "\n\t\t\t\t\t\t\t\t* * * * * * * *" ;
			 system("color 0a"); 
    	     this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t\t\t\t\t* * * * * * * *" ;
             system("color 0b");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t\t\t\t\t* * *     * * *" ;
             system("color 0c");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t\t\t\t\t* * *     * * *" ;
             system("color 0d");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t\t\t\t\t* * *     * * *" ;
             system("color 0e");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t\t\t\t\t* * *     * * *" ;
             system("color 0f");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t\t\t\t\t* * *     * * *" ;
             system("color 01");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t\t\t\t\t* * * * * * * *" ;
             system("color 02");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             cout << "\n\t\t\t\t\t\t\t\t* * * * * * * *" ;
             system("color 03");
             this_thread :: sleep_for (chrono :: milliseconds (250));
             system("CLS")	;     
	    }
	}
	return 0;
}

