#import <Foundation/Foundation.h>

@protocol SSYForwarder

@property (retain) id forwardee ;

/*!
 @brief    One of the four methods needed to support message forwarding

 @details  This is invoked once each time an instance message is forwarded
*/
- (void)forwardInvocation:(NSInvocation *)invocation ;

/*!
 @brief    One of the four methods needed to support message forwarding

 @details  This is invoked once each time an instance message is forwarded
*/
- (NSMethodSignature*)methodSignatureForSelector:(SEL)selector ;

/*!
 @brief    One of the four methods needed to support message forwarding

 @details  This method is definitely needed if the selectors forwarded
 are menu actions, probably because the system asks if
 respondsToSelector in order to enable/disable its menu item.
 It does not get invoked for "normal" forwarded instance messages.
 */
- (BOOL)respondsToSelector:(SEL)selector ;

/*!
 @brief    One of the four methods needed to support message forwarding

 @details  This method does not get invoked for forwarded instance messages.
*/
+ (BOOL)instancesRespondToSelector:(SEL)selector ;

@end
