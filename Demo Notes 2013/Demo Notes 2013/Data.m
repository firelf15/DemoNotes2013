//
//  Data.m
//  Demo Notes 2013
//
//  Created by Monika Spielman on 8/22/13.
//  Copyright (c) 2013 Monika Spielman. All rights reserved.
//

#import "Data.h"

@implementation Data

static NSMutableDictionary *allNotes;
static NSString *currentKey;

+(NSMutableDictionary *)getAllNotes
{
    if (allNotes == nil) {
        allNotes = [[NSMutableDictionary alloc] init];
    }
    return allNotes;
}

+(void)setCurrentKey:(NSString *)key
{
    currentKey = key;
}
+(NSString *)getCurrentKey
{
    return currentKey;
}
+(void)setNoteForCurrentKey:(NSString*)note
{
    [self setNote:note forKey:currentKey];
}
+(void)setNote:(NSString *)note forKey:(NSString *)key
{
    [allNotes setObject:note forKey:key];
}
+(void)removeNoteForKey:(NSString *)key
{
    [allNotes removeObjectForKey:key];
}

@end
