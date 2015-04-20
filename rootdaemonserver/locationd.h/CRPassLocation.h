//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CRLocation, NSMutableArray, NSString;

@interface CRPassLocation : PBCodable <NSCopying>
{
    double _age;
    NSMutableArray *_associatedStoreIds;
    CRLocation *_location;
    int _passSource;
    NSString *_passTypeId;
    int _serverHash;
    struct {
        unsigned int age:1;
        unsigned int serverHash:1;
    } _has;
}

@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) CRLocation *location; // @synthesize location=_location;
@property(nonatomic) double age; // @synthesize age=_age;
@property(nonatomic) int passSource; // @synthesize passSource=_passSource;
@property(retain, nonatomic) NSMutableArray *associatedStoreIds; // @synthesize associatedStoreIds=_associatedStoreIds;
@property(retain, nonatomic) NSString *passTypeId; // @synthesize passTypeId=_passTypeId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasServerHash;
@property(nonatomic) BOOL hasAge;
- (id)associatedStoreIdAtIndex:(unsigned int)arg1;
- (unsigned int)associatedStoreIdsCount;
- (void)addAssociatedStoreId:(id)arg1;
- (void)clearAssociatedStoreIds;
- (void)dealloc;

@end

