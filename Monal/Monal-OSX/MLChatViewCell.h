//
//  MLChatViewCell.h
//  Monal
//
//  Created by Anurodh Pokharel on 6/28/15.
//  Copyright (c) 2015 Monal.im. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#define kCellMax 282

@interface MLChatViewCell : NSTableCellView

@property (nonatomic, strong) IBOutlet NSTextView *messageText;
@property (nonatomic, strong) IBOutlet NSTextField *timeStamp;
@property (nonatomic, assign) BOOL isInbound;
@property (nonatomic, assign) NSRect messageRect;


+ (NSRect) sizeWithMessage:(NSString *)messageString;

- (void) updateDisplay; 

@end
