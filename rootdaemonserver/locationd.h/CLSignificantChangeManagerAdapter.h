//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLLocationProviderAdapter.h"

#import "CLSignificantChangeManagerProtocol.h"

@interface CLSignificantChangeManagerAdapter : CLLocationProviderAdapter <CLSignificantChangeManagerProtocol>
{
}

+ (id)getSilo;
- (void)endService;
- (void)beginService;
- (id)initInSilo:(id)arg1;
- (void)heartAttack;

@end

