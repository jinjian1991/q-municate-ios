//
//  QMShareTasks.h
//  QMShareExtension
//
//  Created by Vitaliy Gurkovsky on 10/20/17.
//  Copyright © 2017 Quickblox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BFTask.h>

@class QBChatMessage;
@class QBChatAttachment;

@interface QMShareTasks : NSObject

+ (BFTask <QBChatMessage *> *)messageForItemProvider:(NSItemProvider *)provider;

@end
