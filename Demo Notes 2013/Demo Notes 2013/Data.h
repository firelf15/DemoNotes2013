//
//  Data.h
//  Demo Notes 2013
//
//  Created by Monika Spielman on 8/22/13.
//  Copyright (c) 2013 Monika Spielman. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kDefaultText @"My Response"
#define kAllNotes @"notes"
#define kDetailView @"showDetail"

@interface Data : NSObject

+(NSMutableDictionary *)getAllNotes;
+(void)setCurrentKey:(NSString *)key;
+(NSString *)getCurrentKey;
+(void)setNoteForCurrentKey:(NSString*)note;
+(void)setNote:(NSString *)note forKey:(NSString *)key;
+(void)removeNoteForKey:(NSString *)key;

@end
