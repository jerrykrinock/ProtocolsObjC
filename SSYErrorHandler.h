
/*!
 @brief    Protocol for objects which have an NSError 'error' property
 */
@protocol SSYErrorHandler

/*!
 @brief    A read/writable error object.
 
 @details  This is a convenience so that methods do not have
 to pass around an error_p parameter.&nbsp; Instance methods set this
 when an error occurs and other instance methods can access it. 
 */
@property (retain) NSError* error ;

@end
