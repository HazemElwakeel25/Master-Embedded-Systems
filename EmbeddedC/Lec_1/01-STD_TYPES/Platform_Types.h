/******************************************************************************************************************************/
/* Auther    : Hazem El-Wakeel                                                                                                */
/* Date      : 27 AUG 2022                                                                                                    */
/* version   : V01                                                                                                            */
/******************************************************************************************************************************/


/*CPU Type 32 BITS*/

#ifndef PLATFORM_TYPES_F
#define PLATFORM_TYPES_F



#define CPU_TYPE_8	    8 
#define CPU_TYPE_16	    16 
#define CPU_TYPE_32	    32 

#define MSB_FIRST       0
#define LSB_FIRST       1

#define HIGH_BYTE_FIRST 0 
#define LOW_BYTE_FIRST  1 

		
#ifdef S12X

#define CPU_TYPE        				CPU_TYPE_16
#define CPU_BIT_ORDER   				LSB_FIRST
#define CPU_BYET_ORDER  				HIGH_BYTE_FIRST


typedef unsigned char					boolean ;

typedef unsigned char        		 	uint8 ;
typedef signed char        	 		 	sint8 ;
typedef volatile unsigned char       	vuint8 ;
typedef volatile signed char         	vsint8 ;

typedef char 						 	chart;

typedef unsigned short int   		 	uint16;
typedef signed short int			 	sint16;
typedef volatile unsigned short int		vuint16;
typedef volatile signed short int		vsint16;

typedef unsigned long    				uint32;
typedef signed long    					sint32;
typedef volatile unsigned long    		vuint32;
typedef volatile signed long    		vsint32;

typedef float           				float32; 
typedef double          				float64;


#endif 

#ifdef ST30

#define CPU_TYPE        				CPU_TYPE_32
#define CPU_BIT_ORDER   				LSB_FIRST
#define CPU_BYET_ORDER  				LOW_BYTE_FIRST


typedef unsigned long					boolean ;

typedef unsigned char        		 	uint8 ;
typedef signed char        	 		 	sint8 ;
typedef volatile unsigned char       	vuint8 ;
typedef volatile signed char         	vsint8 ;

typedef char 						 	chart;

typedef unsigned short int   		 	uint16;
typedef signed short int			 	sint16;
typedef volatile unsigned short int		vuint16;
typedef volatile signed short int		vsint16;

typedef unsigned long    				uint32;
typedef signed long    					sint32;
typedef volatile unsigned long    		vuint32;
typedef volatile signed long    		vsint32;

typedef float           				float32; 
typedef double          				float64;

#endif

#ifdef SHx

#define CPU_TYPE        				CPU_TYPE_32
#define CPU_BIT_ORDER   				LSB_FIRST
#define CPU_BYET_ORDER  				HGIH_BYTE_FIRST


typedef unsigned long					boolean ;

typedef unsigned char        		 	uint8 ;
typedef signed char        	 		 	sint8 ;
typedef volatile unsigned char       	vuint8 ;
typedef volatile signed char         	vsint8 ;

typedef char 						 	chart;

typedef unsigned short int   		 	uint16;
typedef signed short int			 	sint16;
typedef volatile unsigned short int		vuint16;
typedef volatile signed short int		vsint16;

typedef unsigned long    				uint32;
typedef signed int    					sint32;
typedef volatile unsigned int    		vuint32;
typedef volatile signed int    			vsint32;

typedef float           				float32; 
typedef double          				float64;

#endif


#endif
