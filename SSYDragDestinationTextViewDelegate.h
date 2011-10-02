@class SSYDragDestinationTextView ;

@protocol SSYDragDestinationTextViewDelegate

- (BOOL)performDragOperation:(id <NSDraggingInfo>)sender
				 destination:(SSYDragDestinationTextView*)destination ;
/*
 This method should be implemented the same as -[NSObject performDragOperation]
 except that it has the additional argument which allows the dragging destination
 NSView to be distinguished, so that one delegate may serve multiple dragging
 destination NSViews.
 If the dragging destination NSView responds to -delegate, that delegate will get this
 message.  Otherwise, if delegate of the dragging destination NSView's -window responds,
 that delegate of its window will get it.
 */

@end

