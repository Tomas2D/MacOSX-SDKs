//
//  INIntentResponse.h
//  Intents
//
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(macosx(10.12), ios(10.0))
@interface INIntentResponse : NSObject <NSCopying, NSSecureCoding>

// This user activity will be used to launch the containing application when host application finds appropriate or when users request so.
// The containing application should implement the continuity app delegate method(s) to consume this user activity.
@property (copy, readonly, nullable, NS_NONATOMIC_IOSONLY) NSUserActivity *userActivity;

@end

NS_ASSUME_NONNULL_END
