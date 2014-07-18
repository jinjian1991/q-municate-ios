//
//  Utilities.h
//  Q-municate
//
//  Created by Igor Alefirenko on 19/02/2014.
//  Copyright (c) 2014 Quickblox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QMIncomingCallController.h"
#import "NSDateFormatter+SinceDateFormat.h"


@interface QMIncomingCallService : NSObject

@property (strong, nonatomic) NSDateFormatter *dateFormatter;

- (void)showIncomingCallControllerWithOpponentID:(NSUInteger)opponentID conferenceType:(QBVideoChatConferenceType)conferenceType;
- (void)hideIncomingCallControllerWithStatus:(NSString *)status;

@end
