//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSNumber, NSString, NSUUID;

@interface CLWPZone : NSObject <NSCopying>
{
    NSUUID *_proximityUUID;
    NSNumber *_major;
    NSNumber *_minor;
    NSString *_identifier;
    NSData *_advertisementData;
}

@property(readonly) NSData *advertisementData; // @synthesize advertisementData=_advertisementData;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSNumber *minor; // @synthesize minor=_minor;
@property(readonly) NSNumber *major; // @synthesize major=_major;
@property(readonly) NSUUID *proximityUUID; // @synthesize proximityUUID=_proximityUUID;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 identifier:(id)arg4;

@end
