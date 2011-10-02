#import <Cocoa/Cocoa.h>

@protocol SSYErrorAlertee

/*!
 @brief    Alerts the user to an error, typically by displaying it
 as a modal sheet on the receiver's window, with no modal delegate.
 
 @details  This method returns immediately.  If a sheet is involved,
 the sheet itself handles the didEndSelector and terminates the process.
 */
- (void)alertError:(NSError*)error ;	

@end