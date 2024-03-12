C99 List of Undefined Behavior
==============================
From N1256: (See `<http://port70.net/~nsz/c/c99/n1256.html#J.2>`_)

* A "shall" or "shall not" requirement that appears outside of a constraint is violated (clause 4).
* A nonempty source file does not end in a new-line character which is not immediately preceded by a backslash character or ends in a partial preprocessing token or comment (5.1.1.2).
* Token concatenation produces a character sequence matching the syntax of a universal character name (5.1.1.2).
* A program in a hosted environment does not define a function named ``main`` using one of the specified forms (5.1.2.2.1).
* A character not in the basic source character set is encountered in a source file, except in an identifier, a character constant, a string literal, a header name, a comment, or a preprocessing token that is never converted to a token (5.2.1).
* An identifier, comment, string literal, character constant, or header name contains an invalid multibyte character or does not begin and end in the initial shift state (5.2.1.2).
* The same identifier has both internal and external linkage in the same translation unit (6.2.2).
* An object is referred to outside of its lifetime (6.2.4).
* The value of a pointer to an object whose lifetime has ended is used (6.2.4).
* The value of an object with automatic storage duration is used while it is indeterminate (6.2.4, 6.7.8, 6.8).
* A trap representation is read by an lvalue expression that does not have character type (6.2.6.1).
* A trap representation is produced by a side effect that modifies any part of the object using an lvalue expression that does not have character type (6.2.6.1).
* The arguments to certain operators are such that could produce a negative zero result, but the implementation does not support negative zeros (6.2.6.2).
* Two declarations of the same object or function specify types that are not compatible (6.2.7).
* Conversion to or from an integer type produces a value outside the range that can be represented (6.3.1.4).
* Demotion of one real floating type to another produces a value outside the range that can be represented (6.3.1.5).
* An lvalue does not designate an object when evaluated (6.3.2.1).
* A non-array lvalue with an incomplete type is used in a context that requires the value of the designated object (6.3.2.1).
* An lvalue having array type is converted to a pointer to the initial element of the array, and the array object has register storage class (6.3.2.1).
* An attempt is made to use the value of a void expression, or an implicit or explicit conversion (except to ``void``) is applied to a void expression (6.3.2.2).
* Conversion of a pointer to an integer type produces a value outside the range that can be represented (6.3.2.3).
* Conversion between two pointer types produces a result that is incorrectly aligned (6.3.2.3).
* A pointer is used to call a function whose type is not compatible with the pointed-to type (6.3.2.3).
* An unmatched ``'`` or ``"`` character is encountered on a logical source line during tokenization (6.4).
* A reserved keyword token is used in translation phase 7 or 8 for some purpose other than as a keyword (6.4.1).
* A universal character name in an identifier does not designate a character whose encoding falls into one of the specified ranges (6.4.2.1).
* The initial character of an identifier is a universal character name designating a digit (6.4.2.1).
* Two identifiers differ only in nonsignificant characters (6.4.2.1).  
* The identifier ``__func__`` is explicitly declared (6.4.2.2).  
* The program attempts to modify a string literal (6.4.5).  
* The characters ``'``, ``\``, ``"``, ``//``, or ``/*`` occur in the sequence between the ``<`` and ``>`` delimiters, or the characters ``'``, ``\``, ``//``, or ``/*`` occur in the sequence between the ``"`` delimiters, in a header name preprocessing token (6.4.7).
* Between two sequence points, an object is modified more than once, or is modified and the prior value is read other than to determine the value to be stored (6.5).
* An exceptional condition occurs during the evaluation of an expression (6.5).  
* An object has its stored value accessed other than by an lvalue of an allowable type (6.5).
* An attempt is made to modify the result of a function call, a conditional operator, an assignment operator, or a comma operator, or to access it after the next sequence point (6.5.2.2, 6.5.15, 6.5.16, 6.5.17).
* For a call to a function without a function prototype in scope, the number of arguments does not equal the number of parameters (6.5.2.2).
* For call to a function without a function prototype in scope where the function is defined with a function prototype, either the prototype ends with an ellipsis or the types of the arguments after promotion are not compatible with the types of the parameters (6.5.2.2).
* For a call to a function without a function prototype in scope where the function is not defined with a function prototype, the types of the arguments after promotion are not compatible with those of the parameters after promotion (with certain exceptions) (6.5.2.2).
* A function is defined with a type that is not compatible with the type (of the expression) pointed to by the expression that denotes the called function (6.5.2.2).
* The operand of the unary ``*`` operator has an invalid value (6.5.3.2).  
* A pointer is converted to other than an integer or pointer type (6.5.4).  
* The value of the second operand of the ``/`` or ``%`` operator is zero (6.5.5).
* Addition or subtraction of a pointer into, or just beyond, an array object and an integer type produces a result that does not point into, or just beyond, the same array object (6.5.6).
* Addition or subtraction of a pointer into, or just beyond, an array object and an integer type produces a result that points just beyond the array object and is used as the operand of a unary ``*`` operator that is evaluated (6.5.6).
* Pointers that do not point into, or just beyond, the same array object are subtracted (6.5.6).
* An array subscript is out of range, even if an object is apparently accessible with the given subscript (as in the lvalue expression ``a[1][7]`` given the declaration ``int a[4][5]``) (6.5.6).
* The result of subtracting two pointers is not representable in an object of type ``ptrdiff_t`` (6.5.6).
* An expression is shifted by a negative number or by an amount greater than or equal to the width of the promoted expression (6.5.7).
* An expression having signed promoted type is left-shifted and either the value of the expression is negative or the result of shifting would be not be representable in the promoted type (6.5.7).
* Pointers that do not point to the same aggregate or union (nor just beyond the same array object) are compared using relational operators (6.5.8).
* An object is assigned to an inexactly overlapping object or to an exactly overlapping object with incompatible type (6.5.16.1).
* An expression that is required to be an integer constant expression does not have an integer type; has operands that are not integer constants, enumeration constants, character constants, ``sizeof`` expressions whose results are integer constants, or immediately-cast floating constants; or contains casts (outside operands to ``sizeof`` operators) other than conversions of arithmetic types to integer types (6.6).
* A constant expression in an initializer is not, or does not evaluate to, one of the following: an arithmetic constant expression, a null pointer constant, an address constant, or an address constant for an object type plus or minus an integer constant expression (6.6).
* An arithmetic constant expression does not have arithmetic type; has operands that are not integer constants, floating constants, enumeration constants, character constants, or ``sizeof`` expressions; or contains casts (outside operands to ``sizeof`` operators) other than conversions of arithmetic types to arithmetic types (6.6).
* The value of an object is accessed by an array-subscript ``[]``, member-access ``.`` or ``−>``, address ``&``, or indirection ``*`` operator or a pointer cast in creating an address constant (6.6).
* An identifier for an object is declared with no linkage and the type of the object is incomplete after its declarator, or after its init-declarator if it has an initializer (6.7).
* A function is declared at block scope with an explicit storage-class specifier other than ``extern`` (6.7.1).
* A structure or union is defined as containing no named members (6.7.2.1).  
* An attempt is made to access, or generate a pointer to just past, a flexible array member of a structure when the referenced object provides no elements for that array (6.7.2.1).
* When the complete type is needed, an incomplete structure or union type is not completed in the same scope by another declaration of the tag that defines the content (6.7.2.3).
* An attempt is made to modify an object defined with a const-qualified type through use of an lvalue with non-const-qualified type (6.7.3).
* An attempt is made to refer to an object defined with a volatile-qualified type through use of an lvalue with non-volatile-qualified type (6.7.3).
* The specification of a function type includes any type qualifiers (6.7.3).  
* Two qualified types that are required to be compatible do not have the identically qualified version of a compatible type (6.7.3).
* An object which has been modified is accessed through a restrict-qualified pointer to a const-qualified type, or through a restrict-qualified pointer and another pointer that are not both based on the same object (6.7.3.1).
* A restrict-qualified pointer is assigned a value based on another restricted pointer whose associated block neither began execution before the block associated with this pointer, nor ended before the assignment (6.7.3.1).
* A function with external linkage is declared with an ``inline`` function specifier, but is not also defined in the same translation unit (6.7.4).
* Two pointer types that are required to be compatible are not identically qualified, or are not pointers to compatible types (6.7.5.1).
* The size expression in an array declaration is not a constant expression and evaluates at program execution time to a nonpositive value (6.7.5.2).
* In a context requiring two array types to be compatible, they do not have compatible element types, or their size specifiers evaluate to unequal values (6.7.5.2).
* A declaration of an array parameter includes the keyword ``static`` within the ``[`` and ``]`` and the corresponding argument does not provide access to the first element of an array with at least the specified number of elements (6.7.5.3).
* A storage-class specifier or type qualifier modifies the keyword ``void`` as a function parameter type list (6.7.5.3).
* In a context requiring two function types to be compatible, they do not have compatible return types, or their parameters disagree in use of the ellipsis terminator or the number and type of parameters (after default argument promotion, when there is no parameter type list or when one type is specified by a function definition with an identifier list) (6.7.5.3).
* The value of an unnamed member of a structure or union is used (6.7.8).  
* The initializer for a scalar is neither a single expression nor a single expression enclosed in braces (6.7.8).
* The initializer for a structure or union object that has automatic storage duration is neither an initializer list nor a single expression that has compatible structure or union type (6.7.8).
* The initializer for an aggregate or union, other than an array initialized by a string literal, is not a brace-enclosed list of initializers for its elements or members (6.7.8).
* An identifier with external linkage is used, but in the program there does not exist exactly one external definition for the identifier, or the identifier is not used and there exist multiple external definitions for the identifier (6.9).
* A function definition includes an identifier list, but the types of the parameters are not declared in a following declaration list (6.9.1).
* An adjusted parameter type in a function definition is not an object type (6.9.1).
* A function that accepts a variable number of arguments is defined without a parameter type list that ends with the ellipsis notation (6.9.1).
* The } that terminates a function is reached, and the value of the function call is used by the caller (6.9.1).
* An identifier for an object with internal linkage and an incomplete type is declared with a tentative definition (6.9.2).
* The token ``defined`` is generated during the expansion of a ``#if`` or ``#elif`` preprocessing directive, or the use of the ``defined`` unary operator does not match one of the two specified forms prior to macro replacement (6.10.1).
* The ``#include`` preprocessing directive that results after expansion does not match one of the two header name forms (6.10.2).
* The character sequence in an ``#include`` preprocessing directive does not start with a letter (6.10.2).
* There are sequences of preprocessing tokens within the list of macro arguments that would otherwise act as preprocessing directives (6.10.3).
* The result of the preprocessing operator ``#`` is not a valid character string literal (6.10.3.2).
* The result of the preprocessing operator ``##`` is not a valid preprocessing token (6.10.3.3).
* The ``#line`` preprocessing directive that results after expansion does not match one of the two well-defined forms, or its digit sequence specifies zero or a number greater than 2147483647 (6.10.4).
* A non-``STDC #pragma`` preprocessing directive that is documented as causing translation failure or some other form of undefined behavior is encountered (6.10.6).
* A ``#pragma STDC`` preprocessing directive does not match one of the well-defined forms (6.10.6).
* The name of a predefined macro, or the identifier ``defined``, is the subject of a ``#define`` or ``#undef`` preprocessing directive (6.10.8).
* An attempt is made to copy an object to an overlapping object by use of a library function, other than as explicitly allowed (e.g., ``memmove``) (clause 7).
* A file with the same name as one of the standard headers, not provided as part of the implementation, is placed in any of the standard places that are searched for included source files (7.1.2).
* A header is included within an external declaration or definition (7.1.2).  
* A function, object, type, or macro that is specified as being declared or defined by some standard header is used before any header that declares or defines it is included (7.1.2).
* A standard header is included while a macro is defined with the same name as a keyword (7.1.2).
* The program attempts to declare a library function itself, rather than via a standard header, but the declaration does not have external linkage (7.1.2).
* The program declares or defines a reserved identifier, other than as allowed by 7.1.4 (7.1.3).
* The program removes the definition of a macro whose name begins with an underscore and either an uppercase letter or another underscore (7.1.3).
* An argument to a library function has an invalid value or a type not expected by a function with variable number of arguments (7.1.4).
* The pointer passed to a library function array parameter does not have a value such that all address computations and object accesses are valid (7.1.4).
* The macro definition of ``assert`` is suppressed in order to access an actual function (7.2).
* The argument to the assert macro does not have a scalar type (7.2).  
* The ``CX_LIMITED_RANGE``, ``FENV_ACCESS``, or ``FP_CONTRACT`` pragma is used in any context other than outside all external declarations or preceding all explicit declarations and statements inside a compound statement (7.3.4, 7.6.1, 7.12.2).
* The value of an argument to a character handling function is neither equal to the value of ``EOF`` nor representable as an ``unsigned char`` (7.4).
* A macro definition of ``errno`` is suppressed in order to access an actual object, or the program defines an identifier with the name ``errno`` (7.5).
* Part of the program tests floating-point status flags, sets floating-point control modes, or runs under non-default mode settings, but was translated with the state for the ``FENV_ACCESS`` pragma "off" (7.6.1).
* The exception-mask argument for one of the functions that provide access to the floating-point status flags has a nonzero value not obtained by bitwise OR of the floating-point exception macros (7.6.2).
* The ``fesetexceptflag`` function is used to set floating-point status flags that were not specified in the call to the ``fegetexceptflag`` function that provided the value of the corresponding ``fexcept_t`` object (7.6.2.4).
* The argument to ``fesetenv`` or ``feupdateenv`` is neither an object set by a call to ``fegetenv`` or ``feholdexcept``, nor is it an environment macro (7.6.4.3, 7.6.4.4).
* The value of the result of an integer arithmetic or conversion function cannot be represented (7.8.2.1, 7.8.2.2, 7.8.2.3, 7.8.2.4, 7.20.6.1, 7.20.6.2, 7.20.1).
* The program modifies the string pointed to by the value returned by the ``setlocale`` function (7.11.1.1).
* The program modifies the structure pointed to by the value returned by the ``localeconv`` function (7.11.2.1).
* A macro definition of ``math_errhandling`` is suppressed or the program defines an identifier with the name ``math_errhandling`` (7.12).
* An argument to a floating-point classification or comparison macro is not of real floating type (7.12.3, 7.12.14).
* A macro definition of ``setjmp`` is suppressed in order to access an actual function, or the program defines an external identifier with the name ``setjmp`` (7.13).
* An invocation of the ``setjmp`` macro occurs other than in an allowed context (7.13.2.1).
* The ``longjmp`` function is invoked to restore a nonexistent environment (7.13.2.1).
* After a ``longjmp``, there is an attempt to access the value of an object of automatic storage class with non-volatile-qualified type, local to the function containing the invocation of the corresponding ``setjmp`` macro, that was changed between the ``setjmp`` invocation and ``longjmp`` call (7.13.2.1).
* The program specifies an invalid pointer to a signal handler function (7.14.1.1).
* A signal handler returns when the signal corresponded to a computational exception (7.14.1.1).
* A signal occurs as the result of calling the ``abort`` or ``raise`` function, and the signal handler calls the ``raise`` function (7.14.1.1).
* A signal occurs other than as the result of calling the ``abort`` or ``raise`` function, and the signal handler refers to an object with static storage duration other than by assigning a value to an object declared as ``volatile`` ``sig_atomic_t``, or calls any function in the standard library other than the ``abort`` function, the ``_Exit`` function, or the ``signal`` function (for the same signal number) (7.14.1.1).
* The value of ``errno`` is referred to after a signal occurred other than as the result of calling the ``abort`` or ``raise`` function and the corresponding signal handler obtained a ``SIG_ERR`` return from a call to the ``signal`` function (7.14.1.1).
* A signal is generated by an asynchronous signal handler (7.14.1.1).  
* A function with a variable number of arguments attempts to access its varying arguments other than through a properly declared and initialized ``va_list`` object, or before the ``va_start`` macro is invoked (7.15, 7.15.1.1, 7.15.1.4).
* The macro ``va_arg`` is invoked using the parameter ``ap`` that was passed to a function that invoked the macro ``va_arg`` with the same parameter (7.15).
* A macro definition of ``va_start``, ``va_arg``, ``va_copy``, or ``va_end`` is suppressed in order to access an actual function, or the program defines an external identifier with the name ``va_copy`` or ``va_end`` (7.15.1).
* The ``va_start`` or ``va_copy`` macro is invoked without a corresponding invocation of the ``va_end`` macro in the same function, or vice versa (7.15.1, 7.15.1.2, 7.15.1.3, 7.15.1.4).
* The type parameter to the ``va_arg`` macro is not such that a pointer to an object of that type can be obtained simply by postfixing a ``*`` (7.15.1.1).
* The ``va_arg`` macro is invoked when there is no actual next argument, or with a specified type that is not compatible with the promoted type of the actual next argument, with certain exceptions (7.15.1.1).
* The ``va_copy`` or ``va_start`` macro is called to initialize a ``va_list`` that was previously initialized by either macro without an intervening invocation of the ``va_end`` macro for the same ``va_list`` (7.15.1.2, 7.15.1.4).
* The parameter *parmN* of a ``va_start`` macro is declared with the ``register`` storage class, with a function or array type, or with a type that is not compatible with the type that results after application of the default argument promotions (7.15.1.4).
* The member designator parameter of an ``offsetof`` macro is an invalid right operand of the ``.`` operator for the *type* parameter, or designates a bit-field (7.17).
* The argument in an instance of one of the integer-constant macros is not a decimal, octal, or hexadecimal constant, or it has a value that exceeds the limits for the corresponding type (7.18.4).
* A byte input/output function is applied to a wide-oriented stream, or a wide character input/output function is applied to a byte-oriented stream (7.19.2).
* Use is made of any portion of a file beyond the most recent wide character written to a wide-oriented stream (7.19.2).
* The value of a pointer to a ``FILE`` object is used after the associated file is closed (7.19.3).
* The stream for the ``fflush`` function points to an input stream or to an update stream in which the most recent operation was input (7.19.5.2).
* The string pointed to by the ``mode`` argument in a call to the ``fopen`` function does not exactly match one of the specified character sequences (7.19.5.3).
* An output operation on an update stream is followed by an input operation without an intervening call to the ``fflush`` function or a file positioning function, or an input operation on an update stream is followed by an output operation with an intervening call to a file positioning function (7.19.5.3).
* An attempt is made to use the contents of the array that was supplied in a call to the ``setvbuf`` function (7.19.5.6).
* There are insufficient arguments for the format in a call to one of the formatted input/output functions, or an argument does not have an appropriate type (7.19.6.1, 7.19.6.2, 7.24.2.1, 7.24.2.2).
* The format in a call to one of the formatted input/output functions or to the ``strftime`` or ``wcsftime`` function is not a valid multibyte character sequence that begins and ends in its initial shift state (7.19.6.1, 7.19.6.2, 7.23.3.5, 7.24.2.1, 7.24.2.2, 7.24.5.1).
* In a call to one of the formatted output functions, a precision appears with a conversion specifier other than those described (7.19.6.1, 7.24.2.1).
* A conversion specification for a formatted output function uses an asterisk to denote an argument-supplied field width or precision, but the corresponding argument is not provided (7.19.6.1, 7.24.2.1).
* A conversion specification for a formatted output function uses a ``#`` or ``0`` flag with a conversion specifier other than those described (7.19.6.1, 7.24.2.1).
* A conversion specification for one of the formatted input/output functions uses a length modifier with a conversion specifier other than those described (7.19.6.1, 7.19.6.2, 7.24.2.1, 7.24.2.2).
* An ``s`` conversion specifier is encountered by one of the formatted output functions, and the argument is missing the null terminator (unless a precision is specified that does not require null termination) (7.19.6.1, 7.24.2.1).
* An ``n`` conversion specification for one of the formatted input/output functions includes any flags, an assignment-suppressing character, a field width, or a precision (7.19.6.1, 7.19.6.2, 7.24.2.1, 7.24.2.2).
* A ``%`` conversion specifier is encountered by one of the formatted input/output functions, but the complete conversion specification is not exactly %% (7.19.6.1, 7.19.6.2, 7.24.2.1, 7.24.2.2).
* An invalid conversion specification is found in the format for one of the formatted input/output functions, or the ``strftime`` or ``wcsftime`` function (7.19.6.1, 7.19.6.2, 7.23.3.5, 7.24.2.1, 7.24.2.2, 7.24.5.1).
* The number of characters transmitted by a formatted output function is greater than ``INT_MAX`` (7.19.6.1, 7.19.6.3, 7.19.6.8, 7.19.6.10).
* The result of a conversion by one of the formatted input functions cannot be represented in the corresponding object, or the receiving object does not have an appropriate type (7.19.6.2, 7.24.2.2).
* A ``c``, ``s``, or ``[`` conversion specifier is encountered by one of the formatted input functions, and the array pointed to by the corresponding argument is not large enough to accept the input sequence (and a null terminator if the conversion specifier is ``s`` or ``[``) (7.19.6.2, 7.24.2.2).
* A ``c``, ``s``, or ``[`` conversion specifier with an ``l`` qualifier is encountered by one of the formatted input functions, but the input is not a valid multibyte character sequence that begins in the initial shift state (7.19.6.2, 7.24.2.2).
* The input item for a ``%p`` conversion by one of the formatted input functions is not a value converted earlier during the same program execution (7.19.6.2, 7.24.2.2).
* The ``vfprintf``, ``vfscanf``, ``vprintf``, ``vscanf``, ``vsnprintf``, ``vsprintf``, ``vsscanf``, ``vfwprintf``, ``vfwscanf``, ``vswprintf``, ``vswscanf``, ``vwprintf``, or ``vwscanf`` function is called with an improperly initialized ``va_list`` argument, or the argument is used (other than in an invocation of ``va_end``) after the function returns (7.19.6.8, 7.19.6.9, 7.19.6.10, 7.19.6.11, 7.19.6.12, 7.19.6.13, 7.19.6.14, 7.24.2.5, 7.24.2.6, 7.24.2.7, 7.24.2.8, 7.24.2.9, 7.24.2.10).
* The contents of the array supplied in a call to the ``fgets``, ``gets``, or ``fgetws`` function are used after a read error occurred (7.19.7.2, 7.19.7.7, 7.24.3.2).
* The file position indicator for a binary stream is used after a call to the ``ungetc`` function where its value was zero before the call (7.19.7.11).
* The file position indicator for a stream is used after an error occurred during a call to the ``fread`` or ``fwrite`` function (7.19.8.1, 7.19.8.2).
* A partial element read by a call to the ``fread`` function is used (7.19.8.1).
* The ``fseek`` function is called for a text stream with a nonzero offset and either the offset was not returned by a previous successful call to the ``ftell`` function on a stream associated with the same file or ``whence`` is not ``SEEK_SET`` (7.19.9.2).
* The ``fsetpos`` function is called to set a position that was not returned by a previous successful call to the ``fgetpos`` function on a stream associated with the same file (7.19.9.3).
* A non-null pointer returned by a call to the ``calloc``, ``malloc``, or ``realloc`` function with a zero requested size is used to access an object (7.20.3).
* The value of a pointer that refers to space deallocated by a call to the ``free`` or ``realloc`` function is used (7.20.3).
* The pointer argument to the ``free`` or ``realloc`` function does not match a pointer earlier returned by ``calloc``, ``malloc``, or ``realloc``, or the space has been deallocated by a call to ``free`` or ``realloc`` (7.20.3.2, 7.20.3.4).
* The value of the object allocated by the ``malloc`` function is used (7.20.3.3).  
* The value of any bytes in a new object allocated by the ``realloc`` function beyond the size of the old object are used (7.20.3.4).
* The program executes more than one call to the ``exit`` function (7.20.4.3).  
* During the call to a function registered with the ``atexit`` function, a call is made to the ``longjmp`` function that would terminate the call to the registered function (7.20.4.3).
* The string set up by the ``getenv`` or ``strerror`` function is modified by the program (7.20.4.5, 7.21.6.2).
* A command is executed through the ``system`` function in a way that is documented as causing termination or some other form of undefined behavior (7.20.4.6).
* A searching or sorting utility function is called with an invalid pointer argument, even if the number of elements is zero (7.20.5).
* The comparison function called by a searching or sorting utility function alters the contents of the array being searched or sorted, or returns ordering values inconsistently (7.20.5).
* The array being searched by the ``bsearch`` function does not have its elements in proper order (7.20.5.1).
* The current conversion state is used by a multibyte/wide character conversion function after changing the ``LC_CTYPE`` category (7.20.7).
* A string or wide string utility function is instructed to access an array beyond the end of an object (7.21.1, 7.24.4).
* A string or wide string utility function is called with an invalid pointer argument, even if the length is zero (7.21.1, 7.24.4).
* The contents of the destination array are used after a call to the ``strxfrm``, ``strftime``, ``wcsxfrm``, or ``wcsftime`` function in which the specified length was too small to hold the entire null-terminated result (7.21.4.5, 7.23.3.5, 7.24.4.4.4, 7.24.5.1).
* The first argument in the very first call to the ``strtok`` or ``wcstok`` is a null pointer (7.21.5.8, 7.24.4.5.7).
* The type of an argument to a type-generic macro is not compatible with the type of the corresponding parameter of the selected function (7.22).
* A complex argument is supplied for a generic parameter of a type-generic macro that has no corresponding complex function (7.22).
* The argument corresponding to an ``s`` specifier without an ``l`` qualifier in a call to the ``fwprintf`` function does not point to a valid multibyte character sequence that begins in the initial shift state (7.24.2.11).
* In a call to the ``wcstok`` function, the object pointed to by ``ptr`` does not have the value stored by the previous call for the same wide string (7.24.4.5.7).
* An ``mbstate_t`` object is used inappropriately (7.24.6).  
* The value of an argument of type ``wint_t`` to a wide character classification or case mapping function is neither equal to the value of ``WEOF`` nor representable as a ``wchar_t`` (7.25.1).
* The ``iswctype`` function is called using a different ``LC_CTYPE`` category from the one in effect for the call to the ``wctype`` function that returned the description (7.25.2.2.1).
* The towctrans function is called using a different LC_CTYPE category from the one in effect for the call to the wctrans function that returned the description (7.25.3.2.1).
======================================================================
According to the C Standard, Annex J, J.2 [ISO/IEC 9899:2011], the behavior of a program is undefined in the circumstances outlined in the following table. The "Guideline" column in the table identifies the coding practices that address the specific case of undefined behavior (UB). The descriptions of undefined behaviors in the "Description" column are direct quotes from the standard. The parenthesized numbers refer to the subclause of the C Standard (C11) that identifies the undefined behavior. 









1

(error)

A "shall" or "shall not" requirement that appears outside of a constraint is violated (clause 4).

MSC15-C

2

(warning)

A nonempty source file does not end in a new-line character which is not immediately preceded by a backslash character or ends in a partial preprocessing token or comment (5.1.1.2).



3

(warning)

Token concatenation produces a character sequence matching the syntax of a universal character name (5.1.1.2).

PRE30-C

4

(warning)

A program in a hosted environment does not define a function named main using one of the specified forms (5.1.2.2.1).



5

The execution of a program contains a data race (5.1.2.4).	
6 

(warning)

A character not in the basic source character set is encountered in a source file, except in an identifier, a character constant, a string literal, a header name, a comment, or a preprocessing token that is never converted to a token (5.2.1).



7 

(warning)

An identifier, comment, string literal, character constant, or header name contains an invalid multibyte character or does not begin and end in the initial shift state (5.2.1.2).



8

(warning)

The same identifier has both internal and external linkage in the same translation unit (6.2.2).

DCL36-C

9 

(error)

An object is referred to outside of its lifetime (6.2.4).

DCL21-C, DCL30-C

10 

(error)

The value of a pointer to an object whose lifetime has ended is used (6.2.4).

DCL30-C, EXP33-C

11

(warning)

The value of an object with automatic storage duration is used while it is indeterminate (6.2.4, 6.7.9, 6.8).

EXP33-C, MSC22-C

12

(warning)

A trap representation is read by an lvalue expression that does not have character type (6.2.6.1).

EXP33-C

13

(warning)

A trap representation is produced by a side effect that modifies any part of the object using an lvalue expression that does not have character type (6.2.6.1).



14

(warning)

The operands to certain operators are such that they could produce a negative zero result, but the implementation does not support negative zeros (6.2.6.2).



15

(warning)

Two declarations of the same object or function specify types that are not compatible (6.2.7).

DCL23-C,
DCL40-C

16

A program requires the formation of a composite type from a variable length array type whose size is specified by an expression that is not evaluated (6.2.7).	
17

(warning)

Conversion to or from an integer type produces a value outside the range that can be represented (6.3.1.4).

FLP34-C

18

(warning)

Demotion of one real floating type to another produces a value outside the range that can be represented (6.3.1.5).

FLP34-C

19

(error)

An lvalue does not designate an object when evaluated (6.3.2.1).



20 

(warning)

A non-array lvalue with an incomplete type is used in a context that requires the value of the designated object (6.3.2.1).



21

An lvalue designation an object of automatic storage duration that could have been declared with the register storage class is used in a context that requires the value of the designated object, but the object is uninitialized (6.3.2.1).	
22 

(warning)

An lvalue having array type is converted to a pointer to the initial element of the array, and the array object has register storage class (6.3.2.1).



23 

(warning)

An attempt is made to use the value of a void expression, or an implicit or explicit conversion (except to void) is applied to a void expression (6.3.2.2).



24 

(warning)

Conversion of a pointer to an integer type produces a value outside the range that can be represented (6.3.2.3).

INT36-C

25

(warning)

Conversion between two pointer types produces a result that is incorrectly aligned (6.3.2.3).

EXP36-C

26 

(error)

A pointer is used to call a function whose type is not compatible with the pointed-to type (6.3.2.3).

EXP37-C
27 

(warning)

An unmatched ' or " character is encountered on a logical source line during tokenization (6.4).



28 

(warning)

A reserved keyword token is used in translation phase 7 or 8 for some purpose other than as a keyword (6.4.1).



29 

(warning)

A universal character name in an identifier does not designate a character whose encoding falls into one of the specified ranges (6.4.2.1).



30 

(warning)

The initial character of an identifier is a universal character name designating a digit (6.4.2.1).



31 

(warning)

Two identifiers differ only in nonsignificant characters (6.4.2.1).

DCL23-C,
DCL31-C

32 

(warning)

The identifier __func__ is explicitly declared (6.4.2.2).



33 

(info)

The program attempts to modify a string literal (6.4.5).

STR30-C

34 

(warning)

The characters ', back-slash, ", /, or /* occur in the sequence between the < and > delimiters, or the characters ', back-slash, //, or /* occur in the sequence between the " delimiters, in a header name preprocessing token (6.4.7).

EXP39-C

35 

(warning)

A side effect on a scalar object is unsequenced relative to either a different side effect on the same scalar object or a value computation using the value of the same scalar object (6.5).

EXP30-C

36 

(warning)

An exceptional condition occurs during the evaluation of an expression (6.5).

INT32-C

37 

(warning)

An object has its stored value accessed other than by an lvalue of an allowable type (6.5).

DCL40-C,
EXP39-C

38

(warning)

For a call to a function without a function prototype in scope, the number of arguments does not equal the number of parameters (6.5.2.2).

EXP37-C

39 

(warning)

For call to a function without a function prototype in scope where the function is defined with a function prototype, either the prototype ends with an ellipsis or the types of the arguments after promotion are not compatible with the types of the parameters (6.5.2.2).

EXP37-C

40 

(warning)

For a call to a function without a function prototype in scope where the function is not defined with a function prototype, the types of the arguments after promotion are not compatible with those of the parameters after promotion (with certain exceptions) (6.5.2.2).

EXP37-C
41 

(warning)

A function is defined with a type that is not compatible with the type (of the expression) pointed to by the expression that denotes the called function (6.5.2.2).

DCL40-C,
EXP37-C

42

A member of an atomic structure or union is accessed (6.5.2.3).	
43

(error)

The operand of the unary * operator has an invalid value (6.5.3.2).

EXP34-C

44

(warning)

A pointer is converted to other than an integer or pointer type (6.5.4).



45 

(warning)

The value of the second operand of the / or % operator is zero (6.5.5).

INT33-C

46 

(warning)

Addition or subtraction of a pointer into, or just beyond, an array object and an integer type produces a result that does not point into, or just beyond, the same array object (6.5.6).

ARR30-C

47 

(error)

Addition or subtraction of a pointer into, or just beyond, an array object and an integer type produces a result that points just beyond the array object and is used as the operand of a unary * operator that is evaluated (6.5.6).

ARR30-C

48

(warning)

Pointers that do not point into, or just beyond, the same array object are subtracted (6.5.6).

ARR36-C

49 

(warning)

An array subscript is out of range, even if an object is apparently accessible with the given subscript (as in the lvalue expression a[1][7] given the declaration int a[4][5]) (6.5.6).

ARR30-C

50 

(warning)

The result of subtracting two pointers is not representable in an object of type ptrdiff_t (6.5.6).



51

(warning)

An expression is shifted by a negative number or by an amount greater than or equal to the width of the promoted expression (6.5.7).

INT34-C

52 

(warning)

An expression having signed promoted type is left-shifted and either the value of the expression is negative or the result of shifting would not be representable in the promoted type (6.5.7).



53

(warning)

Pointers that do not point to the same aggregate or union (nor just beyond the same array object) are compared using relational operators (6.5.8).

ARR36-C

54

(warning)

An object is assigned to an inexactly overlapping object or to an exactly overlapping object with incompatible type (6.5.16.1).



55

(warning)

An expression that is required to be an integer constant expression does not have an integer type; has operands that are not integer constants, enumeration constants, character constants, sizeof expressions whose results are integer constants, or immediately-cast floating constants; or contains casts (outside operands to sizeof operators) other than conversions of arithmetic types to integer types (6.6).



56 

(warning)

A constant expression in an initializer is not, or does not evaluate to, one of the following: an arithmetic constant expression, a null pointer constant, an address constant, or an address constant for an object type plus or minus an integer constant expression (6.6).



57 

(warning)

An arithmetic constant expression does not have arithmetic type; has operands that are not integer constants, floating constants, enumeration constants, character constants, or sizeof expressions; or contains casts (outside operands to sizeof operators) other than conversions of arithmetic types to arithmetic types (6.6).



58

(warning)

The value of an object is accessed by an array-subscript [], member-access . or ->, address &, or indirection * operator or a pointer cast in creating an address constant (6.6).



59 

(warning)

An identifier for an object is declared with no linkage and the type of the object is incomplete after its declarator, or after its init-declarator if it has an initializer (6.7).



60

(warning)

A function is declared at block scope with an explicit storage-class specifier other than extern (6.7.1).



61 

(warning)

A structure or union is defined as containing no named members (6.7.2.1).



62 

(warning)

An attempt is made to access, or generate a pointer to just past, a flexible array member of a structure when the referenced object provides no elements for that array (6.7.2.1).

ARR30-C

63

(warning)

When the complete type is needed, an incomplete structure or union type is not completed in the same scope by another declaration of the tag that defines the content (6.7.2.3).



64 

(info)

An attempt is made to modify an object defined with a const-qualified type through use of an lvalue with non-const-qualified type (6.7.3).

EXP05-C, EXP40-C

65 

(warning)

An attempt is made to refer to an object defined with a volatile-qualified type through use of an lvalue with non-volatile-qualified type (6.7.3).

EXP32-C

66

(warning)

The specification of a function type includes any type qualifiers (6.7.3).



67

(warning)

Two qualified types that are required to be compatible do not have the identically qualified version of a compatible type (6.7.3).



68

(warning)

An object which has been modified is accessed through a restrict-qualified pointer to a const-qualified type, or through a restrict-qualified pointer and another pointer that are not both based on the same object (6.7.3.1).

EXP43-C

69

(warning)

A restrict-qualified pointer is assigned a value based on another restricted pointer whose associated block neither began execution before the block associated with this pointer, nor ended before the assignment (6.7.3.1).



70

(warning)

A function with external linkage is declared with an inline function specifier, but is not also defined in the same translation unit (6.7.4).



71

A function declared with a _Noreturn function specifier returns to its caller (6.7.4).	
72

The definition of an object has an alignment specifier and another declaration of that object has a different alignment specifier (6.7.5).	
73

Declarations of an object in different translation units have different alignment specifiers (6.7.5).	
74

(warning)

Two pointer types that are required to be compatible are not identically qualified, or are not pointers to compatible types (6.7.6.1).



75 

(warning)

The size expression in an array declaration is not a constant expression and evaluates at program execution time to a nonpositive value (6.7.6.2).

ARR32-C

76 

(warning)

In a context requiring two array types to be compatible, they do not have compatible element types, or their size specifiers evaluate to unequal values (6.7.6.2).

EXP39-C
77

(warning)

A declaration of an array parameter includes the keyword static within the [ and ] and the corresponding argument does not provide access to the first element of an array with at least the specified number of elements (6.7.6.3).



78

(warning)

A storage-class specifier or type qualifier modifies the keyword void as a function parameter type list (6.7.6.3).



79

(warning)

In a context requiring two function types to be compatible, they do not have compatible return types, or their parameters disagree in use of the ellipsis terminator or the number and type of parameters (after default argument promotion, when there is no parameter type list or when one type is specified by a function definition with an identifier list) (6.7.6.3).



80

(warning)

The value of an unnamed member of a structure or union is used (6.7.9).



81 

(warning)

The initializer for a scalar is neither a single expression nor a single expression enclosed in braces (6.7.9).



82

(warning)

The initializer for a structure or union object that has automatic storage duration is neither an initializer list nor a single expression that has compatible structure or union type (6.7.9).



83

(warning)

The initializer for an aggregate or union, other than an array initialized by a string literal, is not a brace-enclosed list of initializers for its elements or members (6.7.9).



84

(warning)

An identifier with external linkage is used, but in the program there does not exist exactly one external definition for the identifier, or the identifier is not used and there exist multiple external definitions for the identifier (6.9).



85

(warning)

A function definition includes an identifier list, but the types of the parameters are not declared in a following declaration list (6.9.1).



86 

(warning)

An adjusted parameter type in a function definition is not an object type (6.9.1).



87 

(warning)

A function that accepts a variable number of arguments is defined without a parameter type list that ends with the ellipsis notation (6.9.1).



88

(warning)

The } that terminates a function is reached, and the value of the function call is used by the caller (6.9.1).

MSC37-C

89

(warning)

An identifier for an object with internal linkage and an incomplete type is declared with a tentative definition (6.9.2).



90

(warning)

The token defined is generated during the expansion of a #if or #elif preprocessing directive, or the use of the defined unary operator does not match one of the two specified forms prior to macro replacement (6.10.1).



91

(warning)

The #include preprocessing directive that results after expansion does not match one of the two header name forms (6.10.2).



92

(warning)

The character sequence in an #include preprocessing directive does not start with a letter (6.10.2).



93 

(warning)

There are sequences of preprocessing tokens within the list of macro arguments that would otherwise act as preprocessing directives (6.10.3).

PRE32-C

94 

(warning)

The result of the preprocessing operator # is not a valid character string literal (6.10.3.2).



95 

(warning)

The result of the preprocessing operator ## is not a valid preprocessing token (6.10.3.3).



96 

(warning)

The #line preprocessing directive that results after expansion does not match one of the two well-defined forms, or its digit sequence specifies zero or a number greater than 2147483647 (6.10.4).



97

(warning)

A non-STDC #pragma preprocessing directive that is documented as causing translation failure or some other form of undefined behavior is encountered (6.10.6).



98 

(warning)

A #pragma STDC preprocessing directive does not match one of the well-defined forms (6.10.6).



99

(warning)

The name of a predefined macro, or the identifier defined, is the subject of a #define or #undef preprocessing directive (6.10.8).



100 

(warning)

An attempt is made to copy an object to an overlapping object by use of a library function, other than as explicitly allowed (e.g., memmove) (clause 7).



101

(warning)

A file with the same name as one of the standard headers, not provided as part of the implementation, is placed in any of the standard places that are searched for included source files (7.1.2).



102

(warning)

A header is included within an external declaration or definition (7.1.2).



103

(warning)

A function, object, type, or macro that is specified as being declared or defined by some standard header is used before any header that declares or defines it is included (7.1.2).



104

(warning)

A standard header is included while a macro is defined with the same name as a keyword (7.1.2).



105

(warning)

The program attempts to declare a library function itself, rather than via a standard header, but the declaration does not have external linkage (7.1.2).



106

(warning)

The program declares or defines a reserved identifier, other than as allowed by 7.1.4 (7.1.3).

DCL37-C

107

(warning)

The program removes the definition of a macro whose name begins with an underscore and either an uppercase letter or another underscore (7.1.3).



108

(error)

An argument to a library function has an invalid value or a type not expected by a function with a variable number of arguments (7.1.4).



109

(info)

The pointer passed to a library function array parameter does not have a value such that all address computations and object accesses are valid (7.1.4).

ARR30-C, ARR38-C

110

(warning)

The macro definition of assert is suppressed in order to access an actual function (7.2).

MSC38-C

111 

(warning)

The argument to the assert macro does not have a scalar type (7.2).



112

(warning)

The CX_LIMITED_RANGE, FENV_ACCESS, or FP_CONTRACT pragma is used in any context other than outside all external declarations or preceding all explicit declarations and statements inside a compound statement (7.3.4, 7.6.1, 7.12.2).



113

(warning)

The value of an argument to a character handling function is neither equal to the value of EOF nor representable as an unsigned char (7.4).

STR37-C

114

(warning)

A macro definition of errno is suppressed in order to access an actual object, or the program defines an identifier with the name errno (7.5).

DCL37-C, MSC38-C

115

(warning)

Part of the program tests floating-point status flags, sets floating-point control modes, or runs under non-default mode settings, but was translated with the state for the FENV_ACCESS pragma "off" (7.6.1).



116

(warning)

The exception-mask argument for one of the functions that provide access to the floating-point status flags has a nonzero value not obtained by bitwise OR of the floating-point exception macros (7.6.2).



117

(warning)

The fesetexceptflag function is used to set floating-point status flags that were not specified in the call to the fegetexceptflag function that provided the value of the corresponding fexcept_t object (7.6.2.4).



118

(warning)

The argument to fesetenv or feupdateenv is neither an object set by a call to fegetenv or feholdexcept, nor is it an environment macro (7.6.4.3, 7.6.4.4).



119 

(warning)

The value of the result of an integer arithmetic or conversion function cannot be represented (7.8.2.1, 7.8.2.2, 7.8.2.3, 7.8.2.4, 7.22.6.1, 7.22.6.2, 7.22.1).

ERR07-C

120

(info)

The program modifies the string pointed to by the value returned by the setlocale function (7.11.1.1).

ENV30-C

121 

(info)

The program modifies the structure pointed to by the value returned by the localeconv function (7.11.2.1).

ENV30-C

122

(warning)

A macro definition of math_errhandling is suppressed or the program defines an identifier with the name math_errhandling (7.12).

MSC38-C

123

(warning)

An argument to a floating-point classification or comparison macro is not of real floating type (7.12.3, 7.12.14).



124

(warning)

A macro definition of setjmp is suppressed in order to access an actual function, or the program defines an external identifier with the name setjmp (7.13).

MSC38-C

125

(warning)

An invocation of the setjmp macro occurs other than in an allowed context (7.13.2.1).

MSC22-C

126 

(info)

The longjmp function is invoked to restore a nonexistent environment (7.13.2.1).

MSC22-C

127

(warning)

After a longjmp, there is an attempt to access the value of an object of automatic storage class with non-volatile-qualified type, local to the function containing the invocation of the corresponding setjmp macro, that was changed between the setjmp invocation and longjmp call (7.13.2.1).

MSC22-C

128 

(info)

The program specifies an invalid pointer to a signal handler function (7.14.1.1).



129 

(warning)

A signal handler returns when the signal corresponded to a computational exception (7.14.1.1).

SIG31-C

130

A signal handler called in response to SIGFPE, SIGILL, SIGSEGV, or any other implementation-defined value corresponding to a computational exception returns (7.14.1.1).	SIG35-C
131

(info)

A signal occurs as the result of calling the abort or raise function, and the signal handler calls the raise function (7.14.1.1).

SIG30-C,
SIG31-C

132

(warning)

A signal occurs other than as the result of calling the abort or raise function, and the signal handler refers to an object with static or thread storage duration that is not a lock-free atomic object other than by assigning a value to an object declared as volatile sig_atomic_t, or calls any function in the standard library other than the abort function, the _Exit function, the quick_exit function, or the signal function (for the same signal number) (7.14.1.1).

SIG31-C

133 

(warning)

The value of errno is referred to after a signal occurred other than as the result of calling the abort or raise function and the corresponding signal handler obtained a SIG_ERR return from a call to the signal function (7.14.1.1).

ERR32-C

134

(info)

A signal is generated by an asynchronous signal handler (7.14.1.1).



135

The signal function is used in a multi-threaded program (7.14.1.1).	CON37-C
136 

(warning)

A function with a variable number of arguments attempts to access its varying arguments other than through a properly declared and initialized va_list object, or before the va_start macro is invoked (7.16, 7.16.1.1, 7.16.1.4).



137

(warning)

The macro va_arg is invoked using the parameter ap that was passed to a function that invoked the macro va_arg with the same parameter (7.16).



138

(warning)

A macro definition of va_start, va_arg, va_copy, or va_end is suppressed in order to access an actual function, or the program defines an external identifier with the name va_copy or va_end (7.16.1).

MSC38-C

139

(warning)

The va_start or va_copy macro is invoked without a corresponding invocation of the va_end macro in the same function, or vice versa (7.16.1, 7.16.1.2, 7.16.1.3, 7.16.1.4).



140

(warning)

The type parameter to the va_arg macro is not such that a pointer to an object of that type can be obtained simply by postfixing a * (7.16.1.1).



141

(warning)

The va_arg macro is invoked when there is no actual next argument, or with a specified type that is not compatible with the promoted type of the actual next argument, with certain exceptions (7.16.1.1).

DCL10-C

142

(warning)

The va_copy or va_start macro is called to initialize a va_list that was previously initialized by either macro without an intervening invocation of the va_end macro for the same va_list (7.16.1.2, 7.16.1.4).



143 

(warning)

The parameter parmN of a va_start macro is declared with the register storage class, with a function or array type, or with a type that is not compatible with the type that results after application of the default argument promotions (7.16.1.4).



144

(warning)

The member designator parameter of an offsetof macro is an invalid right operand of the . operator for the type parameter, or designates a bit-field (7.19).


145 

(warning)

The argument in an instance of one of the integer-constant macros is not a decimal, octal, or hexadecimal constant, or it has a value that exceeds the limits for the corresponding type (7.20.4).



146

(info)

A byte input/output function is applied to a wide-oriented stream, or a wide character input/output function is applied to a byte-oriented stream (7.21.2).



147



Use is made of any portion of a file beyond the most recent wide character written to a wide-oriented stream (7.21.2).



148

(info)

The value of a pointer to a FILE object is used after the associated file is closed (7.21.3).

FIO46-C

149

(info)

The stream for the fflush function points to an input stream or to an update stream in which the most recent operation was input (7.21.5.2).



150

(plus)

The string pointed to by the mode argument in a call to the fopen function does not exactly match one of the specified character sequences (7.21.5.3).



151

(info)

An output operation on an update stream is followed by an input operation without an intervening call to the fflush function or a file positioning function, or an input operation on an update stream is followed by an output operation with an intervening call to a file positioning function (7.21.5.3).

FIO39-C

152

(warning)

An attempt is made to use the contents of the array that was supplied in a call to the setvbuf function (7.21.5.6).



153

(info)

There are insufficient arguments for the format in a call to one of the formatted input/output functions, or an argument does not have an appropriate type (7.21.6.1, 7.21.6.2, 7.29.2.1, 7.29.2.2).

FIO47-C

154

(info)

The format in a call to one of the formatted input/output functions or to the strftime or wcsftime function is not a valid multibyte character sequence that begins and ends in its initial shift state (7.21.6.1, 7.121.6.2, 7.27.3.5, 7.229.2.1, 7.29.2.2, 7.29.5.1).



155

(warning)

In a call to one of the formatted output functions, a precision appears with a conversion specifier other than those described (7.21.6.1, 7.29.2.1).

 FIO47-C 

156

(info)

A conversion specification for a formatted output function uses an asterisk to denote an argument-supplied field width or precision, but the corresponding argument is not provided (7.21.6.1, 7.29.2.1).


157

(warning)

A conversion specification for a formatted output function uses a # or 0 flag with a conversion specifier other than those described (7.21.6.1, 7.29.2.1).

 FIO47-C 

158 

(info)

A conversion specification for one of the formatted input/output functions uses a length modifier with a conversion specifier other than those described (7.21.6.1, 7.21.6.2, 7.29.2.1, 7.29.2.2).

 FIO47-C 

159

(info)

An s conversion specifier is encountered by one of the formatted output functions, and the argument is missing the null terminator (unless a precision is specified that does not require null termination) (7.21.6.1, 7.29.2.1).



160

(warning)

An n conversion specification for one of the formatted input/output functions includes any flags, an assignment-suppressing character, a field width, or a precision (7.21.6.1, 7.21.6.2, 7.29.2.1, 7.29.2.2).



161

(warning)

A % conversion specifier is encountered by one of the formatted input/output functions, but the complete conversion specification is not exactly %% (7.21.6.1, 7.21.6.2, 7.29.2.1, 7.29.2.2).

 FIO47-C 

162

(warning)

An invalid conversion specification is found in the format for one of the formatted input/output functions, or the strftime or wcsftime function (7.21.6.1, 7.21.6.2, 7.27.3.5, 7.29.2.1, 7.29.2.2, 7.29.5.1).

FIO47-C

163

The number of characters or wide characters transmitted by a formatted output function (or written to an array, or that would have been written to an array) is greater than INT_MAX (7.21.6.1, 7.29.2.1).	
164

(warning)

The number of input items assigned by a formatted input function is greater than INT_MAX (7.21.6.2, 7.29.2.2).



165

(info)

The result of a conversion by one of the formatted input functions cannot be represented in the corresponding object, or the receiving object does not have an appropriate type (7.21.6.2, 7.29.2.2).



166

(info)

A c, s, or [ conversion specifier is encountered by one of the formatted input functions, and the array pointed to by the corresponding argument is not large enough to accept the input sequence (and a null terminator if the conversion specifier is s or [) (7.21.6.2, 7.29.2.2).



167

(info)

A c, s, or [ conversion specifier with an l qualifier is encountered by one of the formatted input functions, but the input is not a valid multibyte character sequence that begins in the initial shift state (7.21.6.2, 7.29.2.2).



168

(warning)

The input item for a %p conversion by one of the formatted input functions is not a value converted earlier during the same program execution (7.21.6.2, 7.29.2.2).



169

(info)

The vfprintf, vfscanf, vprintf, vscanf, vsnprintf, vsprintf, vsscanf, vfwprintf, vfwscanf, vswprintf, vswscanf, vwprintf, or vwscanf function is called with an improperly initialized va_list argument, or the argument is used (other than in an invocation of va_end) after the function returns (7.21.6.8, 7.21.6.9, 7.21.6.10, 7.21.6.11, 7.21.6.12, 7.21.6.13, 7.21.6.14, 7.29.2.5, 7.29.2.6, 7.29.2.7, 7.29.2.8, 7.29.2.9, 7.29.2.10).



170

(warning)

The contents of the array supplied in a call to the fgets, gets, or fgetws function are used after a read error occurred (7.21.7.2, 7.21.7.7, 7.293.2).

FIO40-C

171

(warning)

The file position indicator for a binary stream is used after a call to the ungetc function where its value was zero before the call (7.21.7.11).



172

(warning)

The file position indicator for a stream is used after an error occurred during a call to the fread or fwrite function (7.21.8.1, 7.21.8.2).



173

(warning)

A partial element read by a call to the fread function is used (7.21.8.1).



174

(warning)

The fseek function is called for a text stream with a nonzero offset and either the offset was not returned by a previous successful call to the ftell function on a stream associated with the same file or whence is not SEEK_SET (7.21.9.2).



175

(warning)

The fsetpos function is called to set a position that was not returned by a previous successful call to the fgetpos function on a stream associated with the same file (7.21.9.3).



176

(warning)

A non-null pointer returned by a call to the calloc, malloc, or realloc function with a zero requested size is used to access an object (7.22.3).

MEM04-C

177 

(error)

The value of a pointer that refers to space deallocated by a call to the free or realloc function is used (7.22.3).

MEM30-C

178

The alignment requested of the aligned_alloc function is not valid or not supported by the implementation, or the size requested is not an integral multiple of the alignment (7.22.3.1).	
179

(info)

The pointer argument to the free or realloc function does not match a pointer earlier returned by calloc, malloc, or realloc, or the space has been deallocated by a call to free or realloc (7.22.3.3, 7.22.3.5).

MEM34-C

180

(warning)

The value of the object allocated by the malloc function is used (7.22.3.4).


181

(warning)

The values of any bytes in a new object allocated by the realloc function beyond the size of the old object are used (7.22.3.5).

EXP33-C

182

(warning)

The program calls the exit or quick_exit function more than once, or calls both functions (7.22.4.4, 7.22.4.7).

ENV32-C,

ERR04-C
183

(warning)

During the call to a function registered with the atexit or at_quick_exit function, a call is made to the longjmp function that would terminate the call to the registered function (7.22.4.4, 7.22.4.7).

ENV32-C

184

(info)

The string set up by the getenv or strerror function is modified by the program (7.22.4.6, 7.24.6.2).

ENV30-C

185

A signal is raised while the quick_exit function is executing (7.22.4.7).	
186

(info)

A command is executed through the system function in a way that is documented as causing termination or some other form of undefined behavior (7.22.4.8).



187 

(info)

A searching or sorting utility function is called with an invalid pointer argument, even if the number of elements is zero (7.22.5).



188

(warning)

The comparison function called by a searching or sorting utility function alters the contents of the array being searched or sorted, or returns ordering values inconsistently (7.22.5).



189

(warning)

The array being searched by the bsearch function does not have its elements in proper order (7.22.5.1).



190

(warning)

The current conversion state is used by a multibyte/wide character conversion function after changing the LC_CTYPE category (7.22.7).



191

(error)

A string or wide string utility function is instructed to access an array beyond the end of an object (7.24.1, 7.29.4).


192

(info)

A string or wide string utility function is called with an invalid pointer argument, even if the length is zero (7.24.1, 7.29.4).



193

(warning)

The contents of the destination array are used after a call to the strxfrm, strftime, wcsxfrm, or wcsftime function in which the specified length was too small to hold the entire null-terminated result (7.24.4.5, 7.27.3.5, 7.29.4.4.4, 7.29.5.1).



194

(warning)

The first argument in the very first call to the strtok or wcstok is a null pointer (7.24.5.8, 7.29.4.5.7).



195

(warning)

The type of an argument to a type-generic macro is not compatible with the type of the corresponding parameter of the selected function (7.25).



196

(warning)

A complex argument is supplied for a generic parameter of a type-generic macro that has no corresponding complex function (7.25).



197

At least one member of the broken-down time passed to asctime contains a value outside its normal range, or the calculated year exceeds four digits or is less than the year 1000 (7.27.3.1).	
198

(warning)

The argument corresponding to an s specifier without an l qualifier in a call to the fwprintf function does not point to a valid multibyte character sequence that begins in the initial shift state (7.29.2.11).



199

(info)

In a call to the wcstok function, the object pointed to by ptr does not have the value stored by the previous call for the same wide string (7.29.4.5.7).



200

(info)

An mbstate_t object is used inappropriately (7.29.6).

EXP33-C

201

(warning)

The value of an argument of type wint_t to a wide character classification or case mapping function is neither equal to the value of WEOF nor representable as a wchar_t (7.30.1).



202

(warning)

The iswctype function is called using a different LC_CTYPE category from the one in effect for the call to the wctype function that returned the description (7.30.2.2.1).



203

(warning)

The towctrans function is called using a different LC_CTYPE category from the one in effect for the call to the wctrans function that returned the description (7.30.3.2.1).



Graphical symbols used in the preceding table:



(error)

Critical Undefined Behavior

(warning)

Bounded Undefined Behavior

(info)

Undefined Behavior (information/confirmation needed)

(plus)

Possible Conforming Language Extension
