//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CRLocation, NSString;

@interface CRWifiAPLocation : PBCodable <NSCopying>
{
    NSString *_appBundleId;
    int _channel;
    int _hidden;
    CRLocation *_location;
    NSString *_mac;
    int _rssi;
    int _serverHash;
    struct {
        unsigned int hidden:1;
        unsigned int serverHash:1;
    } _has;
}

@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) CRLocation *location; // @synthesize location=_location;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int hidden; // @synthesize hidden=_hidden;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasServerHash;
@property(readonly, nonatomic) BOOL hasAppBundleId;
@property(nonatomic) BOOL hasHidden;
- (void)dealloc;

@end

