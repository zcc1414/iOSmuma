//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class ALSLocation;

@interface ALSCdmaCellTower : PBCodable
{
    int _bandclass;
    int _bsid;
    int _channel;
    ALSLocation *_location;
    int _mcc;
    int _nid;
    int _pnoffset;
    int _sid;
    int _zoneid;
    struct {
        unsigned int bandclass:1;
        unsigned int bsid:1;
        unsigned int channel:1;
        unsigned int mcc:1;
        unsigned int nid:1;
        unsigned int pnoffset:1;
        unsigned int sid:1;
        unsigned int zoneid:1;
    } _has;
}

@property(nonatomic) int pnoffset; // @synthesize pnoffset=_pnoffset;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int bandclass; // @synthesize bandclass=_bandclass;
@property(nonatomic) int zoneid; // @synthesize zoneid=_zoneid;
@property(retain, nonatomic) ALSLocation *location; // @synthesize location=_location;
@property(nonatomic) int bsid; // @synthesize bsid=_bsid;
@property(nonatomic) int nid; // @synthesize nid=_nid;
@property(nonatomic) int sid; // @synthesize sid=_sid;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPnoffset;
@property(nonatomic) BOOL hasChannel;
@property(nonatomic) BOOL hasBandclass;
@property(nonatomic) BOOL hasZoneid;
@property(readonly, nonatomic) BOOL hasLocation;
@property(nonatomic) BOOL hasBsid;
@property(nonatomic) BOOL hasNid;
@property(nonatomic) BOOL hasSid;
@property(nonatomic) BOOL hasMcc;
- (void)dealloc;

@end

