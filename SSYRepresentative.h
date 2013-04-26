#import <Foundation/Foundation.h>

/*!
 @brief    Protocol for any class that responds to -representedObject
 
 @details  NSMenuItem conforms to this protocol.  You can use it to make other
 objects act like NSMenuItem instances, for the purpose of -representedObject.
 
 This protocol was added in BookMacster 1.14.4.
 */
@protocol SSYRepresentative <NSObject>

- (id)representedObject ;

@end
