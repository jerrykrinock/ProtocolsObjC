
/*!
 @brief    Protocol for objects which can display a long display name,
 as would be displayed in a tooltip.
 */
@protocol SSYToolTipper

/*!
 @brief    Returns the name by which the user recognizes to the object,
 with additional detailed information.
 */
- (NSString*)longDisplayName ;

@end
