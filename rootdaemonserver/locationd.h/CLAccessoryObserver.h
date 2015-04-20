//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EAAccessoryDelegate.h"

@class EAAccessory;

@interface CLAccessoryObserver : NSObject <EAAccessoryDelegate>
{
    EAAccessory *fAccessory;
    struct CLAccessoryObserverListener fListener;
    BOOL _iAPTimeSyncEnable;
}

@property(nonatomic) BOOL iAPTimeSyncEnable; // @synthesize iAPTimeSyncEnable=_iAPTimeSyncEnable;
- (id).cxx_construct;
- (void)onStarkTimeSyncNotification:(id)arg1;
- (void)ephemerisURLRequested:(id)arg1;
- (void)locationPointDataRequested:(id)arg1;
- (void)timeRequested:(id)arg1;
- (void)nmeaReceived:(id)arg1;
- (void)accessoryDisconnected:(id)arg1;
- (void)accessoryConnected:(id)arg1;
- (BOOL)setupEphemeris;
- (BOOL)setupAccessory:(id)arg1;
- (BOOL)sendEphemeris:(id)arg1;
- (BOOL)sendReferenceTime:(double)arg1 locationLatitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4;
- (BOOL)sendReferenceTime:(double)arg1;
- (void)accessoryDidDisconnect:(id)arg1;
- (BOOL)stopLocation;
- (BOOL)startLocation;
- (void)dealloc;
- (id)initWithListener:(const struct CLAccessoryObserverListener *)arg1 timeSync:(BOOL)arg2;

@end

