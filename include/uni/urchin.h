#ifndef uni_urchin_h
#define uni_urchin_h

typedef    unsigned char     URBoolean;

typedef    signed char       URSInt8;
typedef    signed short      URSInt16;
typedef    signed long       URSInt32;
typedef    signed int        URSInt;

typedef    unsigned char     URUInt8;
typedef    unsigned short    URUInt16;
typedef    unsigned long     URUInt32;
typedef    unsigned int      URUInt;

typedef    void*             URValue;

typedef    void      (*URAction)(void);

typedef    URBoolean (*URValuePredicate)(URValue left, URValue right);


#ifndef FALSE
#   define    FALSE   ((URBoolean)0)
#endif  /* ndef TRUE */
#ifndef TRUE
#   define    TRUE    ((URBoolean)1)
#endif  /* ndef TRUE */

#endif  /* uni_urchin_h */
