#import <Cocoa/Cocoa.h>

@class SSYInterappServer ;


@protocol SSYInterappServerDelegate

/*!
 @brief    This message will be received from the delegating SSYInterappServer
 whenever an interapp message is received from the SSYInterappClient class
 on another thread or process.

 @details  Immediately upon return of your implementation, and on the same thread,
 -responseHeaderByte and -responsePayload will be invoked, and the values 
 you return in those methods will be used to construct a response to the interapp
 message.
 @param    server  The delegating SSYInterappServer which sent this message
 @param    headerByte  The header byte which was provided to the SSYInterappClient
 class when sending the message on the other thread or process
 @param    data  The payload data which was provided to the SSYInterappClient
 class when sending the message on the other thread or process
*/
- (void)interappServer:(SSYInterappServer*)server
  didReceiveHeaderByte:(char)headerByte
				  data:(NSData*)data ;

/*!
 @brief    The header byte which will be sent back to an SSYInterappClient
 on another thread or process in the response to an interapp message

 @details  Typically, you will implement this as the getter of a
 property.  You will set this property during your implementation of
 -interappServer:didReceiveHeaderByte:data, after computing the appropriate
 response to the given interapp message.
*/
- (char)responseHeaderByte ;

/*!
 @brief    The payload data which will be sent back to an SSYInterappClient
 on another thread or process in the response to an interapp message
 
 @details  Typically, you will implement this as the getter of a
 property.  You will set this property during your implementation of
 -interappServer:didReceiveHeaderByte:data, after computing the appropriate
 response to the given interapp message.
 */
- (NSData*)responsePayload ;

@end

