
/*!
 @brief    Protocol for objects which have an NSNumber 'index' property
*/
@protocol SSYIndexee

/*!
 @brief    A number object whose int value is the index of the receiver
 within its siblings
*/
@property (retain) NSNumber* index ;

@end
