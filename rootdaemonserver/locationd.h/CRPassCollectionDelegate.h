//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBRequesterDelegate.h"

@interface CRPassCollectionDelegate : NSObject <PBRequesterDelegate>
{
    struct CLCollectionRequester *fRequester;
}

- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidFinish:(id)arg1;
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
- (id)initWithRequester:(struct CLCollectionRequester *)arg1;

@end

