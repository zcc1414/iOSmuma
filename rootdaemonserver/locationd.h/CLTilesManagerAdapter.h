//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLNotifierServiceAdapter.h"

#import "CLTilesManagerProtocol.h"

@interface CLTilesManagerAdapter : CLNotifierServiceAdapter <CLTilesManagerProtocol>
{
}

+ (id)getSilo;
- (void)requestTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4 details:(struct CLTileFileDownloadDetails)arg5;
- (struct CLTilesManager *)tilesManager;
- (void)endService;
- (void)beginService;
- (id)initInSilo:(id)arg1;
- (void)heartAttack;

@end
