// endl and \n both seem to do the same thing but there is a subtle difference between them. 

// cout << endl inserts a new line and flushes the stream(output buffer), whereas cout << "\n" just inserts a new line.

// Therefore, cout << endl; can be said equivalent to cout << '\n' << flush; 

// Some other differences between endl and \n are:  

// endl                                                                         \n 

// It is a manipulator. 	                                                     It is a character.
// It doesn't occupy any memory. 	                                             It occupies 1 byte memory as it is a character.
// It is a keyword and would not specify any meaning when stored in a string.	 It can be stored in a string and will still convey its specific meaning of line break.
// We cannot write 'endl' in between double quotations.	                         We can write '\n' in between double quotations like cout<<"\n";
// It is only supported by C++. 	                                            It is supported in both C and C++.
// It keeps flushing the queue in the output buffer throughout the process. 	It flushes the output buffer only once at the end of the program


// Note: cout << "\n" looks performance wise better but in real cout << endl is much better in C++; As it doesn't occupies any memory and also if flushing of stream is required.