// The default layout has 34 keys. Additional keys can be added by pre-setting any of
// the macros defined in this file to one or more keys before sourcing this file.

/* left of left half */
#if !defined X_LN // number row, left LN5 LN4 LN3 LN2 LN1 LN0
    #define X_LN XXX XXX XXX XXX XXX XXX
#endif
#if !defined X_LT  // top row, left, LT5
    #define X_LT XXX
#endif
#if !defined X_LM  // middle row, left, LM5
    #define X_LM XXX
#endif
#if !defined X_LB  // bottom row, left, LB5
    #define X_LB XXX
#endif
#if !defined X_LH  // thumb row, left, LH3 LH2
    #define X_LH XXX XXX
#endif

/* between left and right half */
#if !defined X_MN  // number row, middle
    #define X_MN
#endif
#if !defined X_MT  // top row, middle
    #define X_MT
#endif
#if !defined X_MM  // middle row, middle
    #define X_MM
#endif
#if !defined X_MB  // bottom row, middle, LEC REC
    #define X_MB XXX XXX
#endif
#if !defined X_MH  // thumb row, middle
    #define X_MH 
#endif

/* right of right half */
#if !defined X_RN  // number row, right, RN0 RN1 RN2 RN3 RN4 RN5
    #define X_RN XXX XXX XXX XXX XXX XXX
#endif
#if !defined X_RT  // top row, right, RT5
    #define X_RT XXX
#endif
#if !defined X_RM  // middle row, right, RM5
    #define X_RM XXX
#endif
#if !defined X_RB  // bottom row, right, RB5
    #define X_RB XXX
#endif
#if !defined X_RH  // thumb row, right, RH2 RH3
    #define X_RH XXX XXX
#endif