//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

@class ALSLocation;

@interface ALSLteCellTower : PBCodable
{
    int _cellID;
    ALSLocation *_location;
    int _mcc;
    int _mnc;
    int _pid;
    int _tacID;
    int _uarfcn;
    struct {
        unsigned int cellID:1;
        unsigned int mcc:1;
        unsigned int mnc:1;
        unsigned int pid:1;
        unsigned int tacID:1;
        unsigned int uarfcn:1;
    } _has;
}

@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) int uarfcn; // @synthesize uarfcn=_uarfcn;
@property(retain, nonatomic) ALSLocation *location; // @synthesize location=_location;
@property(nonatomic) int tacID; // @synthesize tacID=_tacID;
@property(nonatomic) int cellID; // @synthesize cellID=_cellID;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPid;
@property(nonatomic) BOOL hasUarfcn;
@property(readonly, nonatomic) BOOL hasLocation;
@property(nonatomic) BOOL hasTacID;
@property(nonatomic) BOOL hasCellID;
@property(nonatomic) BOOL hasMnc;
@property(nonatomic) BOOL hasMcc;
- (void)dealloc;

@end
