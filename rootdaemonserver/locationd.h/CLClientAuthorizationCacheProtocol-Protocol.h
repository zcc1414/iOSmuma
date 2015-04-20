//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLIntersiloServiceProtocol.h"

@class NSDictionary, NSString;

@protocol CLClientAuthorizationCacheProtocol <CLIntersiloServiceProtocol>
- (void)clearAuthorizationOfClients;
- (void)clearAuthorizationOfClient:(NSString *)arg1;
- (void)setClient:(NSString *)arg1 authorization:(int)arg2 forMask:(unsigned int)arg3;
- (void)setAllClients:(NSDictionary *)arg1;
- (int)syncgetAuthorizationOfClient:(NSString *)arg1 forServiceMask:(unsigned int)arg2;
@end
